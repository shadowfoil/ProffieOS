#ifdef CONFIG_TOP
#include "proffieboard_v3_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define IDLE_OFF_TIME 30000
#define SF24_TWIST_OFF
#define ENABLE_SSD1306
#define AUREBESH
#define FEMALE_TALKIE_VOICE
//#define SHARED_POWER_PINS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_SF24_buttons.h"
#endif

#include "shadowfoil_presets.h"

#ifdef CONFIG_PRESETS
Preset presets[] = {

    {
        "ANI3;common",
        "tracks/ANI3.wav",
        MainBlade_Sequels(Blue),
        Chamber_Sequels(Blue),
        CycleForward(Blue),
        "anakin"
    },

    {
        "Loth Hero;common",
        "tracks/Loth Hero.wav",
        MainBlade_Sequels(Green),
        Chamber_Sequels(Green),
        CycleForward(Green),
        "ezra\nbridger"
    },

    {
        "Blind Cowboy;common",
        "tracks/Blind Cowboy.wav",
        MainBlade_Sequels(Blue),
        Chamber_Sequels(Blue),
        CycleForward(Blue),
        "kanan\njarrus"
    },

    {
        "The_Return_v2;common",
        "tracks/The_Return_v2.wav",
        MainBlade_Sequels(Green),
        Chamber_Sequels(Green),
        CycleForward(Green),
        "luke\nrotj"
    },

    {
        "BMF;common",
        "tracks/BMF.wav",
        MainBlade_Sequels(Violet),
        Chamber_Sequels(Violet),
        CycleForward(Violet),
        "mace\nwindu"
    },

    {
        "ESB_Graflex_V2;common",
        "tracks/ESB_Graflex_V2.wav",
        MainBlade_Sequels(DodgerBlue),
        Chamber_Sequels(DodgerBlue),
        CycleForward(DodgerBlue),
        "luke\nesb"
    },

    {
        "Father_6;common",
        "tracks/Father_6.wav",
        MainBlade_Sequels(Red),
        Chamber_Sequels(Red),
        CycleForward(Red),
        "darth\nvader"
    },

    {
        "Emperor;common",
        "tracks/Emperor.wav",
        MainBlade_Sequels(Red),
        Chamber_Sequels(Red),
        CycleForward(Red),
        "darth\nsidious"
    },

    {
        "OB3;common",
        "tracks/OB3.wav",
        MainBlade_Sequels(Blue),
        Chamber_Sequels(Blue),
        CycleForward(Blue),
        "obiwan\nrots"
    },

    {
        "OB4;common",
        "tracks/OB4.wav",
        MainBlade_Sequels(DeepSkyBlue),
        Chamber_Sequels(DeepSkyBlue),
        CycleForward(DeepSkyBlue),
        "obiwan\nanh"
    },

    {
        "Sun_Skoll;common",
        "tracks/Sun_Skoll.wav",
        MainBlade_Sequels(DarkOrange),
        Chamber_Sequels(DarkOrange),
        CycleForward(DarkOrange),
        "baylan\nskoll"
    },

    {
        "Moon_Hati;common",
        "tracks/Moon_Hati.wav",
        MainBlade_Sequels(DarkOrange),
        Chamber_Sequels(DarkOrange),
        CycleForward(DarkOrange),
        "shin\nhati"
    },

    {
        "werewolf;common",
        "tracks/werewolf.wav",
        MainBlade_Sequels(Red),
        Chamber_Sequels(Red),
        CycleForward(Red),
        "marrok"
    },

    {
        "The_Sorcerer;common",
        "tracks/The_Sorcerer.wav",
        MainBlade_Sequels(Silver),
        Chamber_Sequels(Silver),
        CycleForward(Silver),
        "ahsoka\ntano"
    },

    {
        "Spectre_5;common",
        "tracks/Spectre_5.wav",
        MainBlade_Sequels(Green),
        Chamber_Sequels(Green),
        CycleForward(Green),
        "sabine\nwren"
    },

    {
        "Nomad;common",
        "tracks/Nomad.wav",
        MainBlade_Sequels(DeepSkyBlue),
        Chamber_Sequels(DeepSkyBlue),
        CycleForward(DeepSkyBlue),
        "ezra\bridger"
    },

    {
        "DarkMando;common",
        "tracks/DarkMando.wav",
        MainBlade_MandoDarksaber,
        Chamber_MandoDarksaber,
        CycleForward(Silver),
        "mando\ndarksaber"
    }
};
BladeConfig blades[] = {
    {0,
     WS281XBladePtr<144, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),
     WS281XBladePtr<7, blade3Pin, Color8::GRB, PowerPINS<bladePowerPin1>>(), 
     WS281XBladePtr<15, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin1>>(),
     CONFIGARRAY(presets)},
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif