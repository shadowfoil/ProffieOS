#ifdef CONFIG_TOP
#include "proffieboard_v3_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 2
#define VOLUME 1300
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define IDLE_OFF_TIME 30000
#define BC_TWIST_OFF
#define FEMALE_TALKIE_VOICE
//#define SHARED_POWER_PINS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_KBC_buttons.h"
#endif

#include "shadowfoil_presets.h"

#ifdef CONFIG_PRESETS
Preset presets[] = {
    {
        "ANI3;common",
        "tracks/ANI3.wav",
        MainBlade_Sequels(Blue),
        Chamber_Sequels(Blue)
    },
    {
        "Loth Hero;common",
        "tracks/Loth Hero.wav",
        MainBlade_Sequels(Green),
        Chamber_Sequels(Green)
    },
    {
        "Blind Cowboy;common",
        "tracks/Blind Cowboy.wav",
        MainBlade_Sequels(Blue),
        Chamber_Sequels(Blue)
    },
    {
        "The Return;common",
        "tracks/The Return.wav",
        MainBlade_Sequels(Green),
        Chamber_Sequels(Green)
    },
    {
        "Dark;common",
        "tracks/Dark.wav",
        MainBlade_Sequels(Silver),
        Chamber_Sequels(Silver)
    },
    {
        "ESB_Graflex_V2;common",
        "tracks/ESB_Graflex_V2.wav",
        MainBlade_Sequels(DodgerBlue),
        Chamber_Sequels(DodgerBlue)
    },
    {
        "Father;common",
        "tracks/Father.wav",
        MainBlade_Sequels(Red),
        Chamber_Sequels(Red)
    },
    {
        "Emperor;common",
        "tracks/Emperor.wav",
        MainBlade_Sequels(Red),
        Chamber_Sequels(Red)
    },
    {
        "OB3;common",
        "tracks/OB3.wav",
        MainBlade_Sequels(Blue),
        Chamber_Sequels(Blue)
    },
    {
        "OBI4;common",
        "tracks/OB4.wav",
        MainBlade_Sequels(DeepSkyBlue),
        Chamber_Sequels(DeepSkyBlue)
    }
};

BladeConfig blades[] = {
    {0,
     WS281XBladePtr<144, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
     WS281XBladePtr<1, blade3Pin, Color8::GRB, PowerPINS<bladePowerPin6>>(), CONFIGARRAY(presets)},
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif