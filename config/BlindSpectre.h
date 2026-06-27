#ifdef CONFIG_TOP
#include "proffieboard_v3_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
#define VOLUME 1800
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define BC_TWIST_OFF
#define IDLE_OFF_TIME 30000 
#endif

#ifdef CONFIG_PROP
#include "../props/saber_KBC_buttons.h"
#endif

#include "shadowfoil_presets.h"

#ifdef CONFIG_PRESETS
Preset presets[] = {		
	{ "Blind_Cowboy", "tracks/Blind_Cowboy.wav",
		//Main Blade
		MainBlade_Sequels(Blue),

		//Blinkies	
		PrimaryBlinky(Red),
		
		SecondaryBlinky(Green),
	}
};
BladeConfig blades[] = {
 { 0, 
 	WS281XBladePtr<144, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    SimpleBladePtr<CH1LED, NoLED, NoLED, NoLED, bladePowerPin7, -1, -1, -1>(),
	SimpleBladePtr<CH2LED, NoLED, NoLED, NoLED, bladePowerPin8, -1, -1, -1>(),
    CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, auxPin, "pow");
Button AuxButton(BUTTON_AUX, powerButtonPin, "aux");
#endif
