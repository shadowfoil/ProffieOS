#ifdef CONFIG_TOP

// Board Type, make sure only one of the following is uncommented
// Uncomment the next line for Proffie v2.2
#include "proffieboard_v2_config.h"

// Uncomment the next line for Proffie v3.9
// #include "proffieboard_v3_config.h"

// Update the number of blades
#define NUM_BLADES 5

// Update your number of buttons
#define NUM_BUTTONS 2

// Good volume starting point for 28mm 8ohm Speakers
#define VOLUME 1300

const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define IDLE_OFF_TIME 30000

// Twist to retract 
#define BC_TWIST_OFF

#define FEMALE_TALKIE_VOICE

// Uncomment the next line to enable shared power (multiple data lines on the same power pins)
//#define SHARED_POWER_PINS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_KBC_buttons.h"
#endif

// Included so we can use simple blade styles in our configs
// please make sure this file is also included on the SD Card for the customer
#include "shadowfoil_presets.h"

#ifdef CONFIG_PRESETS
// !IMPORTANT! Preset count must match blade count
Preset presets[] = {
    {
        // Font Folder Path (keep ';common' after the path as this tells Proffie where to look for common files)
        "Font1Folder;common",
        // Track Folder Path (typically tracks folder on root of SD Card)
        "tracks/font1_track.wav", 
        
        // Main Blade
        MainBlade_Sequels(Green),

        // Lower CC
        Chamber_Sequels(Green),

        // Upper CC
        Chamber_Sequels(Green),

        // Secondary Blade
        SecondaryBlade_Sequels(Green),

        // Accent 2
        AccentStrip_Sequels(Green)
    },
    {
        // Font Folder Path (keep ';common' after the path as this tells Proffie where to look for common files)
        "Font2Folder;common",
        // Track Folder Path (typically tracks folder on root of SD Card)
        "tracks/font2_track.wav",
        
        // Main Blade
        MainBlade_Sequels(Red),

        // Lower CC
        Chamber_Sequels(Red),

        // Upper CC
        Chamber_Sequels(Red),

        // Secondary Blade / Accent 1
        SecondaryBlade_Sequels(Red),

        // Accent 2
        AccentStrip_Sequels(Red)
    }
};

BladeConfig blades[] = {
    {
        0,

        // MainBlade
        // Data 1
        // LED 2/3
        WS281XBladePtr<144, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>(),

        // Lower Chamber (1 pixel)
        // SubBlades allow for independent control of sections of a blade
        // Can be used to wire multiple accents in series and control them independently on a single data/power line
        // SubBlade 1 (First Pixel in chain of 8 pixels)
        // Data 3
        // LED 1
        SubBlade(0, 0, WS281XBladePtr<8, blade3Pin, Color8::GRB, PowerPINS<bladePowerPin1>>()),

        // Upper Chamber (7 pixels)
        // SubBlade 2 (Second through Eight Pixels in chain of 8 pixels)
        // Data 3
        // LED 1
        SubBlade(1, 7, NULL),

        // Secondary Blade / Accent 1
        // Data 2
        // LED 4/5
        WS281XBladePtr<25, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4, bladePowerPin5>>(),

        // Accent 2
        // Data 2
        // LED 4/5
        WS281XBladePtr<5, blade4Pin, Color8::GRB, PowerPINS<bladePowerPin6>>(),

        CONFIGARRAY(presets)
    },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif