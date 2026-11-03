// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: OSSM-White

#include "ui.h"
#include "ui_helpers.h"
#include "main.h"
#include "language.h"

void saveselect(lv_event_t * e);
void rotationreversetoggle(lv_event_t * e);
void saverotationoverdrive(lv_event_t * e);

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Start;
lv_obj_t * ui_Logo;
lv_obj_t * ui_StartButtonL;
lv_obj_t * ui_StartButtonLText;
lv_obj_t * ui_StartButtonM;
lv_obj_t * ui_StartButtonMText;
lv_obj_t * ui_StartButtonR;
lv_obj_t * ui_StartButtonRText;
lv_obj_t * ui_LOVE_Logo;
lv_obj_t * ui_OrtlofLogo;
lv_obj_t * ui_Welcome;
lv_obj_t * ui_Batt;
lv_obj_t * ui_BattValue;
lv_obj_t * ui_Battery;
lv_obj_t * ui_Home;
lv_obj_t * ui_Logo2;
lv_obj_t * ui_HomeButtonL;
lv_obj_t * ui_HomeButtonLText;
lv_obj_t * ui_HomeButtonM;
lv_obj_t * ui_HomeButtonMText;
lv_obj_t * ui_HomeButtonR;
lv_obj_t * ui_HomeButtonRText;
lv_obj_t * ui_SpeedL;
lv_obj_t * ui_homespeedslider;
lv_obj_t * ui_homespeedvalue;
lv_obj_t * ui_DepthL;
lv_obj_t * ui_homedepthslider;
lv_obj_t * ui_homedepthvalue;
lv_obj_t * ui_StrokeL;
lv_obj_t * ui_homestrokeslider;
lv_obj_t * ui_homestrokevalue;
lv_obj_t * ui_SensationL;
lv_obj_t * ui_homesensationslider;
lv_obj_t * ui_Batt2;
lv_obj_t * ui_BattValue2;
lv_obj_t * ui_Battery2;
lv_obj_t * ui_HomePatternLabel1;
lv_obj_t * ui_HomePatternLabel;
lv_obj_t * ui_connect;
lv_obj_t * ui_Menue;
lv_obj_t * ui_Logo3;
lv_obj_t * ui_MenueButtonL;
lv_obj_t * ui_MenueButtonLText;
lv_obj_t * ui_MenueButtonM;
lv_obj_t * ui_MenueButtonMText;
lv_obj_t * ui_MenueButtonR;
lv_obj_t * ui_MenueButtonRText;
lv_obj_t * ui_Batt3;
lv_obj_t * ui_BattValue3;
lv_obj_t * ui_Battery3;
lv_obj_t * ui_SDepthI;
lv_obj_t * ui_SDepthIL;
lv_obj_t * ui_SDepthF;
lv_obj_t * ui_SDepthFL;
lv_obj_t * ui_SPattern;
lv_obj_t * ui_SPatternL;
lv_obj_t * ui_STorqe;
lv_obj_t * ui_STorqeL;
lv_obj_t * ui_EJECTSettingButton;
lv_obj_t * ui_EJECTSettingButtonText;
lv_obj_t * ui_Pattern;
lv_obj_t * ui_Logo5;
lv_obj_t * ui_PatternButtonL;
lv_obj_t * ui_PatternButtonLText;
lv_obj_t * ui_PatternButtonM;
lv_obj_t * ui_PatternButtonMText;
lv_obj_t * ui_PatternButtonR;
lv_obj_t * ui_PatternButtonRText;
lv_obj_t * ui_Batt5;
lv_obj_t * ui_BattValue5;
lv_obj_t * ui_Battery5;
lv_obj_t * ui_Label4;
lv_obj_t * ui_PatternS;
lv_obj_t * ui_ComboS;
lv_obj_t * ui_SelectRotationS;
lv_obj_t * ui_Torqe;
lv_obj_t * ui_Logo4;
lv_obj_t * ui_TorqeButtonL;
lv_obj_t * ui_TorqeButtonLText;
lv_obj_t * ui_TorqeButtonM;
lv_obj_t * ui_TorqeButtonMText;
lv_obj_t * ui_TorqeButtonR;
lv_obj_t * ui_TorqeButtonRText;
lv_obj_t * ui_outtroqelabel;
lv_obj_t * ui_outtroqevalue;
lv_obj_t * ui_outtroqeslider;
lv_obj_t * ui_Low1;
lv_obj_t * ui_High1;
lv_obj_t * ui_introqelabel;
lv_obj_t * ui_introqevalue;
lv_obj_t * ui_introqeslider;
lv_obj_t * ui_Low2;
lv_obj_t * ui_High;
lv_obj_t * ui_Batt4;
lv_obj_t * ui_BattValue4;
lv_obj_t * ui_Battery4;
lv_obj_t * ui_EJECTSettings;
lv_obj_t * ui_Logo6;
lv_obj_t * ui_EJECTButtonL;
lv_obj_t * ui_EJECTButtonLText;
lv_obj_t * ui_EJECTButtonM;
lv_obj_t * ui_EJECTButtonMText;
lv_obj_t * ui_EJECTButtonR;
lv_obj_t * ui_EJECTButtonRText;
lv_obj_t * ui_Batt6;
lv_obj_t * ui_BattValue6;
lv_obj_t * ui_Battery6;
lv_obj_t * ui_SRotation;
lv_obj_t * ui_SRotationL;
lv_obj_t * ui_Rotation;
lv_obj_t * ui_Logo7;
lv_obj_t * ui_RotationButtonL;
lv_obj_t * ui_RotationButtonLText;
lv_obj_t * ui_RotationButtonM;
lv_obj_t * ui_RotationButtonMText;
lv_obj_t * ui_RotationButtonR;
lv_obj_t * ui_RotationButtonRText;
lv_obj_t * ui_Batt7;
lv_obj_t * ui_BattValue7;
lv_obj_t * ui_Battery7;
lv_obj_t * ui_RotationTitle;
lv_obj_t * ui_RotationSpeedL;
lv_obj_t * ui_rotationspeedslider;
lv_obj_t * ui_rotationspeedvalue;
lv_obj_t * ui_RotationPatternTitle;
lv_obj_t * ui_RotationPatternS;
lv_obj_t * ui_rotationdirection;
lv_obj_t * ui_RotationSensL;
lv_obj_t * ui_rotationsensslider;
lv_obj_t * ui_rotationsensvalue;
lv_obj_t * ui_rotationoverdrive;
lv_obj_t * ui_STweak;
lv_obj_t * ui_STweakL;
lv_obj_t * ui_Tweak;
lv_obj_t * ui_Logo8;
lv_obj_t * ui_TweakButtonL;
lv_obj_t * ui_TweakButtonLText;
lv_obj_t * ui_TweakButtonM;
lv_obj_t * ui_TweakButtonMText;
lv_obj_t * ui_TweakButtonR;
lv_obj_t * ui_TweakButtonRText;
lv_obj_t * ui_Batt8;
lv_obj_t * ui_BattValue8;
lv_obj_t * ui_Battery8;
lv_obj_t * ui_TweakTitle;
lv_obj_t * ui_TweakBurstL;
lv_obj_t * ui_tweakburstslider;
lv_obj_t * ui_tweakburstvalue;
lv_obj_t * ui_TweakDialL;
lv_obj_t * ui_tweakdialslider;
lv_obj_t * ui_tweakdialvalue;
lv_obj_t * ui_TweakSpareL;
lv_obj_t * ui_tweakspareslider;
lv_obj_t * ui_tweakparevalue;
lv_obj_t * ui_tweakfactorlabel;
lv_obj_t * ui_Settings;
lv_obj_t * ui_Logo1;
lv_obj_t * ui_SettingsButtonL;
lv_obj_t * ui_SettingsButtonLText;
lv_obj_t * ui_SettingsButtonM;
lv_obj_t * ui_SettingsButtonMText;
lv_obj_t * ui_SettingsButtonR;
lv_obj_t * ui_SettingsButtonRText;
lv_obj_t * ui_Batt1;
lv_obj_t * ui_BattValue1;
lv_obj_t * ui_Battery1;
lv_obj_t * ui_ejectaddon;
lv_obj_t * ui_darkmode;
lv_obj_t * ui_vibrate;
lv_obj_t * ui_lefty;
lv_group_t * ui_g_menue;
lv_group_t * ui_g_settings;


///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_Start(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        screenmachine(e);
    }
}
static void ui_event_StartButtonL(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        connectbutton(e);
    }
}
static void ui_event_StartButtonM(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Settings, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_StartButtonR(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_Home(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        screenmachine(e);
    }
}
static void ui_event_HomeButtonL(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Rotation, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);   // L: Stroke tune -> Rotation tune
    }
}
static void ui_event_HomeButtonM(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        homebuttonmevent(e);
    }
}
static void ui_event_HomeButtonR(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Pattern, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    } else if(event == LV_EVENT_LONG_PRESSED){
        _ui_screen_change(ui_Menue, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_Menue(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        screenmachine(e);
    }
}
static void ui_event_MenueButtonL(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Settings, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_MenueButtonM(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Pattern, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);   // "Home" is now the Select screen
    }
}
static void ui_event_MenueButtonR(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
}
static void ui_event_SDepthI(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
        setupDepthInter(e);
    }
}
static void ui_event_SDepthF(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        setupdepthF(e);
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_SPattern(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Pattern, LV_SCR_LOAD_ANIM_FADE_ON, 90, 0);
    }
}
static void ui_event_STorqe(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Torqe, LV_SCR_LOAD_ANIM_FADE_ON, 90, 0);
    }
}
static void ui_event_EJECTSettingButton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_EJECTSettings, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_Pattern(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        screenmachine(e);
    }
}
static void ui_event_PatternButtonL(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);   // L: Select -> Stroke tune, selection not applied
    }
}
static void ui_event_PatternButtonM(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        selecttogglestartstop(e);   // M: start or stop stroke and rotation together
    }
}
static void ui_event_PatternButtonR(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        saveselect(e);
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_Torqe(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        screenmachine(e);
    }
}
static void ui_event_TorqeButtonL(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
}
static void ui_event_TorqeButtonM(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_TorqeButtonR(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Menue, LV_SCR_LOAD_ANIM_FADE_ON, 90, 0);
    }
}
static void ui_event_SRotation(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Rotation, LV_SCR_LOAD_ANIM_FADE_ON, 90, 0);
    }
}
static void ui_event_Rotation(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        screenmachine(e);
    }
}
static void ui_event_rotationdirection(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_VALUE_CHANGED) {
        saverotationdirection(e);
    }
}
static void ui_event_rotationoverdrive(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    if(event == LV_EVENT_VALUE_CHANGED) {
        saverotationoverdrive(e);
    }
}
static void ui_event_RotationButtonL(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Pattern, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);   // L: Rotation tune -> Select
    }
}
static void ui_event_RotationButtonM(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        rotationbuttonmevent(e);
    }
}
static void ui_event_RotationButtonR(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        rotationreversetoggle(e);
    }
}
static void ui_event_STweak(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Tweak, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_Tweak(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        screenmachine(e);
    }
}
static void ui_event_TweakButtonL(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Menue, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_TweakButtonM(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    if(event == LV_EVENT_CLICKED) {
        rotationbuttonmevent(e);   // start or stop rotation so it can be tuned while spinning
    }
}
static void ui_event_TweakButtonR(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Rotation, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_MenuChip(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Menue, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_EJECTSettings(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        screenmachine(e);
    }
}
static void ui_event_EJECTButtonL(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
}
static void ui_event_EJECTButtonM(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 90, 0);
    }
}
static void ui_event_EJECTButtonR(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Menue, LV_SCR_LOAD_ANIM_FADE_ON, 90, 0);
    }
}
static void ui_event_Settings(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_SCREEN_LOADED) {
        screenmachine(e);
    }
}
static void ui_event_SettingsButtonL(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        savesettings(e);
    }
}
static void ui_event_SettingsButtonM(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 90, 0);
    }
}
static void ui_event_SettingsButtonR(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Menue, LV_SCR_LOAD_ANIM_FADE_ON, 20, 0);
    }
}
static void ui_event_ejectaddon(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
}

///////////////////// SCREENS ////////////////////
void ui_Start_screen_init(void)
{

    // ui_Start

    ui_Start = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Start, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Start, ui_event_Start, LV_EVENT_ALL, NULL);


    // ui_Logo

    ui_Logo = lv_label_create(ui_Start);

    lv_obj_set_width(ui_Logo, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Logo, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Logo, -103);
    lv_obj_set_x(ui_Logo, lv_pct(0));

    lv_obj_set_align(ui_Logo, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Logo, T_HEADER);

    lv_obj_set_style_text_font(ui_Logo, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Logo, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Logo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Logo, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Logo, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_StartButtonL

    ui_StartButtonL = lv_btn_create(ui_Start);

    lv_obj_set_width(ui_StartButtonL, 100);
    lv_obj_set_height(ui_StartButtonL, 30);

    lv_obj_set_y(ui_StartButtonL, 100);
    lv_obj_set_x(ui_StartButtonL, lv_pct(-33));

    lv_obj_set_align(ui_StartButtonL, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_StartButtonL, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_StartButtonL, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_StartButtonL, ui_event_StartButtonL, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_StartButtonL, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_StartButtonL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_StartButtonLText

    ui_StartButtonLText = lv_label_create(ui_StartButtonL);

    lv_obj_set_width(ui_StartButtonLText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_StartButtonLText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_StartButtonLText, lv_pct(0));
    lv_obj_set_y(ui_StartButtonLText, lv_pct(0));

    lv_obj_set_align(ui_StartButtonLText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_StartButtonLText, T_CONNECT);

    lv_obj_set_style_text_color(ui_StartButtonLText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_StartButtonLText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_StartButtonM

    ui_StartButtonM = lv_btn_create(ui_Start);

    lv_obj_set_width(ui_StartButtonM, 100);
    lv_obj_set_height(ui_StartButtonM, 30);

    lv_obj_set_y(ui_StartButtonM, 100);
    lv_obj_set_x(ui_StartButtonM, lv_pct(0));

    lv_obj_set_align(ui_StartButtonM, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_StartButtonM, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_StartButtonM, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_StartButtonM, ui_event_StartButtonM, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_StartButtonM, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_StartButtonM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_StartButtonMText

    ui_StartButtonMText = lv_label_create(ui_StartButtonM);

    lv_obj_set_width(ui_StartButtonMText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_StartButtonMText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_StartButtonMText, lv_pct(0));
    lv_obj_set_y(ui_StartButtonMText, lv_pct(0));

    lv_obj_set_align(ui_StartButtonMText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_StartButtonMText, T_SETTINGS);

    lv_obj_set_style_text_color(ui_StartButtonMText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_StartButtonMText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_StartButtonR

    ui_StartButtonR = lv_btn_create(ui_Start);

    lv_obj_set_width(ui_StartButtonR, 100);
    lv_obj_set_height(ui_StartButtonR, 30);

    lv_obj_set_y(ui_StartButtonR, 100);
    lv_obj_set_x(ui_StartButtonR, lv_pct(33));

    lv_obj_set_align(ui_StartButtonR, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_StartButtonR, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_StartButtonR, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_StartButtonR, ui_event_StartButtonR, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_StartButtonR, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_StartButtonR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_StartButtonRText

    ui_StartButtonRText = lv_label_create(ui_StartButtonR);

    lv_obj_set_width(ui_StartButtonRText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_StartButtonRText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_StartButtonRText, lv_pct(0));
    lv_obj_set_y(ui_StartButtonRText, lv_pct(0));

    lv_obj_set_align(ui_StartButtonRText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_StartButtonRText, T_DEMO);

    lv_obj_set_style_text_color(ui_StartButtonRText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_StartButtonRText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_LOVE_Logo

    ui_LOVE_Logo = lv_img_create(ui_Start);
    lv_img_set_src(ui_LOVE_Logo, &image50x50);

    lv_obj_set_width(ui_LOVE_Logo, 100);    lv_obj_set_height(ui_LOVE_Logo, 100);

    lv_obj_set_x(ui_LOVE_Logo, 0);
    lv_obj_set_y(ui_LOVE_Logo, 10);

    lv_obj_set_align(ui_LOVE_Logo, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_LOVE_Logo, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_LOVE_Logo, LV_OBJ_FLAG_SCROLLABLE);


    // ui_Welcome

    ui_Welcome = lv_label_create(ui_Start);

    lv_obj_set_width(ui_Welcome, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Welcome, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Welcome, 0);
    lv_obj_set_y(ui_Welcome, -70);

    lv_obj_set_align(ui_Welcome, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Welcome, T_MOTD);

    // ui_Batt

    ui_Batt = lv_label_create(ui_Start);

    lv_obj_set_width(ui_Batt, 85);
    lv_obj_set_height(ui_Batt, 30);

    lv_obj_set_x(ui_Batt, 115);
    lv_obj_set_y(ui_Batt, -103);

    lv_obj_set_align(ui_Batt, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Batt, T_BATT);

    // ui_BattValue

    ui_BattValue = lv_label_create(ui_Batt);

    lv_obj_set_width(ui_BattValue, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BattValue, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BattValue, 0);
    lv_obj_set_y(ui_BattValue, -7);

    lv_obj_set_align(ui_BattValue, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_BattValue, T_BLANK);

    // ui_Battery

    ui_Battery = lv_bar_create(ui_Batt);
    lv_bar_set_range(ui_Battery, 0, 100);

    lv_obj_set_width(ui_Battery, 80);
    lv_obj_set_height(ui_Battery, 10);

    lv_obj_set_x(ui_Battery, 0);
    lv_obj_set_y(ui_Battery, 10);

    lv_obj_set_align(ui_Battery, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Battery, lv_color_hex(0xD591D5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Battery, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

}
// Small "Menu" touch button in the top-left corner of every screen except Start and Menu itself.
static void ui_add_menu_chip(lv_obj_t * parent)
{
    lv_obj_t * chip = lv_btn_create(parent);

    lv_obj_set_width(chip, 56);
    lv_obj_set_height(chip, 26);

    lv_obj_set_align(chip, LV_ALIGN_TOP_LEFT);
    lv_obj_set_x(chip, 4);
    lv_obj_set_y(chip, 4);

    lv_obj_clear_flag(chip, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(chip, ui_event_MenuChip, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(chip, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(chip, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * label = lv_label_create(chip);
    lv_label_set_text(label, T_MENUE);
    lv_obj_set_align(label, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void ui_Home_screen_init(void)
{

    // ui_Home

    ui_Home = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Home, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Home, ui_event_Home, LV_EVENT_ALL, NULL);

    ui_add_menu_chip(ui_Home);

    // ui_Logo2

    ui_Logo2 = lv_label_create(ui_Home);

    lv_obj_set_width(ui_Logo2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Logo2, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Logo2, -103);
    lv_obj_set_x(ui_Logo2, lv_pct(0));

    lv_obj_set_align(ui_Logo2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Logo2, T_HEADER);

    lv_obj_set_style_text_font(ui_Logo2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Logo2, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Logo2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Logo2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Logo2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_HomeButtonL

    ui_HomeButtonL = lv_btn_create(ui_Home);

    lv_obj_set_width(ui_HomeButtonL, 100);
    lv_obj_set_height(ui_HomeButtonL, 30);

    lv_obj_set_y(ui_HomeButtonL, 100);
    lv_obj_set_x(ui_HomeButtonL, lv_pct(-33));

    lv_obj_set_align(ui_HomeButtonL, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_HomeButtonL, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_HomeButtonL, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_HomeButtonL, ui_event_HomeButtonL, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_HomeButtonL, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomeButtonL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_HomeButtonLText

    ui_HomeButtonLText = lv_label_create(ui_HomeButtonL);

    lv_obj_set_width(ui_HomeButtonLText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_HomeButtonLText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_HomeButtonLText, lv_pct(0));
    lv_obj_set_y(ui_HomeButtonLText, lv_pct(0));

    lv_obj_set_align(ui_HomeButtonLText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_HomeButtonLText, T_ROTATION);

    lv_obj_set_style_text_color(ui_HomeButtonLText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HomeButtonLText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_HomeButtonM

    ui_HomeButtonM = lv_btn_create(ui_Home);

    lv_obj_set_width(ui_HomeButtonM, 100);
    lv_obj_set_height(ui_HomeButtonM, 30);

    lv_obj_set_y(ui_HomeButtonM, 100);
    lv_obj_set_x(ui_HomeButtonM, lv_pct(0));

    lv_obj_set_align(ui_HomeButtonM, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_HomeButtonM, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_HomeButtonM, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_HomeButtonM, ui_event_HomeButtonM, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_HomeButtonM, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomeButtonM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_HomeButtonMText

    ui_HomeButtonMText = lv_label_create(ui_HomeButtonM);

    lv_obj_set_width(ui_HomeButtonMText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_HomeButtonMText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_HomeButtonMText, lv_pct(0));
    lv_obj_set_y(ui_HomeButtonMText, lv_pct(0));

    lv_obj_set_align(ui_HomeButtonMText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_HomeButtonMText, T_START);

    lv_obj_set_style_text_color(ui_HomeButtonMText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HomeButtonMText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_HomeButtonR

    ui_HomeButtonR = lv_btn_create(ui_Home);

    lv_obj_set_width(ui_HomeButtonR, 100);
    lv_obj_set_height(ui_HomeButtonR, 30);

    lv_obj_set_y(ui_HomeButtonR, 100);
    lv_obj_set_x(ui_HomeButtonR, lv_pct(33));

    lv_obj_set_align(ui_HomeButtonR, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_HomeButtonR, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_HomeButtonR, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_HomeButtonR, ui_event_HomeButtonR, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_HomeButtonR, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomeButtonR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_HomeButtonRText

    ui_HomeButtonRText = lv_label_create(ui_HomeButtonR);

    lv_obj_set_width(ui_HomeButtonRText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_HomeButtonRText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_HomeButtonRText, lv_pct(0));
    lv_obj_set_y(ui_HomeButtonRText, lv_pct(0));

    lv_obj_set_align(ui_HomeButtonRText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_HomeButtonRText, T_PATTERN_Button);

    lv_obj_set_style_text_color(ui_HomeButtonRText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HomeButtonRText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_HomeButtonRText, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SpeedL

    ui_SpeedL = lv_label_create(ui_Home);

    lv_obj_set_width(ui_SpeedL, lv_pct(95));
    lv_obj_set_height(ui_SpeedL, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_SpeedL, 0);
    lv_obj_set_y(ui_SpeedL, -60);

    lv_obj_set_align(ui_SpeedL, LV_ALIGN_CENTER);

    lv_label_set_text(ui_SpeedL, T_SPEED);

    lv_obj_set_style_text_font(ui_SpeedL, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_homespeedslider

    ui_homespeedslider = lv_slider_create(ui_SpeedL);
    lv_slider_set_range(ui_homespeedslider, 0, speedlimit);
    //lv_slider_set_mode(ui_homespeedslider, LV_SLIDER_MODE_SYMMETRICAL);

    lv_obj_set_width(ui_homespeedslider, 130);
    lv_obj_set_height(ui_homespeedslider, 10);

    lv_obj_set_x(ui_homespeedslider, -15);
    lv_obj_set_y(ui_homespeedslider, 0);

    lv_obj_set_align(ui_homespeedslider, LV_ALIGN_RIGHT_MID);

    lv_obj_set_style_bg_color(ui_homespeedslider, lv_color_hex(0xD691D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homespeedslider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_homespeedslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homespeedslider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_homespeedslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_homespeedslider, lv_color_hex(0x83277B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homespeedslider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_homespeedvalue

    ui_homespeedvalue = lv_label_create(ui_SpeedL);

    lv_obj_set_width(ui_homespeedvalue, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_homespeedvalue, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_homespeedvalue, 80);
    lv_obj_set_y(ui_homespeedvalue, 0);

    lv_obj_set_align(ui_homespeedvalue, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_homespeedvalue, T_BLANK);

    // ui_DepthL

    ui_DepthL = lv_label_create(ui_Home);

    lv_obj_set_width(ui_DepthL, lv_pct(95));
    lv_obj_set_height(ui_DepthL, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_DepthL, 0);
    lv_obj_set_y(ui_DepthL, -25);

    lv_obj_set_align(ui_DepthL, LV_ALIGN_CENTER);

    lv_label_set_text(ui_DepthL, T_DEPTH);

    lv_obj_set_style_text_font(ui_DepthL, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_homedepthslider

    ui_homedepthslider = lv_slider_create(ui_DepthL);
    lv_slider_set_range(ui_homedepthslider, 0, maxdepthinmm);

    lv_obj_set_width(ui_homedepthslider, 130);
    lv_obj_set_height(ui_homedepthslider, 10);

    lv_obj_set_x(ui_homedepthslider, -15);
    lv_obj_set_y(ui_homedepthslider, 0);

    lv_obj_set_align(ui_homedepthslider, LV_ALIGN_RIGHT_MID);

    lv_obj_set_style_bg_color(ui_homedepthslider, lv_color_hex(0xD691D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homedepthslider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_homedepthslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homedepthslider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_homedepthslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_homedepthslider, lv_color_hex(0x83277B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homedepthslider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_homedepthvalue

    ui_homedepthvalue = lv_label_create(ui_DepthL);

    lv_obj_set_width(ui_homedepthvalue, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_homedepthvalue, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_homedepthvalue, 80);
    lv_obj_set_y(ui_homedepthvalue, 0);

    lv_obj_set_align(ui_homedepthvalue, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_homedepthvalue, T_BLANK);

    // ui_StrokeL

    ui_StrokeL = lv_label_create(ui_Home);

    lv_obj_set_width(ui_StrokeL, lv_pct(95));
    lv_obj_set_height(ui_StrokeL, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_StrokeL, 0);
    lv_obj_set_y(ui_StrokeL, 10);

    lv_obj_set_align(ui_StrokeL, LV_ALIGN_CENTER);

    lv_label_set_text(ui_StrokeL, T_STROKE);

    lv_obj_set_style_text_font(ui_StrokeL, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_homestrokeslider

    ui_homestrokeslider = lv_slider_create(ui_StrokeL);
    lv_slider_set_range(ui_homestrokeslider, 0, maxdepthinmm);
    lv_bar_set_mode(ui_homestrokeslider, LV_BAR_MODE_RANGE);

    lv_obj_set_width(ui_homestrokeslider, 130);
    lv_obj_set_height(ui_homestrokeslider, 10);

    lv_obj_set_x(ui_homestrokeslider, -15);
    lv_obj_set_y(ui_homestrokeslider, 0);

    lv_obj_set_align(ui_homestrokeslider, LV_ALIGN_RIGHT_MID);

    lv_obj_set_style_bg_color(ui_homestrokeslider, lv_color_hex(0xD691D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homestrokeslider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_homestrokeslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homestrokeslider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_homestrokeslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_homestrokeslider, lv_color_hex(0x83277B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homestrokeslider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_homestrokevalue

    ui_homestrokevalue = lv_label_create(ui_StrokeL);

    lv_obj_set_width(ui_homestrokevalue, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_homestrokevalue, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_homestrokevalue, 80);
    lv_obj_set_y(ui_homestrokevalue, 0);

    lv_obj_set_align(ui_homestrokevalue, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_homestrokevalue, T_BLANK);

    // ui_SensationL

    ui_SensationL = lv_label_create(ui_Home);

    lv_obj_set_width(ui_SensationL, lv_pct(95));
    lv_obj_set_height(ui_SensationL, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_SensationL, 0);
    lv_obj_set_y(ui_SensationL, 45);

    lv_obj_set_align(ui_SensationL, LV_ALIGN_CENTER);

    lv_label_set_text(ui_SensationL, T_SENSATION);

    lv_obj_set_style_text_font(ui_SensationL, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_homesensationslider

    ui_homesensationslider = lv_slider_create(ui_SensationL);
    lv_slider_set_range(ui_homesensationslider, -100, 100);
    lv_slider_set_mode(ui_homesensationslider, LV_SLIDER_MODE_SYMMETRICAL);

    lv_obj_set_width(ui_homesensationslider, 170);
    lv_obj_set_height(ui_homesensationslider, 10);

    lv_obj_set_x(ui_homesensationslider, -15);
    lv_obj_set_y(ui_homesensationslider, 0);

    lv_obj_set_align(ui_homesensationslider, LV_ALIGN_RIGHT_MID);

    lv_obj_set_style_bg_color(ui_homesensationslider, lv_color_hex(0xD691D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homesensationslider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_homesensationslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homesensationslider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_homesensationslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_homesensationslider, lv_color_hex(0x83277B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homesensationslider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_Batt2

    ui_Batt2 = lv_label_create(ui_Home);

    lv_obj_set_width(ui_Batt2, 85);
    lv_obj_set_height(ui_Batt2, 30);

    lv_obj_set_x(ui_Batt2, 115);
    lv_obj_set_y(ui_Batt2, -103);

    lv_obj_set_align(ui_Batt2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Batt2, T_BATT);

    // ui_BattValue2

    ui_BattValue2 = lv_label_create(ui_Batt2);

    lv_obj_set_width(ui_BattValue2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BattValue2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BattValue2, 0);
    lv_obj_set_y(ui_BattValue2, -7);

    lv_obj_set_align(ui_BattValue2, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_BattValue2, T_BLANK);


    // ui_Battery2

    ui_Battery2 = lv_bar_create(ui_Batt2);
    lv_bar_set_range(ui_Battery2, 0, 100);

    lv_obj_set_width(ui_Battery2, 80);
    lv_obj_set_height(ui_Battery2, 10);

    lv_obj_set_x(ui_Battery2, 0);
    lv_obj_set_y(ui_Battery2, 10);

    lv_obj_set_align(ui_Battery2, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Battery2, lv_color_hex(0xD591D5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Battery2, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_HomePatternLabel1

    ui_HomePatternLabel1 = lv_label_create(ui_Home);

    lv_obj_set_width(ui_HomePatternLabel1, lv_pct(95));
    lv_obj_set_height(ui_HomePatternLabel1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_HomePatternLabel1, 10);
    lv_obj_set_y(ui_HomePatternLabel1, 70);

    lv_obj_set_align(ui_HomePatternLabel1, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_HomePatternLabel1, T_Patterns);

    lv_obj_set_style_text_font(ui_HomePatternLabel1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_HomePatternLabel

    ui_HomePatternLabel = lv_label_create(ui_HomePatternLabel1);

    lv_obj_set_width(ui_HomePatternLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_HomePatternLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_HomePatternLabel, 120);
    lv_obj_set_y(ui_HomePatternLabel, 0);

    lv_obj_set_align(ui_HomePatternLabel, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_HomePatternLabel, T_BLANK);

    // ui_connect

    ui_connect = lv_label_create(ui_Home);

    lv_obj_set_width(ui_connect, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_connect, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_connect, -113);
    lv_obj_set_y(ui_connect, -102);

    lv_obj_set_align(ui_connect, LV_ALIGN_CENTER);

    lv_label_set_text(ui_connect, T_BLANK);

}
void ui_Menue_screen_init(void)
{

    // ui_Menue

    ui_Menue = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Menue, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Menue, ui_event_Menue, LV_EVENT_ALL, NULL);

    // ui_Logo3

    ui_Logo3 = lv_label_create(ui_Menue);

    lv_obj_set_width(ui_Logo3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Logo3, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Logo3, -103);
    lv_obj_set_x(ui_Logo3, lv_pct(0));

    lv_obj_set_align(ui_Logo3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Logo3, T_HEADER);

    lv_obj_set_style_text_font(ui_Logo3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Logo3, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Logo3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Logo3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Logo3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_MenueButtonL

    ui_MenueButtonL = lv_btn_create(ui_Menue);

    lv_obj_set_width(ui_MenueButtonL, 100);
    lv_obj_set_height(ui_MenueButtonL, 30);

    lv_obj_set_y(ui_MenueButtonL, 100);
    lv_obj_set_x(ui_MenueButtonL, lv_pct(-33));

    lv_obj_set_align(ui_MenueButtonL, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_MenueButtonL, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_MenueButtonL, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_MenueButtonL, ui_event_MenueButtonL, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_MenueButtonL, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MenueButtonL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_MenueButtonLText

    ui_MenueButtonLText = lv_label_create(ui_MenueButtonL);

    lv_obj_set_width(ui_MenueButtonLText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_MenueButtonLText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_MenueButtonLText, lv_pct(0));
    lv_obj_set_y(ui_MenueButtonLText, lv_pct(0));

    lv_obj_set_align(ui_MenueButtonLText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_MenueButtonLText, T_SETTINGS);

    lv_obj_set_style_text_color(ui_MenueButtonLText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MenueButtonLText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_MenueButtonM

    ui_MenueButtonM = lv_btn_create(ui_Menue);

    lv_obj_set_width(ui_MenueButtonM, 100);
    lv_obj_set_height(ui_MenueButtonM, 30);

    lv_obj_set_y(ui_MenueButtonM, 100);
    lv_obj_set_x(ui_MenueButtonM, lv_pct(0));

    lv_obj_set_align(ui_MenueButtonM, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_MenueButtonM, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_MenueButtonM, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_MenueButtonM, ui_event_MenueButtonM, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_MenueButtonM, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MenueButtonM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_MenueButtonMText

    ui_MenueButtonMText = lv_label_create(ui_MenueButtonM);

    lv_obj_set_width(ui_MenueButtonMText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_MenueButtonMText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_MenueButtonMText, lv_pct(0));
    lv_obj_set_y(ui_MenueButtonMText, lv_pct(0));

    lv_obj_set_align(ui_MenueButtonMText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_MenueButtonMText, T_HOME);

    lv_obj_set_style_text_color(ui_MenueButtonMText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MenueButtonMText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_MenueButtonR

    ui_MenueButtonR = lv_btn_create(ui_Menue);

    lv_obj_set_width(ui_MenueButtonR, 100);
    lv_obj_set_height(ui_MenueButtonR, 30);

    lv_obj_set_y(ui_MenueButtonR, 100);
    lv_obj_set_x(ui_MenueButtonR, lv_pct(33));

    lv_obj_set_align(ui_MenueButtonR, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_MenueButtonR, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_MenueButtonR, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_state(ui_MenueButtonR, LV_STATE_DISABLED);

    lv_obj_add_event_cb(ui_MenueButtonR, ui_event_MenueButtonR, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_MenueButtonR, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MenueButtonR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_MenueButtonRText

    ui_MenueButtonRText = lv_label_create(ui_MenueButtonR);

    lv_obj_set_width(ui_MenueButtonRText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_MenueButtonRText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_MenueButtonRText, lv_pct(0));
    lv_obj_set_y(ui_MenueButtonRText, lv_pct(0));

    lv_obj_set_align(ui_MenueButtonRText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_MenueButtonRText, T_BLANK);

    lv_obj_set_style_text_color(ui_MenueButtonRText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MenueButtonRText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Batt3

    ui_Batt3 = lv_label_create(ui_Menue);

    lv_obj_set_width(ui_Batt3, 85);
    lv_obj_set_height(ui_Batt3, 30);

    lv_obj_set_x(ui_Batt3, 115);
    lv_obj_set_y(ui_Batt3, -103);

    lv_obj_set_align(ui_Batt3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Batt3, T_BATT);

    // ui_BattValue3

    ui_BattValue3 = lv_label_create(ui_Batt3);

    lv_obj_set_width(ui_BattValue3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BattValue3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BattValue3, 0);
    lv_obj_set_y(ui_BattValue3, -7);

    lv_obj_set_align(ui_BattValue3, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_BattValue3, T_BLANK);

    // ui_Battery3

    ui_Battery3 = lv_bar_create(ui_Batt3);
    lv_bar_set_range(ui_Battery3, 0, 100);

    lv_obj_set_width(ui_Battery3, 80);
    lv_obj_set_height(ui_Battery3, 10);

    lv_obj_set_x(ui_Battery3, 0);
    lv_obj_set_y(ui_Battery3, 10);

    lv_obj_set_align(ui_Battery3, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Battery3, lv_color_hex(0xD591D5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Battery3, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_SDepthI

    ui_SDepthI = lv_btn_create(ui_Menue);

    lv_obj_set_height(ui_SDepthI, 30);
    lv_obj_set_width(ui_SDepthI, lv_pct(80));

    lv_obj_set_y(ui_SDepthI, -70);
    lv_obj_set_x(ui_SDepthI, lv_pct(1));

    lv_obj_set_align(ui_SDepthI, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_SDepthI, LV_STATE_FOCUSED);

    lv_obj_add_flag(ui_SDepthI, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_SDepthI, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_SDepthI, ui_event_SDepthI, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_SDepthI, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SDepthI, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SDepthI, lv_color_hex(0x5b0353), LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_SDepthIL

    ui_SDepthIL = lv_label_create(ui_SDepthI);

    lv_obj_set_width(ui_SDepthIL, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_SDepthIL, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_SDepthIL, lv_pct(0));
    lv_obj_set_y(ui_SDepthIL, lv_pct(0));

    lv_obj_set_align(ui_SDepthIL, LV_ALIGN_CENTER);

    lv_label_set_text(ui_SDepthIL, T_SETUP_DEPTH_I);

    lv_obj_set_style_text_color(ui_SDepthIL, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SDepthIL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SDepthF

    ui_SDepthF = lv_btn_create(ui_Menue);

    lv_obj_set_height(ui_SDepthF, 30);
    lv_obj_set_width(ui_SDepthF, lv_pct(80));

    lv_obj_set_y(ui_SDepthF, -36);
    lv_obj_set_x(ui_SDepthF, lv_pct(1));

    lv_obj_set_align(ui_SDepthF, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_SDepthF, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_SDepthF, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_SDepthF, ui_event_SDepthF, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_SDepthF, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SDepthF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SDepthF, lv_color_hex(0x5b0353), LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_SDepthFL

    ui_SDepthFL = lv_label_create(ui_SDepthF);

    lv_obj_set_width(ui_SDepthFL, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_SDepthFL, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_SDepthFL, lv_pct(0));
    lv_obj_set_y(ui_SDepthFL, lv_pct(0));

    lv_obj_set_align(ui_SDepthFL, LV_ALIGN_CENTER);

    lv_label_set_text(ui_SDepthFL, T_SETUP_DEPTH_F);

    lv_obj_set_style_text_color(ui_SDepthFL, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SDepthFL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SPattern

    ui_SPattern = lv_btn_create(ui_Menue);

    lv_obj_set_height(ui_SPattern, 30);
    lv_obj_set_width(ui_SPattern, lv_pct(38));

    lv_obj_set_y(ui_SPattern, -2);
    lv_obj_set_x(ui_SPattern, lv_pct(-20));

    lv_obj_set_align(ui_SPattern, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_SPattern, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_SPattern, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_SPattern, ui_event_SPattern, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_SPattern, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SPattern, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SPattern, lv_color_hex(0x5b0353), LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_SPatternL

    ui_SPatternL = lv_label_create(ui_SPattern);

    lv_obj_set_width(ui_SPatternL, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_SPatternL, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_SPatternL, lv_pct(0));
    lv_obj_set_y(ui_SPatternL, lv_pct(0));

    lv_obj_set_align(ui_SPatternL, LV_ALIGN_CENTER);

    lv_label_set_text(ui_SPatternL, T_SELECT_PATTERN);

    lv_obj_set_style_text_color(ui_SPatternL, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SPatternL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_STorqe

    ui_STorqe = lv_btn_create(ui_Menue);

    lv_obj_set_height(ui_STorqe, 30);
    lv_obj_set_width(ui_STorqe, lv_pct(38));

    lv_obj_set_y(ui_STorqe, -2);
    lv_obj_set_x(ui_STorqe, lv_pct(21));

    lv_obj_set_align(ui_STorqe, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_STorqe, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_STorqe, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_STorqe, ui_event_STorqe, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_STorqe, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_STorqe, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_STorqe, lv_color_hex(0x5b0353), LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_STorqeL

    ui_STorqeL = lv_label_create(ui_STorqe);

    lv_obj_set_width(ui_STorqeL, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_STorqeL, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_STorqeL, lv_pct(0));
    lv_obj_set_y(ui_STorqeL, lv_pct(0));

    lv_obj_set_align(ui_STorqeL, LV_ALIGN_CENTER);

    lv_label_set_text(ui_STorqeL, T_SETUP_TORQE);

    lv_obj_set_style_text_color(ui_STorqeL, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_STorqeL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_EJECTSettingButton

    ui_EJECTSettingButton = lv_btn_create(ui_Menue);

    lv_obj_set_height(ui_EJECTSettingButton, 30);
    lv_obj_set_width(ui_EJECTSettingButton, lv_pct(38));

    lv_obj_set_y(ui_EJECTSettingButton, 32);
    lv_obj_set_x(ui_EJECTSettingButton, lv_pct(-20));

    lv_obj_set_align(ui_EJECTSettingButton, LV_ALIGN_CENTER);

    lv_obj_add_state(ui_EJECTSettingButton, LV_STATE_DISABLED);

    lv_obj_add_flag(ui_EJECTSettingButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_EJECTSettingButton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_EJECTSettingButton, ui_event_EJECTSettingButton, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_EJECTSettingButton, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_EJECTSettingButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_EJECTSettingButton, lv_color_hex(0x5b0353), LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_EJECTSettingButtonText

    ui_EJECTSettingButtonText = lv_label_create(ui_EJECTSettingButton);

    lv_obj_set_width(ui_EJECTSettingButtonText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_EJECTSettingButtonText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_EJECTSettingButtonText, lv_pct(0));
    lv_obj_set_y(ui_EJECTSettingButtonText, lv_pct(0));

    lv_obj_set_align(ui_EJECTSettingButtonText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_EJECTSettingButtonText, T_EJECT_SETTINGS);

    lv_obj_set_style_text_color(ui_EJECTSettingButtonText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_EJECTSettingButtonText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SRotation

    ui_SRotation = lv_btn_create(ui_Menue);

    lv_obj_set_height(ui_SRotation, 30);
    lv_obj_set_width(ui_SRotation, lv_pct(38));

    lv_obj_set_y(ui_SRotation, 32);
    lv_obj_set_x(ui_SRotation, lv_pct(21));

    lv_obj_set_align(ui_SRotation, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_SRotation, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_SRotation, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_SRotation, ui_event_SRotation, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_SRotation, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SRotation, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SRotation, lv_color_hex(0x5b0353), LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_SRotationL

    ui_SRotationL = lv_label_create(ui_SRotation);

    lv_obj_set_width(ui_SRotationL, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_SRotationL, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_SRotationL, lv_pct(0));
    lv_obj_set_y(ui_SRotationL, lv_pct(0));

    lv_obj_set_align(ui_SRotationL, LV_ALIGN_CENTER);

    lv_label_set_text(ui_SRotationL, T_ROTATION);

    lv_obj_set_style_text_color(ui_SRotationL, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SRotationL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_STweak (fifth row, left column)

    ui_STweak = lv_btn_create(ui_Menue);

    lv_obj_set_height(ui_STweak, 30);
    lv_obj_set_width(ui_STweak, lv_pct(38));

    lv_obj_set_y(ui_STweak, 66);
    lv_obj_set_x(ui_STweak, lv_pct(-20));

    lv_obj_set_align(ui_STweak, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_STweak, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_STweak, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_STweak, ui_event_STweak, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_STweak, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_STweak, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_STweak, lv_color_hex(0x5b0353), LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_STweakL

    ui_STweakL = lv_label_create(ui_STweak);

    lv_obj_set_width(ui_STweakL, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_STweakL, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_STweakL, lv_pct(0));
    lv_obj_set_y(ui_STweakL, lv_pct(0));

    lv_obj_set_align(ui_STweakL, LV_ALIGN_CENTER);

    lv_label_set_text(ui_STweakL, T_TWEAK);

    lv_obj_set_style_text_color(ui_STweakL, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_STweakL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_g_menue = lv_group_create();
    lv_group_add_obj(ui_g_menue, ui_SDepthI);
    lv_group_add_obj(ui_g_menue, ui_SDepthF);
    lv_group_add_obj(ui_g_menue, ui_SPattern);
    lv_group_add_obj(ui_g_menue, ui_STorqe);
    lv_group_add_obj(ui_g_menue, ui_EJECTSettingButton);
    lv_group_add_obj(ui_g_menue, ui_SRotation);
    lv_group_add_obj(ui_g_menue, ui_STweak);

}
static lv_obj_t * ui_make_select_roller(lv_obj_t * parent, const char * options, int x)
{
    lv_obj_t * r = lv_roller_create(parent);
    lv_roller_set_options(r, options, LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(r, 100);
    lv_obj_set_width(r, 104);
    lv_obj_set_x(r, x);
    lv_obj_set_y(r, 22);
    lv_obj_set_align(r, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(r, lv_color_hex(0xB481AC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(r, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(r, lv_color_hex(0x83247B), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(r, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    return r;
}

static void ui_make_select_label(lv_obj_t * parent, const char * text, int x)
{
    lv_obj_t * l = lv_label_create(parent);
    lv_obj_set_width(l, LV_SIZE_CONTENT);
    lv_obj_set_height(l, LV_SIZE_CONTENT);
    lv_obj_set_x(l, x);
    lv_obj_set_y(l, -40);
    lv_obj_set_align(l, LV_ALIGN_CENTER);
    lv_label_set_text(l, text);
}

void ui_Pattern_screen_init(void)
{

    // ui_Pattern

    ui_Pattern = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Pattern, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Pattern, ui_event_Pattern, LV_EVENT_ALL, NULL);

    ui_add_menu_chip(ui_Pattern);

    // ui_Logo5

    ui_Logo5 = lv_label_create(ui_Pattern);

    lv_obj_set_width(ui_Logo5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Logo5, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Logo5, -103);
    lv_obj_set_x(ui_Logo5, lv_pct(0));

    lv_obj_set_align(ui_Logo5, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Logo5, T_HEADER);

    lv_obj_set_style_text_font(ui_Logo5, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Logo5, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Logo5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Logo5, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Logo5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_PatternButtonL

    ui_PatternButtonL = lv_btn_create(ui_Pattern);

    lv_obj_set_width(ui_PatternButtonL, 100);
    lv_obj_set_height(ui_PatternButtonL, 30);

    lv_obj_set_y(ui_PatternButtonL, 100);
    lv_obj_set_x(ui_PatternButtonL, lv_pct(-33));

    lv_obj_set_align(ui_PatternButtonL, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_PatternButtonL, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_PatternButtonL, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_PatternButtonL, ui_event_PatternButtonL, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_PatternButtonL, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PatternButtonL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_PatternButtonLText

    ui_PatternButtonLText = lv_label_create(ui_PatternButtonL);

    lv_obj_set_width(ui_PatternButtonLText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_PatternButtonLText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_PatternButtonLText, lv_pct(0));
    lv_obj_set_y(ui_PatternButtonLText, lv_pct(0));

    lv_obj_set_align(ui_PatternButtonLText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_PatternButtonLText, T_STROKE_SCREEN);

    lv_obj_set_style_text_color(ui_PatternButtonLText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PatternButtonLText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_PatternButtonM

    ui_PatternButtonM = lv_btn_create(ui_Pattern);

    lv_obj_set_width(ui_PatternButtonM, 100);
    lv_obj_set_height(ui_PatternButtonM, 30);

    lv_obj_set_y(ui_PatternButtonM, 100);
    lv_obj_set_x(ui_PatternButtonM, lv_pct(0));

    lv_obj_set_align(ui_PatternButtonM, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_PatternButtonM, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_PatternButtonM, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_PatternButtonM, ui_event_PatternButtonM, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_PatternButtonM, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PatternButtonM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_PatternButtonMText

    ui_PatternButtonMText = lv_label_create(ui_PatternButtonM);

    lv_obj_set_width(ui_PatternButtonMText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_PatternButtonMText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_PatternButtonMText, lv_pct(0));
    lv_obj_set_y(ui_PatternButtonMText, lv_pct(0));

    lv_obj_set_align(ui_PatternButtonMText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_PatternButtonMText, T_START);

    lv_obj_set_style_text_color(ui_PatternButtonMText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PatternButtonMText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_PatternButtonR

    ui_PatternButtonR = lv_btn_create(ui_Pattern);

    lv_obj_set_width(ui_PatternButtonR, 100);
    lv_obj_set_height(ui_PatternButtonR, 30);

    lv_obj_set_y(ui_PatternButtonR, 100);
    lv_obj_set_x(ui_PatternButtonR, lv_pct(33));

    lv_obj_set_align(ui_PatternButtonR, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_PatternButtonR, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_PatternButtonR, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_PatternButtonR, ui_event_PatternButtonR, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_PatternButtonR, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PatternButtonR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_PatternButtonRText

    ui_PatternButtonRText = lv_label_create(ui_PatternButtonR);

    lv_obj_set_width(ui_PatternButtonRText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_PatternButtonRText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_PatternButtonRText, lv_pct(0));
    lv_obj_set_y(ui_PatternButtonRText, lv_pct(0));

    lv_obj_set_align(ui_PatternButtonRText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_PatternButtonRText, T_APPLY);

    lv_obj_set_style_text_color(ui_PatternButtonRText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PatternButtonRText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Batt5

    ui_Batt5 = lv_label_create(ui_Pattern);

    lv_obj_set_width(ui_Batt5, 85);
    lv_obj_set_height(ui_Batt5, 30);

    lv_obj_set_x(ui_Batt5, 115);
    lv_obj_set_y(ui_Batt5, -103);

    lv_obj_set_align(ui_Batt5, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Batt5, T_BATT);

    // ui_BattValue5

    ui_BattValue5 = lv_label_create(ui_Batt5);

    lv_obj_set_width(ui_BattValue5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BattValue5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BattValue5, 0);
    lv_obj_set_y(ui_BattValue5, -7);

    lv_obj_set_align(ui_BattValue5, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_BattValue5, T_BLANK);

    // ui_Battery5

    ui_Battery5 = lv_bar_create(ui_Batt5);
    lv_bar_set_range(ui_Battery5, 0, 100);

    lv_obj_set_width(ui_Battery5, 80);
    lv_obj_set_height(ui_Battery5, 10);

    lv_obj_set_x(ui_Battery5, 0);
    lv_obj_set_y(ui_Battery5, 10);

    lv_obj_set_align(ui_Battery5, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Battery5, lv_color_hex(0xD591D5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Battery5, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery5, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_Label4

    ui_Label4 = lv_label_create(ui_Pattern);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, 0);
    lv_obj_set_y(ui_Label4, -60);

    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label4, T_SELECT_PATTERN);

    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Select screen: combo (E1), stroke pattern (E2), rotation pattern (E3).
    // Roller labels are abbreviated to fit; indices match the pattern tables.
    ui_make_select_label(ui_Pattern, "Combo", -106);
    ui_make_select_label(ui_Pattern, "Stroke", 0);
    ui_make_select_label(ui_Pattern, "Rotation", 106);

    ui_ComboS = ui_make_select_roller(ui_Pattern,
                          "Custom\nLocked in\nLayers\nDepth aware\nTempo aware\nClimax\nChaos",
                          -106);
    ui_PatternS = ui_make_select_roller(ui_Pattern,
                          "Simple\nTeasing\nRobo\nHalf'n'Half\nDeeper\nStop'n'Go\nInsist\n"
                          "Jack Hammer\nNibbler\nDepth Pulse",
                          0);
    ui_SelectRotationS = ui_make_select_roller(ui_Pattern,
                          "Steady\nSweep\nEscalation\nRand Bursts\nScrew Sync\nStutter Sync\n"
                          "Bottom Hold\nDepth Surge\nThresh Burst\nTempo Match\nSnap Reverse\n"
                          "Alt Sweep\nDir Bursts\nMetronome\nDrunken Walk\nEsc Reversal\n"
                          "Trigger Spin",
                          106);
}

void ui_Torqe_screen_init(void)
{

    // ui_Torqe

    ui_Torqe = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Torqe, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Torqe, ui_event_Torqe, LV_EVENT_ALL, NULL);

    ui_add_menu_chip(ui_Torqe);

    // ui_Logo4

    ui_Logo4 = lv_label_create(ui_Torqe);

    lv_obj_set_width(ui_Logo4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Logo4, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Logo4, -103);
    lv_obj_set_x(ui_Logo4, lv_pct(0));

    lv_obj_set_align(ui_Logo4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Logo4, T_HEADER);

    lv_obj_set_style_text_font(ui_Logo4, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Logo4, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Logo4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Logo4, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Logo4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TorqeButtonL

    ui_TorqeButtonL = lv_btn_create(ui_Torqe);

    lv_obj_set_width(ui_TorqeButtonL, 100);
    lv_obj_set_height(ui_TorqeButtonL, 30);

    lv_obj_set_y(ui_TorqeButtonL, 100);
    lv_obj_set_x(ui_TorqeButtonL, lv_pct(-33));

    lv_obj_set_align(ui_TorqeButtonL, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_TorqeButtonL, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_TorqeButtonL, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_TorqeButtonL, ui_event_TorqeButtonL, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_TorqeButtonL, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TorqeButtonL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TorqeButtonLText

    ui_TorqeButtonLText = lv_label_create(ui_TorqeButtonL);

    lv_obj_set_width(ui_TorqeButtonLText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_TorqeButtonLText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_TorqeButtonLText, lv_pct(0));
    lv_obj_set_y(ui_TorqeButtonLText, lv_pct(0));

    lv_obj_set_align(ui_TorqeButtonLText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_TorqeButtonLText, T_BLANK);

    lv_obj_set_style_text_color(ui_TorqeButtonLText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TorqeButtonLText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TorqeButtonM

    ui_TorqeButtonM = lv_btn_create(ui_Torqe);

    lv_obj_set_width(ui_TorqeButtonM, 100);
    lv_obj_set_height(ui_TorqeButtonM, 30);

    lv_obj_set_y(ui_TorqeButtonM, 100);
    lv_obj_set_x(ui_TorqeButtonM, lv_pct(0));

    lv_obj_set_align(ui_TorqeButtonM, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_TorqeButtonM, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_TorqeButtonM, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_TorqeButtonM, ui_event_TorqeButtonM, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_TorqeButtonM, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TorqeButtonM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TorqeButtonMText

    ui_TorqeButtonMText = lv_label_create(ui_TorqeButtonM);

    lv_obj_set_width(ui_TorqeButtonMText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_TorqeButtonMText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_TorqeButtonMText, lv_pct(0));
    lv_obj_set_y(ui_TorqeButtonMText, lv_pct(0));

    lv_obj_set_align(ui_TorqeButtonMText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_TorqeButtonMText, T_HOME);

    lv_obj_set_style_text_color(ui_TorqeButtonMText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TorqeButtonMText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TorqeButtonR

    ui_TorqeButtonR = lv_btn_create(ui_Torqe);

    lv_obj_set_width(ui_TorqeButtonR, 100);
    lv_obj_set_height(ui_TorqeButtonR, 30);

    lv_obj_set_y(ui_TorqeButtonR, 100);
    lv_obj_set_x(ui_TorqeButtonR, lv_pct(33));

    lv_obj_set_align(ui_TorqeButtonR, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_TorqeButtonR, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_TorqeButtonR, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_TorqeButtonR, ui_event_TorqeButtonR, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_TorqeButtonR, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TorqeButtonR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TorqeButtonRText

    ui_TorqeButtonRText = lv_label_create(ui_TorqeButtonR);

    lv_obj_set_width(ui_TorqeButtonRText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_TorqeButtonRText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_TorqeButtonRText, lv_pct(0));
    lv_obj_set_y(ui_TorqeButtonRText, lv_pct(0));

    lv_obj_set_align(ui_TorqeButtonRText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_TorqeButtonRText, T_MENUE);

    lv_obj_set_style_text_color(ui_TorqeButtonRText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TorqeButtonRText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_outtroqelabel

    ui_outtroqelabel = lv_label_create(ui_Torqe);

    lv_obj_set_height(ui_outtroqelabel, 60);
    lv_obj_set_width(ui_outtroqelabel, lv_pct(93));

    lv_obj_set_x(ui_outtroqelabel, 10);
    lv_obj_set_y(ui_outtroqelabel, -45);

    lv_obj_set_align(ui_outtroqelabel, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_outtroqelabel, T_OUT_TORQE);

    lv_obj_set_style_text_font(ui_outtroqelabel, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_outtroqevalue

    ui_outtroqevalue = lv_label_create(ui_outtroqelabel);

    lv_obj_set_width(ui_outtroqevalue, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_outtroqevalue, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_outtroqevalue, 190);
    lv_obj_set_y(ui_outtroqevalue, -14);

    lv_obj_set_align(ui_outtroqevalue, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_outtroqevalue, T_BLANK);

    lv_obj_set_style_text_font(ui_outtroqevalue, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_outtroqeslider

    ui_outtroqeslider = lv_slider_create(ui_outtroqelabel);
    lv_slider_set_range(ui_outtroqeslider, 50, 200);
    lv_slider_set_value(ui_outtroqeslider, 180, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_outtroqeslider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_outtroqeslider, 0,
                                                                                                   LV_ANIM_OFF);

    lv_obj_set_width(ui_outtroqeslider, 195);
    lv_obj_set_height(ui_outtroqeslider, 10);

    lv_obj_set_x(ui_outtroqeslider, 50);
    lv_obj_set_y(ui_outtroqeslider, 15);

    lv_obj_set_align(ui_outtroqeslider, LV_ALIGN_LEFT_MID);

    lv_obj_set_style_bg_color(ui_outtroqeslider, lv_color_hex(0xD691D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_outtroqeslider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_outtroqeslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_outtroqeslider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_outtroqeslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_outtroqeslider, lv_color_hex(0x83277B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_outtroqeslider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_Low1

    ui_Low1 = lv_label_create(ui_outtroqelabel);

    lv_obj_set_width(ui_Low1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Low1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Low1, 0);
    lv_obj_set_y(ui_Low1, 14);

    lv_obj_set_align(ui_Low1, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Low1, T_LOW);

    lv_obj_set_style_text_font(ui_Low1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_High1

    ui_High1 = lv_label_create(ui_outtroqelabel);

    lv_obj_set_width(ui_High1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_High1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_High1, 0);
    lv_obj_set_y(ui_High1, 14);

    lv_obj_set_align(ui_High1, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_High1, T_HIGH);

    lv_obj_set_style_text_font(ui_High1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_introqelabel

    ui_introqelabel = lv_label_create(ui_Torqe);

    lv_obj_set_height(ui_introqelabel, 60);
    lv_obj_set_width(ui_introqelabel, lv_pct(93));

    lv_obj_set_x(ui_introqelabel, 10);
    lv_obj_set_y(ui_introqelabel, 30);

    lv_obj_set_align(ui_introqelabel, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_introqelabel, T_IN_TORQE);

    lv_obj_set_style_text_font(ui_introqelabel, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_introqevalue

    ui_introqevalue = lv_label_create(ui_introqelabel);

    lv_obj_set_width(ui_introqevalue, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_introqevalue, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_introqevalue, 190);
    lv_obj_set_y(ui_introqevalue, -14);

    lv_obj_set_align(ui_introqevalue, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_introqevalue, T_BLANK);

    lv_obj_set_style_text_font(ui_introqevalue, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_introqeslider

    ui_introqeslider = lv_slider_create(ui_introqelabel);
    lv_slider_set_range(ui_introqeslider, 20, 200);
    lv_slider_set_value(ui_introqeslider, 100, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_introqeslider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_introqeslider, 0,
                                                                                                  LV_ANIM_OFF);

    lv_obj_set_width(ui_introqeslider, 195);
    lv_obj_set_height(ui_introqeslider, 10);

    lv_obj_set_x(ui_introqeslider, 50);
    lv_obj_set_y(ui_introqeslider, 15);

    lv_obj_set_align(ui_introqeslider, LV_ALIGN_LEFT_MID);

    lv_obj_set_style_bg_color(ui_introqeslider, lv_color_hex(0xD691D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_introqeslider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_introqeslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_introqeslider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_introqeslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_introqeslider, lv_color_hex(0x83277B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_introqeslider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_Low2

    ui_Low2 = lv_label_create(ui_introqelabel);

    lv_obj_set_width(ui_Low2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Low2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Low2, 0);
    lv_obj_set_y(ui_Low2, 14);

    lv_obj_set_align(ui_Low2, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Low2, T_LOW);

    lv_obj_set_style_text_font(ui_Low2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_High

    ui_High = lv_label_create(ui_introqelabel);

    lv_obj_set_width(ui_High, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_High, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_High, 0);
    lv_obj_set_y(ui_High, 14);

    lv_obj_set_align(ui_High, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_High, T_HIGH);

    lv_obj_set_style_text_font(ui_High, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Batt4

    ui_Batt4 = lv_label_create(ui_Torqe);

    lv_obj_set_width(ui_Batt4, 85);
    lv_obj_set_height(ui_Batt4, 30);

    lv_obj_set_x(ui_Batt4, 115);
    lv_obj_set_y(ui_Batt4, -103);

    lv_obj_set_align(ui_Batt4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Batt4, T_BATT);

    // ui_BattValue4

    ui_BattValue4 = lv_label_create(ui_Batt4);

    lv_obj_set_width(ui_BattValue4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BattValue4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BattValue4, 0);
    lv_obj_set_y(ui_BattValue4, -7);

    lv_obj_set_align(ui_BattValue4, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_BattValue4, T_BLANK);

    // ui_Battery4

    ui_Battery4 = lv_bar_create(ui_Batt4);
    lv_bar_set_range(ui_Battery4, 0, 100);

    lv_obj_set_width(ui_Battery4, 80);
    lv_obj_set_height(ui_Battery4, 10);

    lv_obj_set_x(ui_Battery4, 0);
    lv_obj_set_y(ui_Battery4, 10);

    lv_obj_set_align(ui_Battery4, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Battery4, lv_color_hex(0xD591D5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Battery4, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

}
void ui_Rotation_screen_init(void)
{

    // ui_Rotation

    ui_Rotation = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Rotation, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Rotation, ui_event_Rotation, LV_EVENT_ALL, NULL);

    ui_add_menu_chip(ui_Rotation);

    // ui_Logo7

    ui_Logo7 = lv_label_create(ui_Rotation);

    lv_obj_set_width(ui_Logo7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Logo7, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Logo7, -103);
    lv_obj_set_x(ui_Logo7, lv_pct(0));

    lv_obj_set_align(ui_Logo7, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Logo7, T_HEADER);

    lv_obj_set_style_text_font(ui_Logo7, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Batt7

    ui_Batt7 = lv_label_create(ui_Rotation);

    lv_obj_set_width(ui_Batt7, 85);
    lv_obj_set_height(ui_Batt7, 30);

    lv_obj_set_x(ui_Batt7, 115);
    lv_obj_set_y(ui_Batt7, -103);

    lv_obj_set_align(ui_Batt7, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Batt7, T_BATT);

    // ui_BattValue7

    ui_BattValue7 = lv_label_create(ui_Batt7);

    lv_obj_set_width(ui_BattValue7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BattValue7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BattValue7, 0);
    lv_obj_set_y(ui_BattValue7, -7);

    lv_obj_set_align(ui_BattValue7, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_BattValue7, T_BLANK);

    // ui_Battery7

    ui_Battery7 = lv_bar_create(ui_Batt7);
    lv_bar_set_range(ui_Battery7, 0, 100);

    lv_obj_set_width(ui_Battery7, 80);
    lv_obj_set_height(ui_Battery7, 10);

    lv_obj_set_x(ui_Battery7, 0);
    lv_obj_set_y(ui_Battery7, 10);

    lv_obj_set_align(ui_Battery7, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Battery7, lv_color_hex(0xD591D5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Battery7, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery7, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_RotationTitle

    ui_RotationTitle = lv_label_create(ui_Rotation);

    lv_obj_set_width(ui_RotationTitle, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_RotationTitle, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_RotationTitle, 0);
    lv_obj_set_y(ui_RotationTitle, -78);

    lv_obj_set_align(ui_RotationTitle, LV_ALIGN_CENTER);

    lv_label_set_text(ui_RotationTitle, T_ROTATION);

    lv_obj_set_style_text_font(ui_RotationTitle, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_RotationSpeedL

    ui_RotationSpeedL = lv_label_create(ui_Rotation);

    lv_obj_set_width(ui_RotationSpeedL, lv_pct(95));
    lv_obj_set_height(ui_RotationSpeedL, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_RotationSpeedL, 0);
    lv_obj_set_y(ui_RotationSpeedL, -48);

    lv_obj_set_align(ui_RotationSpeedL, LV_ALIGN_CENTER);

    lv_label_set_text(ui_RotationSpeedL, T_SPEED);

    lv_obj_set_style_text_font(ui_RotationSpeedL, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_rotationspeedslider

    ui_rotationspeedslider = lv_slider_create(ui_RotationSpeedL);
    lv_slider_set_range(ui_rotationspeedslider, 0, 100);

    lv_obj_set_width(ui_rotationspeedslider, 130);
    lv_obj_set_height(ui_rotationspeedslider, 10);

    lv_obj_set_x(ui_rotationspeedslider, -15);
    lv_obj_set_y(ui_rotationspeedslider, 0);

    lv_obj_set_align(ui_rotationspeedslider, LV_ALIGN_RIGHT_MID);

    lv_obj_set_style_bg_color(ui_rotationspeedslider, lv_color_hex(0xD691D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_rotationspeedslider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_rotationspeedslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_rotationspeedslider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_rotationspeedslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_rotationspeedslider, lv_color_hex(0x83277B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_rotationspeedslider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_rotationspeedvalue

    ui_rotationspeedvalue = lv_label_create(ui_RotationSpeedL);

    lv_obj_set_width(ui_rotationspeedvalue, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_rotationspeedvalue, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_rotationspeedvalue, 80);
    lv_obj_set_y(ui_rotationspeedvalue, 0);

    lv_obj_set_align(ui_rotationspeedvalue, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_rotationspeedvalue, T_BLANK);

    // ui_RotationSensL (row container, mirrors the speed row above)
    ui_RotationSensL = lv_label_create(ui_Rotation);
    lv_obj_set_width(ui_RotationSensL, lv_pct(95));
    lv_obj_set_height(ui_RotationSensL, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_RotationSensL, 0);
    lv_obj_set_y(ui_RotationSensL, -20);
    lv_obj_set_align(ui_RotationSensL, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RotationSensL, T_SENSATION);
    lv_obj_set_style_text_font(ui_RotationSensL, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_rotationsensslider
    ui_rotationsensslider = lv_slider_create(ui_RotationSensL);
    lv_slider_set_range(ui_rotationsensslider, -100, 100);
    lv_obj_set_width(ui_rotationsensslider, 130);
    lv_obj_set_height(ui_rotationsensslider, 10);
    lv_obj_set_x(ui_rotationsensslider, -15);
    lv_obj_set_y(ui_rotationsensslider, 0);
    lv_obj_set_align(ui_rotationsensslider, LV_ALIGN_RIGHT_MID);
    lv_obj_set_style_bg_color(ui_rotationsensslider, lv_color_hex(0xD691D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_rotationsensslider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_rotationsensslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_rotationsensslider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_rotationsensslider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_rotationsensslider, lv_color_hex(0x83277B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_rotationsensslider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_rotationsensvalue
    ui_rotationsensvalue = lv_label_create(ui_RotationSensL);
    lv_obj_set_width(ui_rotationsensvalue, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_rotationsensvalue, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_rotationsensvalue, 80);
    lv_obj_set_y(ui_rotationsensvalue, 0);
    lv_obj_set_align(ui_rotationsensvalue, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_rotationsensvalue, T_BLANK);

    // ui_RotationPatternTitle (now shows the running rotation pattern name)
    ui_RotationPatternTitle = lv_label_create(ui_Rotation);
    lv_obj_set_width(ui_RotationPatternTitle, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_RotationPatternTitle, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_RotationPatternTitle, 0);
    lv_obj_set_y(ui_RotationPatternTitle, 12);
    lv_obj_set_align(ui_RotationPatternTitle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RotationPatternTitle, T_BLANK);
    lv_obj_set_style_text_font(ui_RotationPatternTitle, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_rotationdirection (Reverse)
    ui_rotationdirection = lv_checkbox_create(ui_Rotation);
    lv_checkbox_set_text(ui_rotationdirection, T_REVERSE);
    lv_obj_set_width(ui_rotationdirection, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_rotationdirection, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_rotationdirection, -80);
    lv_obj_set_y(ui_rotationdirection, 46);
    lv_obj_set_align(ui_rotationdirection, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_rotationdirection, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_add_event_cb(ui_rotationdirection, ui_event_rotationdirection, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_font(ui_rotationdirection, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_rotationdirection, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_rotationdirection, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_rotationoverdrive
    ui_rotationoverdrive = lv_checkbox_create(ui_Rotation);
    lv_checkbox_set_text(ui_rotationoverdrive, T_OVERDRIVE);
    lv_obj_set_width(ui_rotationoverdrive, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_rotationoverdrive, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_rotationoverdrive, 80);
    lv_obj_set_y(ui_rotationoverdrive, 46);
    lv_obj_set_align(ui_rotationoverdrive, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_rotationoverdrive, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_add_event_cb(ui_rotationoverdrive, ui_event_rotationoverdrive, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_font(ui_rotationoverdrive, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_rotationoverdrive, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_rotationoverdrive, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_RotationButtonL

    ui_RotationButtonL = lv_btn_create(ui_Rotation);

    lv_obj_set_width(ui_RotationButtonL, 100);
    lv_obj_set_height(ui_RotationButtonL, 30);

    lv_obj_set_y(ui_RotationButtonL, 100);
    lv_obj_set_x(ui_RotationButtonL, lv_pct(-33));

    lv_obj_set_align(ui_RotationButtonL, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_RotationButtonL, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_RotationButtonL, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_RotationButtonL, ui_event_RotationButtonL, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_RotationButtonL, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RotationButtonL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_RotationButtonLText

    ui_RotationButtonLText = lv_label_create(ui_RotationButtonL);

    lv_obj_set_width(ui_RotationButtonLText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_RotationButtonLText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_RotationButtonLText, lv_pct(0));
    lv_obj_set_y(ui_RotationButtonLText, lv_pct(0));

    lv_obj_set_align(ui_RotationButtonLText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_RotationButtonLText, T_SELECT);

    lv_obj_set_style_text_color(ui_RotationButtonLText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RotationButtonLText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_RotationButtonM

    ui_RotationButtonM = lv_btn_create(ui_Rotation);

    lv_obj_set_width(ui_RotationButtonM, 100);
    lv_obj_set_height(ui_RotationButtonM, 30);

    lv_obj_set_y(ui_RotationButtonM, 100);
    lv_obj_set_x(ui_RotationButtonM, lv_pct(0));

    lv_obj_set_align(ui_RotationButtonM, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_RotationButtonM, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_RotationButtonM, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_RotationButtonM, ui_event_RotationButtonM, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_RotationButtonM, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RotationButtonM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_RotationButtonMText

    ui_RotationButtonMText = lv_label_create(ui_RotationButtonM);

    lv_obj_set_width(ui_RotationButtonMText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_RotationButtonMText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_RotationButtonMText, lv_pct(0));
    lv_obj_set_y(ui_RotationButtonMText, lv_pct(0));

    lv_obj_set_align(ui_RotationButtonMText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_RotationButtonMText, T_START);

    lv_obj_set_style_text_color(ui_RotationButtonMText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RotationButtonMText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_RotationButtonR

    ui_RotationButtonR = lv_btn_create(ui_Rotation);

    lv_obj_set_width(ui_RotationButtonR, 100);
    lv_obj_set_height(ui_RotationButtonR, 30);

    lv_obj_set_y(ui_RotationButtonR, 100);
    lv_obj_set_x(ui_RotationButtonR, lv_pct(33));

    lv_obj_set_align(ui_RotationButtonR, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_RotationButtonR, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_RotationButtonR, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_RotationButtonR, ui_event_RotationButtonR, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_RotationButtonR, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RotationButtonR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_RotationButtonRText

    ui_RotationButtonRText = lv_label_create(ui_RotationButtonR);

    lv_obj_set_width(ui_RotationButtonRText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_RotationButtonRText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_RotationButtonRText, lv_pct(0));
    lv_obj_set_y(ui_RotationButtonRText, lv_pct(0));

    lv_obj_set_align(ui_RotationButtonRText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_RotationButtonRText, T_REVERSE);

    lv_obj_set_style_text_color(ui_RotationButtonRText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RotationButtonRText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}

static void ui_make_tweak_row(lv_obj_t * parent, lv_obj_t ** row, lv_obj_t ** slider, lv_obj_t ** value,
                              const char * text, int y, int minv, int maxv)
{
    *row = lv_label_create(parent);
    lv_obj_set_width(*row, lv_pct(95));
    lv_obj_set_height(*row, LV_SIZE_CONTENT);
    lv_obj_set_x(*row, 0);
    lv_obj_set_y(*row, y);
    lv_obj_set_align(*row, LV_ALIGN_CENTER);
    lv_label_set_text(*row, text);
    lv_obj_set_style_text_font(*row, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    *slider = lv_slider_create(*row);
    lv_slider_set_range(*slider, minv, maxv);
    lv_obj_set_width(*slider, 130);
    lv_obj_set_height(*slider, 10);
    lv_obj_set_x(*slider, -15);
    lv_obj_set_y(*slider, 0);
    lv_obj_set_align(*slider, LV_ALIGN_RIGHT_MID);
    lv_obj_set_style_bg_color(*slider, lv_color_hex(0xD691D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(*slider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(*slider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(*slider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(*slider, lv_color_hex(0x83277B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(*slider, lv_color_hex(0x83277B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(*slider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    *value = lv_label_create(*row);
    lv_obj_set_width(*value, LV_SIZE_CONTENT);
    lv_obj_set_height(*value, LV_SIZE_CONTENT);
    lv_obj_set_x(*value, 80);
    lv_obj_set_y(*value, 0);
    lv_obj_set_align(*value, LV_ALIGN_LEFT_MID);
    lv_label_set_text(*value, T_BLANK);
}

static void ui_make_tweak_button(lv_obj_t * parent, lv_obj_t ** btn, lv_obj_t ** txt, int xpct,
                                 const char * text, lv_event_cb_t cb)
{
    *btn = lv_btn_create(parent);
    lv_obj_set_width(*btn, 100);
    lv_obj_set_height(*btn, 30);
    lv_obj_set_y(*btn, 100);
    lv_obj_set_x(*btn, lv_pct(xpct));
    lv_obj_set_align(*btn, LV_ALIGN_CENTER);
    lv_obj_add_flag(*btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(*btn, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_event_cb(*btn, cb, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(*btn, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(*btn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    *txt = lv_label_create(*btn);
    lv_obj_set_width(*txt, LV_SIZE_CONTENT);
    lv_obj_set_height(*txt, LV_SIZE_CONTENT);
    lv_obj_set_x(*txt, lv_pct(0));
    lv_obj_set_y(*txt, lv_pct(0));
    lv_obj_set_align(*txt, LV_ALIGN_CENTER);
    lv_label_set_text(*txt, text);
    lv_obj_set_style_text_color(*txt, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(*txt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void ui_Tweak_screen_init(void)
{

    // ui_Tweak (rotation limits tested live from the remote: burst ceiling, dial max, one spare)

    ui_Tweak = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Tweak, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Tweak, ui_event_Tweak, LV_EVENT_ALL, NULL);

    ui_add_menu_chip(ui_Tweak);

    // ui_Logo8

    ui_Logo8 = lv_label_create(ui_Tweak);

    lv_obj_set_width(ui_Logo8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Logo8, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Logo8, -103);
    lv_obj_set_x(ui_Logo8, lv_pct(0));

    lv_obj_set_align(ui_Logo8, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Logo8, T_HEADER);

    lv_obj_set_style_text_font(ui_Logo8, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Batt8

    ui_Batt8 = lv_label_create(ui_Tweak);

    lv_obj_set_width(ui_Batt8, 85);
    lv_obj_set_height(ui_Batt8, 30);

    lv_obj_set_x(ui_Batt8, 115);
    lv_obj_set_y(ui_Batt8, -103);

    lv_obj_set_align(ui_Batt8, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Batt8, T_BATT);

    // ui_BattValue8

    ui_BattValue8 = lv_label_create(ui_Batt8);

    lv_obj_set_width(ui_BattValue8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BattValue8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BattValue8, 0);
    lv_obj_set_y(ui_BattValue8, -7);

    lv_obj_set_align(ui_BattValue8, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_BattValue8, T_BLANK);

    // ui_Battery8

    ui_Battery8 = lv_bar_create(ui_Batt8);
    lv_bar_set_range(ui_Battery8, 0, 100);

    lv_obj_set_width(ui_Battery8, 80);
    lv_obj_set_height(ui_Battery8, 10);

    lv_obj_set_x(ui_Battery8, 0);
    lv_obj_set_y(ui_Battery8, 10);

    lv_obj_set_align(ui_Battery8, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Battery8, lv_color_hex(0xD591D5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Battery8, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery8, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_TweakTitle

    ui_TweakTitle = lv_label_create(ui_Tweak);

    lv_obj_set_width(ui_TweakTitle, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_TweakTitle, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_TweakTitle, 0);
    lv_obj_set_y(ui_TweakTitle, -78);

    lv_obj_set_align(ui_TweakTitle, LV_ALIGN_CENTER);

    lv_label_set_text(ui_TweakTitle, T_TWEAK);

    lv_obj_set_style_text_font(ui_TweakTitle, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // rows: burst ceiling (E1), dial max (E2), spare (E3). Ranges match TWEAK_* in main.cpp.

    ui_make_tweak_row(ui_Tweak, &ui_TweakBurstL, &ui_tweakburstslider, &ui_tweakburstvalue, T_TWEAK_BURST, -48, 50, 300);
    ui_make_tweak_row(ui_Tweak, &ui_TweakDialL, &ui_tweakdialslider, &ui_tweakdialvalue, T_TWEAK_DIAL, -20, 20, 300);
    ui_make_tweak_row(ui_Tweak, &ui_TweakSpareL, &ui_tweakspareslider, &ui_tweakparevalue, T_TWEAK_SPARE, 8, 0, 100);

    // ui_tweakfactorlabel

    ui_tweakfactorlabel = lv_label_create(ui_Tweak);

    lv_obj_set_width(ui_tweakfactorlabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_tweakfactorlabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_tweakfactorlabel, 0);
    lv_obj_set_y(ui_tweakfactorlabel, 40);

    lv_obj_set_align(ui_tweakfactorlabel, LV_ALIGN_CENTER);

    lv_label_set_text(ui_tweakfactorlabel, T_BLANK);

    lv_obj_set_style_text_font(ui_tweakfactorlabel, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // footer buttons: L Menu, M Start/Stop rotation, R Rotation tune

    ui_make_tweak_button(ui_Tweak, &ui_TweakButtonL, &ui_TweakButtonLText, -33, T_MENUE, ui_event_TweakButtonL);
    ui_make_tweak_button(ui_Tweak, &ui_TweakButtonM, &ui_TweakButtonMText, 0, T_START, ui_event_TweakButtonM);
    ui_make_tweak_button(ui_Tweak, &ui_TweakButtonR, &ui_TweakButtonRText, 33, T_ROTATION, ui_event_TweakButtonR);

}

void ui_EJECTSettings_screen_init(void)
{

    // ui_EJECTSettings

    ui_EJECTSettings = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_EJECTSettings, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_EJECTSettings, ui_event_EJECTSettings, LV_EVENT_ALL, NULL);

    ui_add_menu_chip(ui_EJECTSettings);

    // ui_Logo6

    ui_Logo6 = lv_label_create(ui_EJECTSettings);

    lv_obj_set_width(ui_Logo6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Logo6, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Logo6, -103);
    lv_obj_set_x(ui_Logo6, lv_pct(0));

    lv_obj_set_align(ui_Logo6, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Logo6, T_HEADER);

    lv_obj_set_style_text_font(ui_Logo6, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Logo6, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Logo6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Logo6, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Logo6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_EJECTButtonL

    ui_EJECTButtonL = lv_btn_create(ui_EJECTSettings);

    lv_obj_set_width(ui_EJECTButtonL, 100);
    lv_obj_set_height(ui_EJECTButtonL, 30);

    lv_obj_set_y(ui_EJECTButtonL, 100);
    lv_obj_set_x(ui_EJECTButtonL, lv_pct(-33));

    lv_obj_set_align(ui_EJECTButtonL, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_EJECTButtonL, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_EJECTButtonL, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_EJECTButtonL, ui_event_EJECTButtonL, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_EJECTButtonL, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_EJECTButtonL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_EJECTButtonLText

    ui_EJECTButtonLText = lv_label_create(ui_EJECTButtonL);

    lv_obj_set_width(ui_EJECTButtonLText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_EJECTButtonLText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_EJECTButtonLText, lv_pct(0));
    lv_obj_set_y(ui_EJECTButtonLText, lv_pct(0));

    lv_obj_set_align(ui_EJECTButtonLText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_EJECTButtonLText, "");

    lv_obj_set_style_text_color(ui_EJECTButtonLText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_EJECTButtonLText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_EJECTButtonM

    ui_EJECTButtonM = lv_btn_create(ui_EJECTSettings);

    lv_obj_set_width(ui_EJECTButtonM, 100);
    lv_obj_set_height(ui_EJECTButtonM, 30);

    lv_obj_set_y(ui_EJECTButtonM, 100);
    lv_obj_set_x(ui_EJECTButtonM, lv_pct(0));

    lv_obj_set_align(ui_EJECTButtonM, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_EJECTButtonM, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_EJECTButtonM, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_EJECTButtonM, ui_event_EJECTButtonM, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_EJECTButtonM, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_EJECTButtonM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_EJECTButtonMText

    ui_EJECTButtonMText = lv_label_create(ui_EJECTButtonM);

    lv_obj_set_width(ui_EJECTButtonMText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_EJECTButtonMText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_EJECTButtonMText, lv_pct(0));
    lv_obj_set_y(ui_EJECTButtonMText, lv_pct(0));

    lv_obj_set_align(ui_EJECTButtonMText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_EJECTButtonMText, T_HOME);

    lv_obj_set_style_text_color(ui_EJECTButtonMText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_EJECTButtonMText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_EJECTButtonR

    ui_EJECTButtonR = lv_btn_create(ui_EJECTSettings);

    lv_obj_set_width(ui_EJECTButtonR, 100);
    lv_obj_set_height(ui_EJECTButtonR, 30);

    lv_obj_set_y(ui_EJECTButtonR, 100);
    lv_obj_set_x(ui_EJECTButtonR, lv_pct(33));

    lv_obj_set_align(ui_EJECTButtonR, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_EJECTButtonR, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_EJECTButtonR, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_EJECTButtonR, ui_event_EJECTButtonR, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_EJECTButtonR, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_EJECTButtonR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_EJECTButtonRText

    ui_EJECTButtonRText = lv_label_create(ui_EJECTButtonR);

    lv_obj_set_width(ui_EJECTButtonRText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_EJECTButtonRText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_EJECTButtonRText, lv_pct(0));
    lv_obj_set_y(ui_EJECTButtonRText, lv_pct(0));

    lv_obj_set_align(ui_EJECTButtonRText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_EJECTButtonRText, T_MENUE);

    lv_obj_set_style_text_color(ui_EJECTButtonRText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_EJECTButtonRText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Batt6

    ui_Batt6 = lv_label_create(ui_EJECTSettings);

    lv_obj_set_width(ui_Batt6, 85);
    lv_obj_set_height(ui_Batt6, 30);

    lv_obj_set_x(ui_Batt6, 115);
    lv_obj_set_y(ui_Batt6, -103);

    lv_obj_set_align(ui_Batt6, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Batt6, T_BATT);

    // ui_BattValue6

    ui_BattValue6 = lv_label_create(ui_Batt6);

    lv_obj_set_width(ui_BattValue6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BattValue6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BattValue6, 0);
    lv_obj_set_y(ui_BattValue6, -7);

    lv_obj_set_align(ui_BattValue6, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_BattValue6, T_BLANK);


    // ui_Battery6

    ui_Battery6 = lv_bar_create(ui_Batt6);
    lv_bar_set_range(ui_Battery6, 0, 100);

    lv_obj_set_width(ui_Battery6, 80);
    lv_obj_set_height(ui_Battery6, 10);

    lv_obj_set_x(ui_Battery6, 0);
    lv_obj_set_y(ui_Battery6, 10);

    lv_obj_set_align(ui_Battery6, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Battery6, lv_color_hex(0xD591D5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Battery6, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery6, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

}
void ui_Settings_screen_init(void)
{

    // ui_Settings

    ui_Settings = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Settings, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Settings, ui_event_Settings, LV_EVENT_ALL, NULL);

    ui_add_menu_chip(ui_Settings);

    // ui_Logo1

    ui_Logo1 = lv_label_create(ui_Settings);

    lv_obj_set_width(ui_Logo1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Logo1, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Logo1, -103);
    lv_obj_set_x(ui_Logo1, lv_pct(0));

    lv_obj_set_align(ui_Logo1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Logo1, T_HEADER);

    lv_obj_set_style_text_font(ui_Logo1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Logo1, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Logo1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Logo1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Logo1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SettingsButtonL

    ui_SettingsButtonL = lv_btn_create(ui_Settings);

    lv_obj_set_width(ui_SettingsButtonL, 100);
    lv_obj_set_height(ui_SettingsButtonL, 30);

    lv_obj_set_x(ui_SettingsButtonL, -102);
    lv_obj_set_y(ui_SettingsButtonL, 100);

    lv_obj_set_align(ui_SettingsButtonL, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_SettingsButtonL, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_SettingsButtonL, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_SettingsButtonL, ui_event_SettingsButtonL, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_SettingsButtonL, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SettingsButtonL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SettingsButtonLText

    ui_SettingsButtonLText = lv_label_create(ui_SettingsButtonL);

    lv_obj_set_width(ui_SettingsButtonLText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_SettingsButtonLText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_SettingsButtonLText, lv_pct(0));
    lv_obj_set_y(ui_SettingsButtonLText, lv_pct(0));

    lv_obj_set_align(ui_SettingsButtonLText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_SettingsButtonLText, T_SAVE);

    lv_obj_set_style_text_color(ui_SettingsButtonLText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SettingsButtonLText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SettingsButtonM

    ui_SettingsButtonM = lv_btn_create(ui_Settings);

    lv_obj_set_width(ui_SettingsButtonM, 100);
    lv_obj_set_height(ui_SettingsButtonM, 30);

    lv_obj_set_y(ui_SettingsButtonM, 100);
    lv_obj_set_x(ui_SettingsButtonM, lv_pct(0));

    lv_obj_set_align(ui_SettingsButtonM, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_SettingsButtonM, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_SettingsButtonM, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_SettingsButtonM, ui_event_SettingsButtonM, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_SettingsButtonM, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SettingsButtonM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SettingsButtonMText

    ui_SettingsButtonMText = lv_label_create(ui_SettingsButtonM);

    lv_obj_set_width(ui_SettingsButtonMText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_SettingsButtonMText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_SettingsButtonMText, lv_pct(0));
    lv_obj_set_y(ui_SettingsButtonMText, lv_pct(0));

    lv_obj_set_align(ui_SettingsButtonMText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_SettingsButtonMText, T_HOME);

    lv_obj_set_style_text_color(ui_SettingsButtonMText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SettingsButtonMText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SettingsButtonR

    ui_SettingsButtonR = lv_btn_create(ui_Settings);

    lv_obj_set_width(ui_SettingsButtonR, 100);
    lv_obj_set_height(ui_SettingsButtonR, 30);

    lv_obj_set_y(ui_SettingsButtonR, 100);
    lv_obj_set_x(ui_SettingsButtonR, lv_pct(33));

    lv_obj_set_align(ui_SettingsButtonR, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_SettingsButtonR, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_SettingsButtonR, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_SettingsButtonR, ui_event_SettingsButtonR, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_SettingsButtonR, lv_color_hex(0x83277B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SettingsButtonR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SettingsButtonRText

    ui_SettingsButtonRText = lv_label_create(ui_SettingsButtonR);

    lv_obj_set_width(ui_SettingsButtonRText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_SettingsButtonRText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_SettingsButtonRText, lv_pct(0));
    lv_obj_set_y(ui_SettingsButtonRText, lv_pct(0));

    lv_obj_set_align(ui_SettingsButtonRText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_SettingsButtonRText, T_MENUE);

    lv_obj_set_style_text_color(ui_SettingsButtonRText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SettingsButtonRText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Batt1

    ui_Batt1 = lv_label_create(ui_Settings);

    lv_obj_set_width(ui_Batt1, 85);
    lv_obj_set_height(ui_Batt1, 30);

    lv_obj_set_x(ui_Batt1, 115);
    lv_obj_set_y(ui_Batt1, -103);

    lv_obj_set_align(ui_Batt1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Batt1, T_BATT);

    // ui_BattValue1

    ui_BattValue1 = lv_label_create(ui_Batt1);

    lv_obj_set_width(ui_BattValue1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BattValue1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BattValue1, 0);
    lv_obj_set_y(ui_BattValue1, -7);

    lv_obj_set_align(ui_BattValue1, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_BattValue1, T_BLANK);

    // ui_Battery1

    ui_Battery1 = lv_bar_create(ui_Batt1);
    lv_bar_set_range(ui_Battery1, 0, 100);

    lv_obj_set_width(ui_Battery1, 80);
    lv_obj_set_height(ui_Battery1, 10);

    lv_obj_set_x(ui_Battery1, 0);
    lv_obj_set_y(ui_Battery1, 10);

    lv_obj_set_align(ui_Battery1, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Battery1, lv_color_hex(0xD591D5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Battery1, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_ejectaddon

    ui_ejectaddon = lv_checkbox_create(ui_Settings);
    lv_checkbox_set_text(ui_ejectaddon, T_EJECT);

    lv_obj_set_width(ui_ejectaddon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_ejectaddon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_ejectaddon, 10);
    lv_obj_set_y(ui_ejectaddon, -60);

    lv_obj_set_align(ui_ejectaddon, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_ejectaddon, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_add_event_cb(ui_ejectaddon, ui_event_ejectaddon, LV_EVENT_ALL, NULL);

    lv_obj_set_style_text_font(ui_ejectaddon, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_border_color(ui_ejectaddon, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ejectaddon, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_darkmode

    ui_darkmode = lv_checkbox_create(ui_Settings);
    lv_checkbox_set_text(ui_darkmode, T_DARKM);

    lv_obj_set_width(ui_darkmode, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_darkmode, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_darkmode, 10);
    lv_obj_set_y(ui_darkmode, 60);

    lv_obj_set_align(ui_darkmode, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_darkmode, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_font(ui_darkmode, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_darkmode, lv_color_hex(0x5b0353), LV_PART_MAIN | LV_STATE_FOCUSED);

    //lv_obj_set_style_border_color(ui_darkmode, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    //lv_obj_set_style_border_opa(ui_darkmode, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_vibrate

    ui_vibrate = lv_checkbox_create(ui_Settings);
    lv_checkbox_set_text(ui_vibrate, T_VIBRATE);

    lv_obj_set_width(ui_vibrate, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_vibrate, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_vibrate, 155);
    lv_obj_set_y(ui_vibrate, -60);

    lv_obj_set_align(ui_vibrate, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_vibrate, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_font(ui_vibrate, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_border_color(ui_vibrate, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_vibrate, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_lefty

    ui_lefty = lv_checkbox_create(ui_Settings);
    lv_checkbox_set_text(ui_lefty, T_TOUCHSETTING);

    lv_obj_set_width(ui_lefty, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_lefty, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_lefty, 11);
    lv_obj_set_y(ui_lefty, -18);

    lv_obj_set_align(ui_lefty, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_lefty, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_font(ui_lefty, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_border_color(ui_lefty, lv_color_hex(0x83247B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_lefty, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_color_hex(0x83247B), lv_color_hex(0xD591D5), dark_mode, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Start_screen_init();
    ui_Home_screen_init();
    ui_Menue_screen_init();
    ui_Pattern_screen_init();
    ui_Torqe_screen_init();
    ui_Rotation_screen_init();
    ui_Tweak_screen_init();
    ui_EJECTSettings_screen_init();
    ui_Settings_screen_init();
    lv_disp_load_scr(ui_Start);
}