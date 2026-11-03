#pragma GCC optimize ("Ofast")
#include <M5Unified.h>
#include <ESP32Encoder.h>
#include <esp_now.h>
#include <WiFi.h>
#include <PatternMath.h>
#include "OneButton.h"          //For Button Debounce and Longpress
#include "config.h"
#include <Arduino.h>
#include <Wire.h>
#include <lvgl.h>
#include <SPI.h>
#include "ui/ui.h"
#include "main.h"

extern "C" {
  extern lv_obj_t * ui_ComboS;
  extern lv_obj_t * ui_SelectRotationS;
  extern lv_obj_t * ui_RotationSensL;
  extern lv_obj_t * ui_rotationsensslider;
  extern lv_obj_t * ui_rotationsensvalue;
  extern lv_obj_t * ui_rotationoverdrive;
  void saveselect(lv_event_t * e);
  void rotationreversetoggle(lv_event_t * e);
  void saverotationoverdrive(lv_event_t * e);
}
#include "Preferences.h"      //EEPROM replacement function

#define LV_CONF_INCLUDE_SIMPLE
#include <lvgl.h>
#include <esp_timer.h>

constexpr int32_t HOR_RES=320;
constexpr int32_t VER_RES=240;

///////////////////////////////////////////
////
////  To Debug or not to Debug
////
///////////////////////////////////////////

// Uncomment the following line if you wish to print DEBUG info
#define DEBUG 

#ifdef DEBUG
#define LogDebug(...) Serial.println(__VA_ARGS__)
#define LogDebugFormatted(...) Serial.printf(__VA_ARGS__)
#else
#define LogDebug(...) ((void)0)
#define LogDebugFormatted(...) ((void)0)
#endif

#define OFF 0.0
#define ON 1.0

// Screens 

#define ST_UI_START 0
#define ST_UI_HOME 1

#define ST_UI_MENUE 10
#define ST_UI_PATTERN 11
#define ST_UI_Torqe 12
#define ST_UI_EJECTSETTINGS 13
#define ST_UI_ROTATION 15
#define ST_UI_TWEAK 16

#define ST_UI_SETTINGS 20

int st_screens = ST_UI_START;



// Menü States

#define CONNECT 0
#define HOME 1
#define MENUE 2
#define MENUE2 3
#define TORQE 4
#define PATTERN_MENUE 5
#define PATTERN_MENUE2 6
#define PATTERN_MENUE3 7
#define CUM_MENUE 20

int menuestatus = CONNECT;

// EEPROM replacement function using Non-volatie memory (NVS)
Preferences m5prf; //initiate an instance of the Preferences library

bool eject_status = false;
bool dark_mode = false;
bool vibrate_mode = true;
bool touch_home = false;
bool touch_disabled = false;

// Command States
#define CONN 0
#define SPEED 1
#define DEPTH 2
#define STROKE 3
#define SENSATION 4
#define PATTERN 5
#define TORQE_F 6
#define TORQE_R 7
#define OFF 10
#define ON  11
#define SETUP_D_I 12
#define SETUP_D_I_F 13
#define REBOOT 14

#define CUMSPEED 20
#define CUMTIME 21
#define CUMSIZE   22
#define CUMACCEL  23

// Rotation axis commands (must match the mainboard exactly)
#define ROT_ON 30
#define ROT_OFF 31
#define ROT_SPEED 32
#define ROT_PATTERN 33
#define ROT_DIR 34
#define ROT_SENS 35        // must match mainboard
#define ROT_OVERDRIVE 36   // must match mainboard
#define COMBO 37           // must match mainboard
#define TWEAK_BURST 38     // must match mainboard
#define TWEAK_DIAL 39      // must match mainboard
#define TWEAK_SPARE 40     // must match mainboard

#define CONNECT 88
#define HEARTBEAT 99

int displaywidth;
int displayheight;
int progheight = 30;
int distheight = 10;
int S1Pos;
int S2Pos;
int S3Pos;
int S4Pos;
bool rstate = false;
int pattern = 2;
float rotationSpeed = 0.0;
int rotationPattern = 0;
bool RotationOn = false;
bool rotationDirection = false;
float rotationSensation = 0.0;      // -100 to 100, plumbed only, no pattern acts on it yet
bool rotationOverdrive = false;
int currentCombo = -1;              // -1 = none/custom

// Tweak screen. The mainboard is the source of truth (echoed at pairing); these are only the
// remote's copy. The defaults and ranges below must match OSSM_Config.h and the slider ranges in ui.c.
float tweakBurstRpm = 120.0f;       // burst ceiling in RPM at full dial (overdrive on)
float tweakDialRpm = 100.0f;        // RPM that 100% on the rotation speed dial means
float tweakSpare = 0.0f;            // reserved, no effect yet
const float TWEAK_BURST_DEFAULT = 120.0f;   // = ROTATION_BURST_RPM
const float TWEAK_DIAL_DEFAULT = 100.0f;    // = ROTATION_MAX_RPM
const float TWEAK_SPARE_DEFAULT = 0.0f;
const float TWEAK_BURST_MIN = 50.0f;
const float TWEAK_DIAL_MIN = 20.0f;
const float TWEAK_RPM_MAX = 300.0f;         // generous on purpose while testing, tighten later

// Home positions: where L double click (one screen) and M hold (everything) put the sliders.
const float HOME_SPEED = 0.0f;
const float HOME_DEPTH = 0.0f;
const float HOME_STROKE = 0.0f;
const float HOME_SENS = 60.0f;
const float HOME_ROT_SPEED = 0.0f;
const float HOME_ROT_SENS = 60.0f;
char patternstr[20];
bool onoff = false;


long speedenc = 0;
long depthenc = 0;
long strokeenc = 0;
long sensationenc = 0;
long torqe_f_enc = 0;
long torqe_r_enc = 0;
long cum_t_enc = 0;
long cum_si_enc =0;
long cum_s_enc = 0;
long cum_a_enc = 0;
long encoder4_enc = 0;

extern float maxdepthinmm = 400.0;
extern float speedlimit = 300;
int speedscale = -5;

float speed = 0.0;
float depth = 0.0;
float stroke = 0.0;
float sensation = 0.0;
float torqe_f = 100.0;
float torqe_r = -180.0;
float cum_time = 0.0;
float cum_speed = 0.0;
float cum_size = 0.0;
float cum_accel = 0.0;

unsigned long nowMs;
int  rampMs;
bool rampEnabled = true;
int rampValue;
int rampTime = 75;
int maxRamp = 8;
int encId;
int activeEncId;

bool dynamicStroke = false;

ESP32Encoder encoder1;
ESP32Encoder encoder2;
ESP32Encoder encoder3;
ESP32Encoder encoder4;

// Variable to store if sending data was successful
String success;

float out_esp_speed;
float out_esp_depth;
float out_esp_stroke;
float out_esp_sensation;
float out_esp_pattern;
bool out_esp_rstate;
bool out_esp_connected;
int out_esp_command;
float out_esp_value;
int out_esp_target;

float incoming_esp_speed;
float incoming_esp_depth;
float incoming_esp_stroke;
float incoming_esp_sensation;
float incoming_esp_pattern;
bool incoming_esp_rstate;
bool incoming_esp_connected;
bool incoming_esp_heartbeat;
int incoming_esp_target;

typedef struct struct_message {
  float esp_speed;
  float esp_depth;
  float esp_stroke;
  float esp_sensation;
  float esp_pattern;
  bool esp_rstate;
  bool esp_connected;
  bool esp_heartbeat;
  int esp_command;
  float esp_value;
  int esp_target;
  float esp_rotation_speed;
  float esp_rotation_pattern;
  float esp_rotation_direction;   // 0.0 = forward, non-zero = reverse (must match mainboard)
  float esp_rotation_sensation;   // -100 to 100 (must match mainboard)
  float esp_rotation_overdrive;   // 0.0 = off (must match mainboard)
  float esp_combo;                // active combo index, -1 = none (must match mainboard)
  float esp_tweak_burst;          // burst ceiling RPM (must match mainboard)
  float esp_tweak_dial;           // dial max RPM (must match mainboard)
  float esp_tweak_spare;          // reserved (must match mainboard)
} struct_message;

bool Ossm_paired = false;

struct_message outgoingcontrol;
struct_message incomingcontrol;

esp_now_peer_info_t peerInfo;
uint8_t OSSM_Address[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}; // Broadcast to all ESP32s, upon connection gets updated to the actual address

#define HEARTBEAT_INTERVAL 500/portTICK_PERIOD_MS	// 0.5 seconds (mainboard rotation failsafe needs a fast keepalive)

// Bool

bool EJECT_On = false;
bool OSSM_On = false;

// Tasks:

TaskHandle_t eRemote_t  = nullptr;  // Esp Now Remote Task

void espNowRemoteTask(void *pvParameters); // Handels the EspNow Remote
bool connectbtn(); //Handels Connectbtn
int64_t touchmenue();

// Makes vibration motor go Brrrrr
void vibrate(int vbr_Intensity = 200, int vbr_Length = 100){
    if(lv_obj_has_state(ui_vibrate, LV_STATE_CHECKED) == 1){
      M5.Power.setVibration(vbr_Intensity);
      vTaskDelay(vbr_Length);
      M5.Power.setVibration(0);
    }
}

void mxclick();
bool mxclick_short_waspressed = false;
void mxlong();
bool mxclick_long_waspressed = false;
void click2();
bool click2_short_waspressed = false;
void click2double();
bool click2_double_waspressed = false;
void click3();
bool click3_short_waspressed = false;
void c3long();
bool click3_long_waspressed = false;
void c3double();
bool click3_double_waspressed = false;


lv_display_t *display;
lv_indev_t *indev;

static lv_draw_buf_t *draw_buf1;
static lv_draw_buf_t *draw_buf2;

// Display flushing
void my_display_flush(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  lv_draw_sw_rgb565_swap(px_map, w*h);
  M5.Display.pushImageDMA<uint16_t>(area->x1, area->y1, w, h, (uint16_t *)px_map);
  lv_disp_flush_ready(disp);
}

uint32_t my_tick_function() {
  return (esp_timer_get_time() / 1000LL);
}

void my_touchpad_read(lv_indev_t * drv, lv_indev_data_t * data) {
  M5.update();
  auto count = M5.Touch.getCount();

  if(touch_disabled != true){
    if ( count == 0 ) {
      data->state = LV_INDEV_STATE_RELEASED;
    } else {
      auto touch = M5.Touch.getDetail(0);
      data->state = LV_INDEV_STATE_PRESSED; 
      data->point.x = touch.x;
      data->point.y = touch.y;
    }
}
}

static void event_cb(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *label = reinterpret_cast<lv_obj_t *>(lv_event_get_user_data(e));

  switch (code)
  {
  case LV_EVENT_PRESSED:
    lv_label_set_text(label, "The last button event:\nLV_EVENT_PRESSED");
    break;
  case LV_EVENT_CLICKED:
    lv_label_set_text(label, "The last button event:\nLV_EVENT_CLICKED");
    break;
  case LV_EVENT_LONG_PRESSED:
    lv_label_set_text(label, "The last button event:\nLV_EVENT_LONG_PRESSED");
    break;
  case LV_EVENT_LONG_PRESSED_REPEAT:
    lv_label_set_text(label, "The last button event:\nLV_EVENT_LONG_PRESSED_REPEAT");
    break;
  default:
    break;
  }
}



void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
}

void OnDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len) {
  memcpy(&incomingcontrol, incomingData, sizeof(incomingcontrol));

  if(incomingcontrol.esp_target == M5_ID && Ossm_paired == false){

    // Remove the existing peer (0xFF:0xFF:0xFF:0xFF:0xFF:0xFF)
    esp_err_t result = esp_now_del_peer(peerInfo.peer_addr);

    if (result == ESP_OK) {

      memcpy(OSSM_Address, mac, 6); //get the mac address of the sender
      
      // Add the new peer
      memcpy(peerInfo.peer_addr, OSSM_Address, 6);
      if (esp_now_add_peer(&peerInfo) == ESP_OK) {
        LogDebugFormatted("New peer added successfully, OSSM addresss : %02X:%02X:%02X:%02X:%02X:%02X\n", OSSM_Address[0], OSSM_Address[1], OSSM_Address[2], OSSM_Address[3], OSSM_Address[4], OSSM_Address[5]);
        Ossm_paired = true;
      }
      else {
        LogDebug("Failed to add new peer");
      }
    }
    else {
      LogDebug("Failed to remove peer");
    }

    
    if(incomingcontrol.esp_speed > speedlimit){
      speedlimit = 300;
    } else (
    speedlimit = incomingcontrol.esp_speed);
    LogDebug(speedlimit);
    maxdepthinmm = incomingcontrol.esp_depth;
    LogDebug(maxdepthinmm);
    pattern = incomingcontrol.esp_pattern;
    LogDebug(pattern);
    rotationSpeed = incomingcontrol.esp_rotation_speed;
    rotationPattern = (int)incomingcontrol.esp_rotation_pattern;
    rotationDirection = (incomingcontrol.esp_rotation_direction != 0.0f);
    rotationSensation = incomingcontrol.esp_rotation_sensation;
    rotationOverdrive = (incomingcontrol.esp_rotation_overdrive != 0.0f);
    currentCombo = (int)incomingcontrol.esp_combo;
    if (incomingcontrol.esp_tweak_burst > 0.0f) tweakBurstRpm = incomingcontrol.esp_tweak_burst;
    if (incomingcontrol.esp_tweak_dial > 0.0f) tweakDialRpm = incomingcontrol.esp_tweak_dial;
    tweakSpare = incomingcontrol.esp_tweak_spare;
    outgoingcontrol.esp_target = OSSM_ID;
    
    result = esp_now_send(OSSM_Address, (uint8_t *) &outgoingcontrol, sizeof(outgoingcontrol));
    LogDebug(result);
    
    if (result == ESP_OK) {
      Ossm_paired = true;
      lv_scr_load_anim(ui_Pattern, LV_SCR_LOAD_ANIM_FADE_ON,20,0,false);   // Select is the first screen after pairing
    }
  }
  switch(incomingcontrol.esp_command)
    {
    case OFF: 
    {
    OSSM_On = false;
    }
    break;
    case ON:
    {
    OSSM_On = true;
    }
    break;
    case ROT_OFF:
    {
    RotationOn = false;
    }
    break;
    case ROT_ON:
    {
    RotationOn = true;
    }
    break;
    }
}

//Sends Commands and Value to Remote device returns ture or false if sended
bool SendCommand(int Command, float Value, int Target){
  
  if(Ossm_paired == true){

    outgoingcontrol.esp_connected = true;
    outgoingcontrol.esp_command = Command;
    outgoingcontrol.esp_value = Value;
    outgoingcontrol.esp_target = Target;
    esp_err_t result = esp_now_send(OSSM_Address, (uint8_t *) &outgoingcontrol, sizeof(outgoingcontrol));
  
    if (result == ESP_OK) {
      return true;
    } 
    else {
      delay(20);
      esp_err_t result = esp_now_send(OSSM_Address, (uint8_t *) &outgoingcontrol, sizeof(outgoingcontrol));
      return false;
    }
  }
  return false;   // not paired
}

void rotationStart()                 { SendCommand(ROT_ON, 0.0, OSSM_ID); if (Ossm_paired) RotationOn = true; }
void rotationStop()                  { SendCommand(ROT_OFF, 0.0, OSSM_ID); RotationOn = false; }
void rotationSetSpeed(float percent) { SendCommand(ROT_SPEED, percent, OSSM_ID); }
void rotationSetPattern(int index)   { SendCommand(ROT_PATTERN, (float)index, OSSM_ID); }
void rotationSetSensation(float pct) { SendCommand(ROT_SENS, pct, OSSM_ID); }
void rotationSetOverdrive(bool on)   { SendCommand(ROT_OVERDRIVE, on ? 1.0 : 0.0, OSSM_ID); }
void tweakSetBurst(float rpm)        { SendCommand(TWEAK_BURST, rpm, OSSM_ID); }
void tweakSetDial(float rpm)         { SendCommand(TWEAK_DIAL, rpm, OSSM_ID); }
void tweakSetSpare(float value)      { SendCommand(TWEAK_SPARE, value, OSSM_ID); }

// Full pattern names, in table order (must match the mainboard's pattern tables).
// The Select rollers show abbreviated names; labels elsewhere use these.
const char* const strokeNames[] = {
  "Simple Stroke", "Teasing or Pounding", "Robo Stroke", "Half'n'Half", "Deeper",
  "Stop'n'Go", "Insist", "Jack Hammer", "Stroke Nibbler", "Depth Pulse"
};
const int strokeNameCount = sizeof(strokeNames) / sizeof(strokeNames[0]);

const char* const rotationNames[] = {
  "Steady", "Sweep", "Escalation", "Random Bursts", "Screw Sync", "Stutter Sync",
  "Bottom Hold Sync", "Depth Surge", "Threshold Burst", "Tempo Match", "Snap Reverse",
  "Alternating Sweep", "Random Direction Bursts", "Metronome Flip", "Drunken Walk",
  "Escalating Reversal", "Depth Trigger Spin"
};
const int rotationNameCount = sizeof(rotationNames) / sizeof(rotationNames[0]);

// Combo mirror of the mainboard comboTable (same order, same speeds). The mainboard is
// the source of truth; this only lets the remote move the rollers and show names.
struct ComboUI { const char* stroke; const char* rotation; float speed; };
const ComboUI comboUI[] = {
  { "Teasing or Pounding", "Screw Sync",              50.0f },
  { "Deeper",              "Sweep",                   50.0f },
  { "Simple Stroke",       "Depth Surge",             50.0f },
  { "Robo Stroke",         "Tempo Match",             50.0f },
  { "Depth Pulse",         "Depth Trigger Spin",      50.0f },
  { "Insist",              "Random Direction Bursts", 50.0f }
};
const int comboUICount = sizeof(comboUI) / sizeof(comboUI[0]);

int nameIndex(const char* const* names, int count, const char* name) {
  for (int i = 0; i < count; i++) {
    if (strcmp(names[i], name) == 0) return i;
  }
  return 0;
}

// Bench test: type a command in the Serial Monitor and press Enter
//   r1 = start, r0 = stop, rs50 = speed 50%, rp2 = pattern index 2
void handleSerialTest() {
  static char buf[16];
  static uint8_t n = 0;
  while (Serial.available() > 0) {
    char c = Serial.read();
    if (c == '\n' || c == '\r') {
      if (n > 0) {
        buf[n] = 0;
        if (strcmp(buf, "r1") == 0)              rotationStart();
        else if (strcmp(buf, "r0") == 0)         rotationStop();
        else if (strncmp(buf, "rs", 2) == 0)     rotationSetSpeed(atof(buf + 2));
        else if (strncmp(buf, "rp", 2) == 0)     rotationSetPattern(atoi(buf + 2));
        LogDebug(buf);
        n = 0;
      }
    } else if (n < sizeof(buf) - 1) {
      buf[n++] = c;
    }
  }
}

void saverotationpattern(lv_event_t * e){
  rotationSetPattern(rotationPattern);   // the rotation roller moved to the Select screen
}

// Select screen: moving the combo roller moves the stroke and rotation rollers.
void selectcombochanged(){
  uint32_t c = lv_roller_get_selected(ui_ComboS);
  if (c == 0 || (int)c > comboUICount) return;   // 0 = Custom
  const ComboUI &cu = comboUI[c - 1];
  lv_roller_set_selected(ui_PatternS, nameIndex(strokeNames, strokeNameCount, cu.stroke), LV_ANIM_ON);
  lv_roller_set_selected(ui_SelectRotationS, nameIndex(rotationNames, rotationNameCount, cu.rotation), LV_ANIM_ON);
}

extern "C" void saveselect(lv_event_t * e){
  uint32_t c = lv_roller_get_selected(ui_ComboS);
  if (c > 0 && (int)c <= comboUICount) {
    int ci = (int)c - 1;
    SendCommand(COMBO, (float)ci, OSSM_ID);
    pattern = nameIndex(strokeNames, strokeNameCount, comboUI[ci].stroke);
    rotationPattern = nameIndex(rotationNames, rotationNameCount, comboUI[ci].rotation);
    rotationSpeed = comboUI[ci].speed;
    currentCombo = ci;
  } else {
    int newStroke = (int)lv_roller_get_selected(ui_PatternS);
    int newRotation = (int)lv_roller_get_selected(ui_SelectRotationS);
    if (newStroke != pattern) {
      pattern = newStroke;
      SendCommand(PATTERN, (float)pattern, OSSM_ID);
    }
    if (newRotation != rotationPattern) {
      rotationPattern = newRotation;
      rotationSetPattern(rotationPattern);
    }
    currentCombo = -1;
  }
  if (pattern >= 0 && pattern < strokeNameCount) {
    lv_label_set_text(ui_HomePatternLabel, strokeNames[pattern]);
  }
}

extern "C" void rotationreversetoggle(lv_event_t * e){
  if (lv_obj_has_state(ui_rotationdirection, LV_STATE_CHECKED)) {
    lv_obj_clear_state(ui_rotationdirection, LV_STATE_CHECKED);
  } else {
    lv_obj_add_state(ui_rotationdirection, LV_STATE_CHECKED);
  }
  saverotationdirection(e);
}

extern "C" void saverotationoverdrive(lv_event_t * e){
  rotationOverdrive = lv_obj_has_state(ui_rotationoverdrive, LV_STATE_CHECKED);
  rotationSetOverdrive(rotationOverdrive);
}

void saverotationdirection(lv_event_t * e){
  rotationDirection = lv_obj_has_state(ui_rotationdirection, LV_STATE_CHECKED);
  SendCommand(ROT_DIR, rotationDirection ? 1.0 : 0.0, OSSM_ID);
}

// Stop the stroke and rotation together (M hold, Select M click while running).
void stopAllMotion(){
  SendCommand(OFF, 0.0, OSSM_ID);
  rotationStop();
}

// L double click on Stroke tune: sliders back to their home positions. Running state is untouched.
void resetStrokeTune(){
  speed = HOME_SPEED;
  depth = HOME_DEPTH;
  stroke = HOME_STROKE;
  sensation = HOME_SENS;
  SendCommand(SPEED, speed, OSSM_ID);
  SendCommand(DEPTH, depth, OSSM_ID);
  SendCommand(STROKE, stroke, OSSM_ID);
  SendCommand(SENSATION, sensation, OSSM_ID);
}

// L double click on Rotation tune: speed, sensation and overdrive back to home. Reverse and running state are untouched.
void resetRotationTune(){
  rotationSpeed = HOME_ROT_SPEED;
  rotationSensation = HOME_ROT_SENS;
  rotationOverdrive = false;
  rotationSetSpeed(rotationSpeed);
  rotationSetSensation(rotationSensation);
  rotationSetOverdrive(false);
}

// L double click on Tweak: back to the OSSM_Config.h defaults.
void resetTweak(){
  tweakDialRpm = TWEAK_DIAL_DEFAULT;
  tweakBurstRpm = TWEAK_BURST_DEFAULT;
  tweakSpare = TWEAK_SPARE_DEFAULT;
  tweakSetDial(tweakDialRpm);
  tweakSetBurst(tweakBurstRpm);
  tweakSetSpare(tweakSpare);
}

// M hold on any screen: stop both axes first, then put every tune slider back to home.
// Tweak values are deliberately left alone.
void mholdstopreset(){
  stopAllMotion();
  resetStrokeTune();
  resetRotationTune();
}

// M click on Select (button or touch): if anything is running stop both, otherwise start both.
void selecttogglestartstop(lv_event_t * e){
  if(OSSM_On || RotationOn){
    stopAllMotion();
  } else {
    SendCommand(ON, 0.0, OSSM_ID);
    rotationSetSpeed(rotationSpeed);
    rotationSetPattern(rotationPattern);
    rotationStart();
  }
}

void rotationbuttonmevent(lv_event_t * e){
  if(RotationOn == false){
    rotationSetSpeed(rotationSpeed);   // push current speed first so it never starts at a stale value
    rotationSetPattern(rotationPattern);
    rotationStart();
  } else {
    rotationStop();
  }
}

void connectbutton(lv_event_t * e)
{
    if(!Ossm_paired){
      outgoingcontrol.esp_command = HEARTBEAT;
      outgoingcontrol.esp_heartbeat = true;
      outgoingcontrol.esp_target = OSSM_ID;
      esp_err_t result = esp_now_send(OSSM_Address, (uint8_t *) &outgoingcontrol, sizeof(outgoingcontrol));
    }
}

void savesettings(lv_event_t * e)
{

  m5prf.begin("m5-ctnr", false); //open NVS-storage container/session. False means that it's used it in read+write mode. Set true to open or create the namespace in read-only mode.

  if(lv_obj_has_state(ui_vibrate, LV_STATE_CHECKED) == 1){
    m5prf.putBool("Vibrate", true); //NSV-storage write true to key "Vibrate"
	}else if(lv_obj_has_state(ui_vibrate, LV_STATE_CHECKED) == 0){
    m5prf.putBool("Vibrate", false);
	}

  if(lv_obj_has_state(ui_lefty, LV_STATE_CHECKED) == 1){
    m5prf.putBool("Lefty", true); // ui_lefty in SL-Studio code is actually Touch-enable toggle
	}else if(lv_obj_has_state(ui_lefty, LV_STATE_CHECKED) == 0){
    m5prf.putBool("Lefty", false);
	}

	if(lv_obj_has_state(ui_ejectaddon, LV_STATE_CHECKED) == 1){
    m5prf.putBool("ejectAddon", true);  
	}else if(lv_obj_has_state(ui_ejectaddon, LV_STATE_CHECKED) == 0){
    m5prf.putBool("ejectAddon", false);
	}

  //read darkmode saved setting to force reboot for theme change
  bool theme_Change_Previous = false;
  bool theme_Change_New = false;
  theme_Change_Previous = m5prf.getBool("Darkmode", true);

  if(lv_obj_has_state(ui_darkmode, LV_STATE_CHECKED) == 1){
    theme_Change_New = true;
    m5prf.putBool("Darkmode", true);
	}else if(lv_obj_has_state(ui_darkmode, LV_STATE_CHECKED) == 0){
    theme_Change_New = false;
    m5prf.putBool("Darkmode", false);
	}

  m5prf.end(); //close storage container/session.
  delay(100);

  if(theme_Change_Previous != theme_Change_New){
    vibrate(225,75);
    ESP.restart(); //reboot is only required to change themes, you don't need to restart for settings to save with NVS.
  }else{
    vibrate(225,75);
  }
}

void screenmachine(lv_event_t * e)
{
  if (lv_scr_act() == ui_Start){
    st_screens = ST_UI_START;
  } else if (lv_scr_act() == ui_Home){
    st_screens = ST_UI_HOME;
    speed = lv_slider_get_value(ui_homespeedslider);
    LogDebug(speedenc);
    LogDebug(speed);

    lv_slider_set_range(ui_homedepthslider, 0, maxdepthinmm);
    lv_slider_set_range(ui_homestrokeslider, 0, maxdepthinmm);

            
  } else if (lv_scr_act() == ui_Menue){
    st_screens = ST_UI_MENUE;
    encoder4_enc = encoder4.getCount();   // resync baseline so the first turn does not jump
  } else if (lv_scr_act() == ui_Pattern){
    st_screens = ST_UI_PATTERN;
    // start every roller on what is actually running
    lv_roller_set_selected(ui_PatternS, constrain(pattern, 0, strokeNameCount - 1), LV_ANIM_OFF);
    lv_roller_set_selected(ui_SelectRotationS, constrain(rotationPattern, 0, rotationNameCount - 1), LV_ANIM_OFF);
    lv_roller_set_selected(ui_ComboS, (currentCombo >= 0 && currentCombo < comboUICount) ? currentCombo + 1 : 0, LV_ANIM_OFF);
    encoder1.setCount(0);
    encoder2.setCount(0);
    encoder3.setCount(0);
    encoder4_enc = encoder4.getCount();
  } else if (lv_scr_act() == ui_Torqe){
    st_screens = ST_UI_Torqe;
    torqe_f = lv_slider_get_value(ui_outtroqeslider);
    torqe_f_enc = fscale(50, 200, 0, Encoder_MAP, torqe_f, 0);
    encoder1.setCount(torqe_f_enc);

    torqe_r = lv_slider_get_value(ui_introqeslider);
    torqe_r_enc = fscale(20, 200, 0, Encoder_MAP, torqe_r, 0);
    encoder4.setCount(torqe_r_enc);

  } else if (lv_scr_act() == ui_Rotation){
    st_screens = ST_UI_ROTATION;
    lv_slider_set_value(ui_rotationspeedslider, (int)rotationSpeed, LV_ANIM_OFF);
    lv_slider_set_value(ui_rotationsensslider, (int)rotationSensation, LV_ANIM_OFF);
    lv_label_set_text(ui_RotationPatternTitle, rotationNames[constrain(rotationPattern, 0, rotationNameCount - 1)]);
    if (rotationOverdrive) {
      lv_obj_add_state(ui_rotationoverdrive, LV_STATE_CHECKED);
    } else {
      lv_obj_clear_state(ui_rotationoverdrive, LV_STATE_CHECKED);
    }
    if (rotationDirection) {
      lv_obj_add_state(ui_rotationdirection, LV_STATE_CHECKED);
    } else {
      lv_obj_clear_state(ui_rotationdirection, LV_STATE_CHECKED);
    }
    encoder1.setCount(0);
    encoder2.setCount(0);
    encoder3.setCount(0);
    encoder4_enc = encoder4.getCount();

  } else if (lv_scr_act() == ui_Tweak){
    st_screens = ST_UI_TWEAK;
    lv_slider_set_value(ui_tweakburstslider, (int)tweakBurstRpm, LV_ANIM_OFF);
    lv_slider_set_value(ui_tweakdialslider, (int)tweakDialRpm, LV_ANIM_OFF);
    lv_slider_set_value(ui_tweakspareslider, (int)tweakSpare, LV_ANIM_OFF);
    encoder1.setCount(0);
    encoder2.setCount(0);
    encoder3.setCount(0);
    encoder4_enc = encoder4.getCount();

  } else if (lv_scr_act() == ui_EJECTSettings){
    st_screens = ST_UI_EJECTSETTINGS;
  } else if (lv_scr_act() == ui_Settings){
    st_screens = ST_UI_SETTINGS;
    encoder4_enc = encoder4.getCount();
  }
}

void ejectcreampie(lv_event_t * e){
  if(EJECT_On == true){
    lv_obj_clear_state(ui_HomeButtonL, LV_STATE_CHECKED);
    EJECT_On = false;
  } else if(EJECT_On == false){
    lv_obj_clear_state(ui_HomeButtonL, LV_STATE_CHECKED);
    depth = 0;
    speed = 0;
    stroke = 0;
    SendCommand(SETUP_D_I, 0.0, OSSM_ID);
    SendCommand(DEPTH, depth, OSSM_ID);
    screenmachine(e);
    EJECT_On = true;
  } 
}

void savepattern(lv_event_t * e){
  pattern = lv_roller_get_selected(ui_PatternS);
  lv_roller_get_selected_str(ui_PatternS,patternstr,0);
  lv_label_set_text(ui_HomePatternLabel,patternstr);
  LogDebug(pattern);
  float patterns = pattern;
  SendCommand(PATTERN, patterns, OSSM_ID);
}

void homebuttonmevent(lv_event_t * e){
  LogDebug("HomeButton");
  if(OSSM_On == false){
    SendCommand(ON, 0.0, OSSM_ID);
  } else if(OSSM_On == true){
    SendCommand(OFF, 0.0, OSSM_ID);   // stroke only, rotation has its own start/stop
  }
}

void setupDepthInter(lv_event_t * e){
    SendCommand(SETUP_D_I, 0.0, OSSM_ID);
}

void setupdepthF(lv_event_t * e){
    SendCommand(SETUP_D_I_F, 0.0, OSSM_ID);
}

void setup(){
  auto cfg = M5.config();
  M5.begin(cfg); Serial.begin(115200);
  M5.Display.setBrightness(200);

  m5prf.begin("m5-ctnr", false); 
    // Loads these settings at boot
    eject_status = m5prf.getBool("ejectAddon", false); //boolean here is used if key does not exist yet
    dark_mode = m5prf.getBool("Darkmode", true);       // ^ (basically first boot defaults, saving settings surives a re-flash!)
    vibrate_mode = m5prf.getBool("Vibrate", true);
    touch_home= m5prf.getBool("Lefty", false);       // = touchcreen. There apears to be no actual lefthanded mode anywhere
  m5prf.end();

  M5.Power.setChargeCurrent(BATTERY_CHARGE_CURRENT);
  LogDebug("\n Starting");      // Start LogDebug

  WiFi.mode(WIFI_STA);
  LogDebug(WiFi.macAddress());

  // Init ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
  }
  // Once ESPNow is successfully Init, we will register for Send CB to
  // get the status of Trasnmitted packet
  esp_now_register_send_cb(OnDataSent);

  // register peer
  peerInfo.channel = 0;  
  peerInfo.encrypt = false;
  // register first peer  
  memcpy(peerInfo.peer_addr, OSSM_Address, 6);
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    Serial.println("Failed to add peer");
  }
  // Register for a callback function that will be called when data is received
  esp_now_register_recv_cb(OnDataRecv);

  xTaskCreatePinnedToCore(espNowRemoteTask,      /* Task function. */
                            "espNowRemoteTask",  /* name of task. */
                            3096,               /* Stack size of task */
                            NULL,               /* parameter of the task */
                            5,                  /* priority of the task */
                            &eRemote_t,         /* Task handle to keep track of created task */
                            0);                 /* pin task to core 0 */
  delay(200);
  
  encoder1.attachHalfQuad(ENC_1_CLK, ENC_1_DT);
  encoder2.attachHalfQuad(ENC_2_CLK, ENC_2_DT);
  encoder3.attachHalfQuad(ENC_3_CLK, ENC_3_DT);
  encoder4.attachHalfQuad(ENC_4_CLK, ENC_4_DT);
  Button1.attachClick(mxclick);
  Button1.attachLongPressStart(mxlong);
  Button2.attachClick(click2);
  Button2.attachDoubleClick(click2double);
  Button3.attachClick(click3);
  Button3.attachLongPressStart(c3long);
  Button3.attachDoubleClick(c3double);

  // Initialize `disp_buf` display buffer with the buffer(s).
  // lv_draw_buf_init(&draw_buf, LV_HOR_RES_MAX, LV_VER_RES_MAX);
  M5.Display.setEpdMode(epd_mode_t::epd_fastest); // fastest but very-low quality.
  if (M5.Display.width() < M5.Display.height())
  { /// Landscape mode.
  M5.Display.setRotation(M5.Display.getRotation() ^ 1);
  }
  
  lv_init();
  lv_tick_set_cb(my_tick_function);

  display = lv_display_create(HOR_RES, VER_RES);
  lv_display_set_flush_cb(display, my_display_flush);

  static lv_color_t buf1[HOR_RES * 15] __attribute__((aligned(64))); 
  lv_display_set_buffers(display, buf1, nullptr, sizeof(buf1), LV_DISPLAY_RENDER_MODE_PARTIAL);

  indev = lv_indev_create();
  lv_indev_set_type(indev, LV_INDEV_TYPE_POINTER);
  lv_indev_set_read_cb(indev, my_touchpad_read);
  ui_init();  

  if(eject_status == true){
  lv_obj_add_state(ui_ejectaddon, LV_STATE_CHECKED);
  lv_obj_clear_state(ui_EJECTSettingButton, LV_STATE_DISABLED);
  lv_obj_clear_state(ui_HomeButtonL, LV_STATE_DISABLED);
  }
  if(dark_mode == true){
  lv_obj_add_state(ui_darkmode, LV_STATE_CHECKED);
  }
  if(vibrate_mode == true){
  lv_obj_add_state(ui_vibrate, LV_STATE_CHECKED);
  }
  if(touch_home == true){
  lv_obj_add_state(ui_lefty, LV_STATE_CHECKED);
  }
  lv_roller_set_selected(ui_PatternS,2,LV_ANIM_OFF);
  lv_roller_get_selected_str(ui_PatternS,patternstr,0);
  lv_label_set_text(ui_HomePatternLabel,patternstr);


}

void loop()
{
     bool changed=false;
     const int BatteryLevel = M5.Power.getBatteryLevel();
     String BatteryValue = (String(BatteryLevel, DEC) + "%");
     const char *battVal = BatteryValue.c_str();
     lv_bar_set_value(ui_Battery, BatteryLevel, LV_ANIM_OFF);
     lv_label_set_text(ui_BattValue, battVal);
     lv_bar_set_value(ui_Battery1, BatteryLevel, LV_ANIM_OFF);
     lv_label_set_text(ui_BattValue1, battVal);
     lv_bar_set_value(ui_Battery2, BatteryLevel, LV_ANIM_OFF);
     lv_label_set_text(ui_BattValue2, battVal);
     lv_bar_set_value(ui_Battery3, BatteryLevel, LV_ANIM_OFF);
     lv_label_set_text(ui_BattValue3, battVal);
     lv_bar_set_value(ui_Battery4, BatteryLevel, LV_ANIM_OFF);
     lv_label_set_text(ui_BattValue4, battVal);
     lv_bar_set_value(ui_Battery5, BatteryLevel, LV_ANIM_OFF);
     lv_label_set_text(ui_BattValue5, battVal);
     lv_bar_set_value(ui_Battery6, BatteryLevel, LV_ANIM_OFF);
     lv_label_set_text(ui_BattValue6, battVal);
     lv_bar_set_value(ui_Battery7, BatteryLevel, LV_ANIM_OFF);
     lv_label_set_text(ui_BattValue7, battVal);
     lv_bar_set_value(ui_Battery8, BatteryLevel, LV_ANIM_OFF);
     lv_label_set_text(ui_BattValue8, battVal);

     M5.update();
     handleSerialTest();
     lv_task_handler();
     Button1.tick();
     Button2.tick();
     Button3.tick();

     // M hold on any screen except the logo screen: stop everything and reset every tune slider to home
     if(mxclick_long_waspressed == true && st_screens != ST_UI_START){
       mholdstopreset();
       mxclick_long_waspressed = false;
     }

     switch(st_screens){
      
     case ST_UI_START: //Menu With logo after boot
      {
        if(lv_obj_has_state(ui_lefty, LV_STATE_CHECKED) == 1){
          touch_disabled = true;
        }

        if(click2_short_waspressed == true){
         lv_obj_send_event(ui_StartButtonL, LV_EVENT_CLICKED, NULL);
        } else if(mxclick_short_waspressed == true){
         lv_obj_send_event(ui_StartButtonM, LV_EVENT_CLICKED, NULL);
        } else if(click3_short_waspressed == true){
         lv_obj_send_event(ui_StartButtonR, LV_EVENT_CLICKED, NULL);
        }
      }
      break;

      case ST_UI_HOME: //Menu with OSSM control sliders
      {
        if(lv_obj_has_state(ui_lefty, LV_STATE_CHECKED) == 1){
          touch_disabled = true;
        }

          //RampHelper
          nowMs = millis();
          if (nowMs - rampMs <= rampTime && rampEnabled == true){ 
              if (rampValue <= maxRamp && encId == activeEncId){
            				++rampValue;
              }
          }else{
          rampValue = 1;
          activeEncId = encId;
          }

        //
        // Encoder 1 Speed 
        //
        if(lv_slider_is_dragged(ui_homespeedslider) == false){ //if knob gets rotated
          changed = false;
          lv_slider_set_value(ui_homespeedslider, speed, LV_ANIM_OFF);

          if (encoder1.getCount() >= 2){      //speed up
            changed = true;
            speed += rampValue;
            encoder1.setCount(0);
            rampMs = millis();
            encId = 1;
		      }else if (encoder1.getCount() <= -2){      //speed down
            changed = true;
            speed -=rampValue;
            encoder1.setCount(0);
            rampMs = millis();
            encId = 1;
          }

          //speed min-max bounds
          if (speed < 0){
            changed = true;
            speed = 0;
          }
          if (speed > speedlimit){
            changed = true;
            speed = speedlimit;
          }
          
          //send speed
          if (changed) {
            SendCommand(SPEED, speed, OSSM_ID);
          }
        
        
        }else if (lv_slider_get_value(ui_homespeedslider) != speed){ //if slider moved
            speed = lv_slider_get_value(ui_homespeedslider);
            SendCommand(SPEED, speed, OSSM_ID);
        }
        char speed_v[7];
        dtostrf(speed, 6, 0, speed_v);
        lv_label_set_text(ui_homespeedvalue, speed_v);

        //
        // Encoder 2 Depth 
        //
        if(lv_slider_is_dragged(ui_homedepthslider) == false){ //if knob gets rotated
          changed = false;
          lv_slider_set_value(ui_homedepthslider, depth, LV_ANIM_OFF);

		      if (encoder2.getCount() >= 2){      //depth up
            changed = true;
            depth += rampValue;
            if (dynamicStroke == true){
              stroke += rampValue;
            }
            encoder2.setCount(0);
            rampMs = millis();
            encId = 2;
		      }else if (encoder2.getCount() <= -2){      //depth down
            changed = true;
            depth -=rampValue;
            if (dynamicStroke == true){
              stroke -= rampValue;
              if(stroke >= depth){
                stroke = depth;
              }
            }
            encoder2.setCount(0);
            rampMs = millis();
            encId = 2;
          }

          //depth min-max bounds
          if (depth < 0){
            changed = true;
            depth = 0;
          }
          if (depth > maxdepthinmm){
            changed = true;
            depth = maxdepthinmm;
          }
          
          //send depth
          if (changed) {
            SendCommand(DEPTH, depth, OSSM_ID);
            SendCommand(STROKE, stroke, OSSM_ID);
          }
        }else if(lv_slider_get_value(ui_homedepthslider) != depth){
            depth = lv_slider_get_value(ui_homedepthslider);
            SendCommand(DEPTH, depth, OSSM_ID);
            SendCommand(STROKE, stroke, OSSM_ID);
        }
        char depth_v[7];
        dtostrf(depth, 6, 0, depth_v);
        lv_label_set_text(ui_homedepthvalue, depth_v);
        
        //
        // Encoder 3 Stroke 
        //
        if(lv_slider_is_dragged(ui_homestrokeslider) == false){ //if knob gets rotated
          changed = false;
          lv_bar_set_start_value(ui_homestrokeslider, depth - stroke, LV_ANIM_OFF);
          lv_slider_set_value(ui_homestrokeslider, depth, LV_ANIM_OFF);


		      if (encoder3.getCount() >= 2){      //Stroke up
            changed = true;
            stroke -= rampValue;
            encoder3.setCount(0);
            rampMs = millis();
            encId = 3;
		      }else if (encoder3.getCount() <= -2){      //Stroke down
            changed = true;
            stroke += rampValue;
            encoder3.setCount(0);
            rampMs = millis();
            encId = 3;
          }

          //Stoke min-max bounds
          if (stroke < 0){
            changed = true;
            stroke = 0;
          }
          if (stroke > maxdepthinmm){
            changed = true;
            stroke = maxdepthinmm;
          }
          
          //send stroke
          if (changed) {
            SendCommand(STROKE, stroke, OSSM_ID);
            SendCommand(DEPTH, depth, OSSM_ID);
          }

        } else if(lv_slider_get_left_value(ui_homestrokeslider) != depth - stroke){
            stroke = depth - lv_slider_get_left_value(ui_homestrokeslider);
            SendCommand(STROKE, stroke, OSSM_ID);
        } else if(lv_slider_get_value(ui_homestrokeslider) != depth){
            depth = lv_slider_get_value(ui_homestrokeslider);
            SendCommand(DEPTH, depth, OSSM_ID);
            SendCommand(DEPTH, depth, OSSM_ID);
        }

        char stroke_v[7];
        dtostrf(stroke, 6, 0, stroke_v);
        lv_label_set_text(ui_homestrokevalue, stroke_v);  //was lv_label_set_text(ui_homestrokevalue, stroke_v);

        //
        // Encoder4 Sensation
        //
        if(lv_slider_is_dragged(ui_homesensationslider) == false){
          changed = false;
          lv_slider_set_value(ui_homesensationslider, sensation, LV_ANIM_OFF);

		      if (encoder4.getCount() >= 2){      //Stroke up
            changed = true;
            sensation += 2;
            encoder4.setCount(0);
            rampMs = millis();
            encId = 4;
		      }else if (encoder4.getCount() <= -2){      //Stroke down
            changed = true;
            sensation -= 2;
            encoder4.setCount(0);
            rampMs = millis();
            encId = 4;
            
          }

          //Stoke min-max bounds
          if (sensation < -100){
            changed = true;
            sensation = -100;
          }
          if (sensation > 100){
            changed = true;
            sensation = 100;
          }

          if (changed) {
            SendCommand(SENSATION, sensation, OSSM_ID);
          }          
        } else if(lv_slider_get_value(ui_homesensationslider) != sensation){
            sensation = lv_slider_get_value(ui_homesensationslider);
            SendCommand(SENSATION, sensation, OSSM_ID);
        }

        // M button shows what a press will do (stroke only)
        lv_label_set_text(ui_HomeButtonMText, OSSM_On ? "Stop" : "Start");

        if(click2_double_waspressed == true){
         resetStrokeTune();                                                      // L double -> sliders to home
        } else if(click2_short_waspressed == true){
         lv_obj_send_event(ui_HomeButtonL, LV_EVENT_CLICKED, NULL);              // L click -> Rotation tune
        } else if(mxclick_short_waspressed == true){
         lv_obj_send_event(ui_HomeButtonM, LV_EVENT_CLICKED, NULL);
        } else if(click3_short_waspressed == true){
         lv_obj_send_event(ui_HomeButtonR, LV_EVENT_CLICKED, NULL);
        } else if(click3_long_waspressed == true){
          lv_scr_load_anim(ui_Menue, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0, false);   // R hold -> Menu
        }else if(click3_double_waspressed == true){
          if (dynamicStroke == false){
            dynamicStroke = true;;            /// dynamicStroke = !dynamicStroke; crashes M5 for some reason
          }else{
            dynamicStroke = false;;
          }
          if (stroke >= depth){
            stroke = depth;
          }
        }
      }
      break;

      case ST_UI_MENUE:
      {
        if(lv_obj_has_state(ui_lefty, LV_STATE_CHECKED) == 1){
          touch_disabled = true;
        }
        if(encoder4.getCount() > encoder4_enc + 2){
          LogDebug("next");
          lv_group_focus_next(ui_g_menue);
          encoder4_enc = encoder4.getCount();
        } else if(encoder4.getCount() < encoder4_enc -2){
          lv_group_focus_prev(ui_g_menue);
          LogDebug("Preview");
          encoder4_enc = encoder4.getCount();
        }

        if(click2_short_waspressed == true){
         lv_obj_send_event(ui_MenueButtonL, LV_EVENT_CLICKED, NULL);
        } else if(mxclick_short_waspressed == true){
         lv_obj_send_event(ui_MenueButtonM, LV_EVENT_CLICKED, NULL);
        } else if(click3_short_waspressed == true){
         lv_obj_send_event(lv_group_get_focused(ui_g_menue), LV_EVENT_CLICKED, NULL);
        } else if(click3_long_waspressed == true){
         SendCommand(REBOOT, 0, OSSM_ID);
        } 
      }
      break;

      case ST_UI_PATTERN:
      {
        if(lv_obj_has_state(ui_lefty, LV_STATE_CHECKED) == 1){
          touch_disabled = true;
        }
        // E1 = combo roller, E2 = stroke roller, E3 = rotation roller
        if(encoder1.getCount() >= 2){
          uint32_t t = LV_KEY_DOWN;
          lv_obj_send_event(ui_ComboS, LV_EVENT_KEY, &t);
          encoder1.setCount(0);
          selectcombochanged();
        } else if(encoder1.getCount() <= -2){
          uint32_t t = LV_KEY_UP;
          lv_obj_send_event(ui_ComboS, LV_EVENT_KEY, &t);
          encoder1.setCount(0);
          selectcombochanged();
        }
        if(encoder2.getCount() >= 2){
          uint32_t t = LV_KEY_DOWN;
          lv_obj_send_event(ui_PatternS, LV_EVENT_KEY, &t);
          encoder2.setCount(0);
          lv_roller_set_selected(ui_ComboS, 0, LV_ANIM_ON);   // manual change = Custom
        } else if(encoder2.getCount() <= -2){
          uint32_t t = LV_KEY_UP;
          lv_obj_send_event(ui_PatternS, LV_EVENT_KEY, &t);
          encoder2.setCount(0);
          lv_roller_set_selected(ui_ComboS, 0, LV_ANIM_ON);
        }
        if(encoder3.getCount() >= 2){
          uint32_t t = LV_KEY_DOWN;
          lv_obj_send_event(ui_SelectRotationS, LV_EVENT_KEY, &t);
          encoder3.setCount(0);
          lv_roller_set_selected(ui_ComboS, 0, LV_ANIM_ON);
        } else if(encoder3.getCount() <= -2){
          uint32_t t = LV_KEY_UP;
          lv_obj_send_event(ui_SelectRotationS, LV_EVENT_KEY, &t);
          encoder3.setCount(0);
          lv_roller_set_selected(ui_ComboS, 0, LV_ANIM_ON);
        }
        // M button shows what a press will do (both axes)
        lv_label_set_text(ui_PatternButtonMText, (OSSM_On || RotationOn) ? "Stop" : "Start");

        if(click2_short_waspressed == true){
         lv_obj_send_event(ui_PatternButtonL, LV_EVENT_CLICKED, NULL);           // L click -> Stroke tune (selection is not applied)
        } else if(mxclick_short_waspressed == true){
         selecttogglestartstop(NULL);                                            // M click -> start/stop both
        } else if(click3_short_waspressed == true){
         lv_obj_send_event(ui_PatternButtonR, LV_EVENT_CLICKED, NULL);           // R click -> Apply
        } else if(click3_long_waspressed == true){
         lv_scr_load_anim(ui_Menue, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0, false);    // R hold -> Menu
        }
      }
      break;

      case ST_UI_Torqe:
      {
        if(lv_obj_has_state(ui_lefty, LV_STATE_CHECKED) == 1){
          touch_disabled = true;
        }
        // Encoder 1 Torqe Out
        if(lv_slider_is_dragged(ui_outtroqeslider) == false){
          if (encoder1.getCount() != torqe_f_enc){
            lv_slider_set_value(ui_outtroqeslider, torqe_f, LV_ANIM_OFF);
            if(encoder1.getCount() <= 0){
              encoder1.setCount(0);
            } else if (encoder1.getCount() >= Encoder_MAP){
              encoder1.setCount(Encoder_MAP);
            } 
            torqe_f_enc = encoder1.getCount();
            torqe_f = fscale(0, Encoder_MAP, 50, 200, torqe_f_enc, 0);
            SendCommand(TORQE_F, torqe_f, OSSM_ID);
          }
        } else if(lv_slider_get_value(ui_outtroqeslider) != torqe_f){
            torqe_f_enc = fscale(50, 200, 0, Encoder_MAP, torqe_f, 0);
            encoder1.setCount(torqe_f_enc);
            torqe_f = lv_slider_get_value(ui_outtroqeslider);
            SendCommand(TORQE_F, torqe_f, OSSM_ID);
        }
        char torqe_f_v[7];
        dtostrf((torqe_f*-1), 6, 0, torqe_f_v);
        lv_label_set_text(ui_outtroqevalue, torqe_f_v);

        // Encoder 4 Torqe IN
        if(lv_slider_is_dragged(ui_introqeslider) == false){
          if (encoder4.getCount() != torqe_r_enc){
            lv_slider_set_value(ui_introqeslider, torqe_r, LV_ANIM_OFF);
            if(encoder4.getCount() <= 0){
              encoder4.setCount(0);
            } else if (encoder4.getCount() >= Encoder_MAP){
              encoder4.setCount(Encoder_MAP);
            } 
            torqe_r_enc = encoder4.getCount();
            torqe_r = fscale(0, Encoder_MAP, 20, 200, torqe_r_enc, 0);
            SendCommand(TORQE_R, torqe_r, OSSM_ID);
          }
        } else if(lv_slider_get_value(ui_introqeslider) != torqe_r){
            torqe_r_enc = fscale(20, 200, 0, Encoder_MAP, torqe_r, 0);
            encoder4.setCount(torqe_r_enc);
            torqe_r = lv_slider_get_value(ui_introqeslider);
            SendCommand(TORQE_R, torqe_r, OSSM_ID);
        }
        char torqe_r_v[7];
        dtostrf(torqe_r, 6, 0, torqe_r_v);
        lv_label_set_text(ui_introqevalue, torqe_r_v);

         if(click2_short_waspressed == true){
         lv_obj_send_event(ui_TorqeButtonL, LV_EVENT_CLICKED, NULL);
        } else if(mxclick_short_waspressed == true){
         lv_obj_send_event(ui_TorqeButtonM, LV_EVENT_CLICKED, NULL);
        } else if(click3_short_waspressed == true){
         lv_obj_send_event(ui_TorqeButtonR, LV_EVENT_CLICKED, NULL);
        }
      }
      break;

      case ST_UI_ROTATION:
      {
        if(lv_obj_has_state(ui_lefty, LV_STATE_CHECKED) == 1){
          touch_disabled = true;
        }

        //RampHelper (same as Home)
        nowMs = millis();
        if (nowMs - rampMs <= rampTime && rampEnabled == true){
          if (rampValue <= maxRamp && encId == activeEncId){
            ++rampValue;
          }
        }else{
          rampValue = 1;
          activeEncId = encId;
        }

        //
        // Encoder 1 - Rotation speed, 0-100 %
        //
        if(lv_slider_is_dragged(ui_rotationspeedslider) == false){
          changed = false;
          lv_slider_set_value(ui_rotationspeedslider, (int)rotationSpeed, LV_ANIM_OFF);

          if (encoder1.getCount() >= 2){
            changed = true;
            rotationSpeed += rampValue;
            encoder1.setCount(0);
            rampMs = millis();
            encId = 1;
          } else if (encoder1.getCount() <= -2){
            changed = true;
            rotationSpeed -= rampValue;
            encoder1.setCount(0);
            rampMs = millis();
            encId = 1;
          }

          if (rotationSpeed < 0){
            changed = true;
            rotationSpeed = 0;
          }
          if (rotationSpeed > 100){
            changed = true;
            rotationSpeed = 100;
          }

          if (changed) {
            rotationSetSpeed(rotationSpeed);
          }

        } else if (lv_slider_get_value(ui_rotationspeedslider) != (int)rotationSpeed){
          rotationSpeed = lv_slider_get_value(ui_rotationspeedslider);
          rotationSetSpeed(rotationSpeed);
        }
        char rotationspeed_v[7];
        dtostrf(rotationSpeed, 6, 0, rotationspeed_v);
        lv_label_set_text(ui_rotationspeedvalue, rotationspeed_v);

        //
        // Encoder 2 - Rotation sensation, -100 to 100 (plumbed only, no pattern acts on it yet)
        //
        if(lv_slider_is_dragged(ui_rotationsensslider) == false){
          changed = false;
          lv_slider_set_value(ui_rotationsensslider, (int)rotationSensation, LV_ANIM_OFF);

          if (encoder2.getCount() >= 2){
            changed = true;
            rotationSensation += rampValue;
            encoder2.setCount(0);
            rampMs = millis();
            encId = 2;
          } else if (encoder2.getCount() <= -2){
            changed = true;
            rotationSensation -= rampValue;
            encoder2.setCount(0);
            rampMs = millis();
            encId = 2;
          }

          if (rotationSensation < -100){
            changed = true;
            rotationSensation = -100;
          }
          if (rotationSensation > 100){
            changed = true;
            rotationSensation = 100;
          }

          if (changed) {
            rotationSetSensation(rotationSensation);
          }

        } else if (lv_slider_get_value(ui_rotationsensslider) != (int)rotationSensation){
          rotationSensation = lv_slider_get_value(ui_rotationsensslider);
          rotationSetSensation(rotationSensation);
        }
        char rotationsens_v[8];
        snprintf(rotationsens_v, sizeof(rotationsens_v), "%+d", (int)rotationSensation);
        lv_label_set_text(ui_rotationsensvalue, rotationsens_v);

        //
        // Encoder 3 - Reverse: turn right = on, turn left = off
        //
        {
          bool newReverse = rotationDirection;
          if (encoder3.getCount() >= 2){
            newReverse = true;
            encoder3.setCount(0);
          } else if (encoder3.getCount() <= -2){
            newReverse = false;
            encoder3.setCount(0);
          }
          if (newReverse != rotationDirection){
            rotationDirection = newReverse;
            SendCommand(ROT_DIR, rotationDirection ? 1.0 : 0.0, OSSM_ID);
          }
          if (lv_obj_has_state(ui_rotationdirection, LV_STATE_CHECKED) != rotationDirection){
            if (rotationDirection) {
              lv_obj_add_state(ui_rotationdirection, LV_STATE_CHECKED);
            } else {
              lv_obj_clear_state(ui_rotationdirection, LV_STATE_CHECKED);
            }
          }
        }

        //
        // Encoder 4 - Overdrive: turn right = on, turn left = off
        //
        {
          bool newOverdrive = rotationOverdrive;
          if (encoder4.getCount() >= encoder4_enc + 2){
            newOverdrive = true;
            encoder4_enc = encoder4.getCount();
          } else if (encoder4.getCount() <= encoder4_enc - 2){
            newOverdrive = false;
            encoder4_enc = encoder4.getCount();
          }
          if (newOverdrive != rotationOverdrive){
            rotationOverdrive = newOverdrive;
            rotationSetOverdrive(rotationOverdrive);
          }
          if (lv_obj_has_state(ui_rotationoverdrive, LV_STATE_CHECKED) != rotationOverdrive){
            if (rotationOverdrive) {
              lv_obj_add_state(ui_rotationoverdrive, LV_STATE_CHECKED);
            } else {
              lv_obj_clear_state(ui_rotationoverdrive, LV_STATE_CHECKED);
            }
          }
        }

        // M button shows what a press will do
        lv_label_set_text(ui_RotationButtonMText, RotationOn ? "Stop" : "Start");

        if(click2_double_waspressed == true){
         resetRotationTune();                                                     // L double -> sliders to home
        } else if(click2_short_waspressed == true){
         lv_obj_send_event(ui_RotationButtonL, LV_EVENT_CLICKED, NULL);           // L click -> Select
        } else if(mxclick_short_waspressed == true){
         lv_obj_send_event(ui_RotationButtonM, LV_EVENT_CLICKED, NULL);
        } else if(click3_short_waspressed == true){
         lv_obj_send_event(ui_RotationButtonR, LV_EVENT_CLICKED, NULL);
        } else if(click3_long_waspressed == true){
         lv_scr_load_anim(ui_Menue, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0, false);     // R hold -> Menu
        }
      }
      break;

      case ST_UI_TWEAK:
      {
        if(lv_obj_has_state(ui_lefty, LV_STATE_CHECKED) == 1){
          touch_disabled = true;
        }

        bool burstChanged = false;
        bool dialChanged = false;
        bool spareChanged = false;

        // E1 burst ceiling (RPM), 5 per detent, or drag the slider
        if(lv_slider_is_dragged(ui_tweakburstslider) == false){
          if (encoder1.getCount() >= 2){
            tweakBurstRpm += 5.0f; burstChanged = true; encoder1.setCount(0);
          } else if (encoder1.getCount() <= -2){
            tweakBurstRpm -= 5.0f; burstChanged = true; encoder1.setCount(0);
          }
        } else if (lv_slider_get_value(ui_tweakburstslider) != (int)tweakBurstRpm){
          tweakBurstRpm = lv_slider_get_value(ui_tweakburstslider); burstChanged = true;
        }

        // E2 dial max (RPM)
        if(lv_slider_is_dragged(ui_tweakdialslider) == false){
          if (encoder2.getCount() >= 2){
            tweakDialRpm += 5.0f; dialChanged = true; encoder2.setCount(0);
          } else if (encoder2.getCount() <= -2){
            tweakDialRpm -= 5.0f; dialChanged = true; encoder2.setCount(0);
          }
        } else if (lv_slider_get_value(ui_tweakdialslider) != (int)tweakDialRpm){
          tweakDialRpm = lv_slider_get_value(ui_tweakdialslider); dialChanged = true;
        }

        // E3 spare (0-100), no effect yet
        if(lv_slider_is_dragged(ui_tweakspareslider) == false){
          if (encoder3.getCount() >= 2){
            tweakSpare += 5.0f; spareChanged = true; encoder3.setCount(0);
          } else if (encoder3.getCount() <= -2){
            tweakSpare -= 5.0f; spareChanged = true; encoder3.setCount(0);
          }
        } else if (lv_slider_get_value(ui_tweakspareslider) != (int)tweakSpare){
          tweakSpare = lv_slider_get_value(ui_tweakspareslider); spareChanged = true;
        }

        tweakDialRpm = constrain(tweakDialRpm, TWEAK_DIAL_MIN, TWEAK_RPM_MAX);
        tweakBurstRpm = constrain(tweakBurstRpm, TWEAK_BURST_MIN, TWEAK_RPM_MAX);
        tweakSpare = constrain(tweakSpare, 0.0f, 100.0f);
        if (tweakBurstRpm < tweakDialRpm){      // the burst ceiling can never sit below the dial max
          tweakBurstRpm = tweakDialRpm;
          burstChanged = true;
        }

        if (dialChanged)  tweakSetDial(tweakDialRpm);
        if (burstChanged) tweakSetBurst(tweakBurstRpm);
        if (spareChanged) tweakSetSpare(tweakSpare);

        if(lv_slider_is_dragged(ui_tweakburstslider) == false){
          lv_slider_set_value(ui_tweakburstslider, (int)tweakBurstRpm, LV_ANIM_OFF);
        }
        if(lv_slider_is_dragged(ui_tweakdialslider) == false){
          lv_slider_set_value(ui_tweakdialslider, (int)tweakDialRpm, LV_ANIM_OFF);
        }
        if(lv_slider_is_dragged(ui_tweakspareslider) == false){
          lv_slider_set_value(ui_tweakspareslider, (int)tweakSpare, LV_ANIM_OFF);
        }

        char tweak_v[16];
        snprintf(tweak_v, sizeof(tweak_v), "%d rpm", (int)tweakBurstRpm);
        lv_label_set_text(ui_tweakburstvalue, tweak_v);
        snprintf(tweak_v, sizeof(tweak_v), "%d rpm", (int)tweakDialRpm);
        lv_label_set_text(ui_tweakdialvalue, tweak_v);
        snprintf(tweak_v, sizeof(tweak_v), "%d", (int)tweakSpare);
        lv_label_set_text(ui_tweakparevalue, tweak_v);
        char factor_v[40];
        snprintf(factor_v, sizeof(factor_v), "Burst factor %.2fx", tweakBurstRpm / tweakDialRpm);
        lv_label_set_text(ui_tweakfactorlabel, factor_v);

        // M button shows what a press will do (rotation only, so you can tune while it spins)
        lv_label_set_text(ui_TweakButtonMText, RotationOn ? "Stop" : "Start");

        if(click2_double_waspressed == true){
         resetTweak();                                                            // L double -> defaults
        } else if(click2_short_waspressed == true){
         lv_obj_send_event(ui_TweakButtonL, LV_EVENT_CLICKED, NULL);              // L click -> Menu
        } else if(mxclick_short_waspressed == true){
         lv_obj_send_event(ui_TweakButtonM, LV_EVENT_CLICKED, NULL);
        } else if(click3_short_waspressed == true){
         lv_obj_send_event(ui_TweakButtonR, LV_EVENT_CLICKED, NULL);              // R click -> Rotation tune
        } else if(click3_long_waspressed == true){
         lv_scr_load_anim(ui_Menue, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0, false);     // R hold -> Menu
        }
      }
      break;

      case ST_UI_EJECTSETTINGS:
      {
        if(lv_obj_has_state(ui_lefty, LV_STATE_CHECKED) == 1){
          touch_disabled = true;
        }
        
         if(click2_short_waspressed == true){
         lv_obj_send_event(ui_EJECTButtonL, LV_EVENT_CLICKED, NULL);
        } else if(mxclick_short_waspressed == true){
         lv_obj_send_event(ui_EJECTButtonM, LV_EVENT_CLICKED, NULL);
        } else if(click3_short_waspressed == true){
         
        }
      }
      break;

      case ST_UI_SETTINGS: //Settings Menu
      {
        touch_disabled = false;

        if(encoder4.getCount() > encoder4_enc + 2){
          LogDebug("next");
          lv_group_focus_next(ui_g_settings);
          encoder4_enc = encoder4.getCount();
        } else if(encoder4.getCount() < encoder4_enc -2){
          lv_group_focus_prev(ui_g_settings);
          LogDebug("Preview");
          encoder4_enc = encoder4.getCount();
        }

        if(click2_short_waspressed == true){
         lv_obj_send_event(ui_MenueButtonL, LV_EVENT_CLICKED, NULL);
        } else if(mxclick_short_waspressed == true){
         lv_obj_send_event(ui_MenueButtonM, LV_EVENT_CLICKED, NULL);
        } else if(click3_short_waspressed == true){
         lv_obj_send_event(ui_EJECTButtonR, LV_EVENT_CLICKED, NULL);
        }
      }
      break;

     }
     mxclick_long_waspressed = false;
     mxclick_short_waspressed = false;
     click2_short_waspressed = false;
     click2_double_waspressed = false;
     click3_short_waspressed = false;
     click3_long_waspressed = false;
     click3_double_waspressed = false;

  delay(5);
}

void espNowRemoteTask(void *pvParameters)
{
  for(;;){
    if(Ossm_paired){
      struct_message hb = outgoingcontrol;   // private copy: never clobber a command being sent from loop()
      hb.esp_command = HEARTBEAT;
      hb.esp_heartbeat = true;
      hb.esp_target = OSSM_ID;
      esp_err_t result = esp_now_send(OSSM_Address, (uint8_t *) &hb, sizeof(hb));
    }
    vTaskDelay(HEARTBEAT_INTERVAL);
  }
}

/*
void cumscreentask(void *pvParameters)
{
  for(;;)
  {
    M5.Lcd.setTextColor(FrontColor);
    if(encoder1.getCount() != cum_s_enc)
    {
    cum_s_enc = encoder1.getCount();
    cum_speed = map(constrain(cum_s_enc,0,Encoder_MAP),0,Encoder_MAP,1000,30000);
    M5.Lcd.fillRect(199,S1Pos,85,30,BgColor);
    M5.Lcd.setCursor(200,S1Pos+progheight-5);
    M5.Lcd.print(cum_speed);
    SendCommand(CUMSPEED, cum_speed, CUM);
    }

  if(encoder2.getCount() != cum_t_enc)
    {
    cum_t_enc = encoder2.getCount();
    cum_time = map(constrain(cum_t_enc,0,Encoder_MAP),0,Encoder_MAP,0,60);
    M5.Lcd.fillRect(199,S2Pos,85,30,BgColor);
    M5.Lcd.setCursor(200,S2Pos+progheight-5);
    M5.Lcd.print(cum_time);
    SendCommand(CUMTIME, cum_time, CUM);
    }

   if(encoder3.getCount() != cum_si_enc)
    {
    cum_si_enc = encoder3.getCount();
    cum_size = map(constrain(cum_si_enc,0,Encoder_MAP),0,Encoder_MAP,0,40);
    M5.Lcd.fillRect(199,S3Pos,85,30,BgColor);
    M5.Lcd.setCursor(200,S3Pos+progheight-5);
    M5.Lcd.print(cum_size);
    SendCommand(CUMSIZE, cum_size, CUM);
    }

   if(encoder4.getCount() != cum_a_enc)
    {
    cum_a_enc = encoder4.getCount();
    cum_accel = map(constrain(cum_a_enc,0,Encoder_MAP),0,Encoder_MAP,0,20);
    M5.Lcd.fillRect(199,S4Pos,85,30,BgColor);
    M5.Lcd.setCursor(200,S4Pos+progheight-5);
    M5.Lcd.print(cum_accel);
    SendCommand(CUMACCEL, cum_accel, CUM);
    }
  vTaskDelay(100);
  }
}
*/


void mxclick() {
  vibrate();
  mxclick_short_waspressed = true;
} 

void mxlong(){
  vibrate(200, 200);
  mxclick_long_waspressed = true;
} 

void click2() {
  vibrate();
  click2_short_waspressed = true;
} // click2

void click2double() {
  vibrate();
  click2_double_waspressed = true;
}

void click3() {
  vibrate();
  click3_short_waspressed = true;
} // click3

void c3long() {
    vibrate();
  click3_long_waspressed = true;
}

void c3double() {
    vibrate();
  click3_double_waspressed = true;
}