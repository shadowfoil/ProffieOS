// shadowfoil_presets.h
#ifndef SHADOWFOIL_PRESETS_H
#define SHADOWFOIL_PRESETS_H

#pragma region "Define extra colors"

#define Glacier Rgb<85,85,200>
#define Silver Rgb<100,100,150>
#define Indigo Rgb<80,50,210>
#define IceBlue Rgb<30,60,200>
#define Gold Rgb<180,130,0>

#pragma endregion

#pragma region "Hyper Responsive Rotoscope (Prequels)"

/* 
    copyright Fett263 Rotoscope (Primary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
    OS6.7 v4.021
    Single Style
    Base Style: Hyper Responsive Rotoscope (Prequels)

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
    Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
    LightningBlock Effect: Responsive Lightning Block
    Drag Effect: Intensity Sparking Drag
    Melt Effect: Intensity Melt
    Blast Effect: Blast Wave (Random)
    Clash Effect: Real Clash V1
*/
#define MainBlade_Prequels(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 Rotoscope (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
    OS6.7 v4.021
    Single Style
    Base Style: Hyper Responsive Rotoscope (Prequels)

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/
#define SecondaryBlade_Prequels(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()


/* 
    copyright Fett263 Rotoscope (Crystal Chamber) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
    OS6.7 v4.021
    Single Style
    Base Style: Hyper Responsive Rotoscope (Prequels)

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
    Lockup Effect: Intensity Lockup Up V1
    LightningBlock Effect: Full Blade Lightning
    Blast Effect: Blast Wave Up (Sound Based)
    Clash Effect: Real Clash V1 Up
*/
#define Chamber_Prequels(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrSelect<Scale<IsLessThan<ClashImpactF<>,Int<20000>>,Int<1>,Int<0>>,TrWaveX<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<50>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<500>,Int<300>>,Int<0>>,TrSparkX<Stripes<1200,-3600,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Int<30>,Scale<Sum<ClashImpactF<>,SwingSpeed<600>>,Int<100>,Int<400>>,Int<0>>>>,EFFECT_LOCKUP_END>,LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrInstant,Black>>>()

/* 
    copyright Fett263 Rotoscope (Accent LED / PCB) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
    OS6.7 v4.021
    Single Style
    Base Style: Hyper Responsive Rotoscope (Prequels)

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
*/
#define AccentStrip_Prequels(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,InOutTrL<TrInstant,TrInstant,Black>>>()

#pragma endregion

#pragma region "Hyper Responsive Rotoscope (Original Trilogy)"

//  These styles require ProffieOS v6.5 or later

/* 
    copyright Fett263 Rotoscope (Primary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
    OS6.7 v4.021
    Single Style
    Base Style: Hyper Responsive Rotoscope (Original Trilogy)

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
    Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
    LightningBlock Effect: Responsive Lightning Block
    Drag Effect: Intensity Sparking Drag
    Melt Effect: Intensity Melt
    Blast Effect: Blast Wave (Random)
    Clash Effect: Real Clash V1
*/
#define MainBlade_OT(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 Rotoscope (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
    OS6.7 v4.021
    Single Style
    Base Style: Hyper Responsive Rotoscope (Original Trilogy)

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/
#define SecondaryBlade_OT(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 Rotoscope (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
    OS6.7 v4.021
    Single Style
    Base Style: Hyper Responsive Rotoscope (Original Trilogy)

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/
#define Chamber_OT(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 Rotoscope (Accent LED / PCB) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
    OS6.7 v4.021
    Single Style
    Base Style: Hyper Responsive Rotoscope (Original Trilogy)

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
*/
#define AccentStrip_OT(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,InOutTrL<TrInstant,TrInstant,Black>>>()

#pragma endregion

#pragma region "Hyper Responsive Rotoscope (Sequels)"

//  These styles require ProffieOS v6.5 or later

//  Main Blade
//  ==========
/* 
    copyright Fett263 Rotoscope (Primary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
    OS6.7 v4.021
    Single Style
    Base Style: Hyper Responsive Rotoscope (Sequels)

    Base Color: (varies by preset)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
    Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
    LightningBlock Effect: Responsive Lightning Block
    Drag Effect: Intensity Sparking Drag
    Melt Effect: Intensity Melt
    Blast Effect: Blast Wave (Random)
    Clash Effect: Real Clash V1
*/

#define MainBlade_Sequels(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<14000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-4000>,Int<-400>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

//  Crystal Chamber
//  ===============
/*
    copyright Fett263 Rotoscope (Crystal Chamber) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
    OS6.7 v4.021
    Single Style
    Base Style: Hyper Responsive Rotoscope (Sequels)

    Off Behavior: Slow Pulse Dim-On

    Base Color: (varies by preset)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
    Lockup Effect: Intensity Lockup Up V1
    LightningBlock Effect: Full Blade Lightning
    Blast Effect: Blast Wave Up (Sound Based)
    Clash Effect: Real Clash V1 Up
*/

#define Chamber_Sequels(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<14000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-4000>,Int<-400>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrSelect<Scale<IsLessThan<ClashImpactF<>,Int<20000>>,Int<1>,Int<0>>,TrWaveX<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<50>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<500>,Int<300>>,Int<0>>,TrSparkX<Stripes<1200,-3600,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Int<30>,Scale<Sum<ClashImpactF<>,SwingSpeed<600>>,Int<100>,Int<400>>,Int<0>>>>,EFFECT_LOCKUP_END>,LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,8000>>>>()

//  Secondary Blade / Quillon
//  =========================
/* 
    copyright Fett263 Rotoscope (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
    OS6.7 v4.021
    Single Style
    Base Style: Hyper Responsive Rotoscope (Sequels)

    Base Color: Rgb<255,0,0> (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/

#define SecondaryBlade_Sequels(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<14000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-4000>,Int<-400>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

//  Accent Strip / PCB
//  ==================
/* 
copyright Fett263 Rotoscope (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
OS6.7 v4.021
Single Style
Base Style: Hyper Responsive Rotoscope (Sequels)

Off Behavior: Off

Base Color: Rgb<255,0,0> (0)

--Effects Included--
Ignition Effect: Instant
Retraction Effect: Instant
*/

#define AccentStrip_Sequels(COLOR) StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<14000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-4000>,Int<-400>>,RgbArg<BASE_COLOR_ARG,COLOR>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,InOutTrL<TrInstant,TrInstant,Black>>>()

#pragma endregion

#pragma region "Unstable Blade"

/* 
    copyright Fett263 UnstableBlades (Primary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#UnstableBlades
    OS6.7 v4.021
    Single Style
    Base Style: Unstable Pulse

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
    Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
    LightningBlock Effect: Responsive Lightning Block
    Drag Effect: Intensity Sparking Drag
    Melt Effect: Intensity Melt
    Blast Effect: Blast Wave (Random)
    Clash Effect: Real Clash V1
*/
#define MainBlade_Unstable(COLOR) StylePtr<Layers<StripesX<Int<6000>,Scale<SlowNoise<Int<2000>>,Int<-1600>,Int<-3200>>,RgbArg<BASE_COLOR_ARG,COLOR>,RandomPerLEDFlicker<Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,BrownNoiseFlicker<Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,300>,RgbArg<BASE_COLOR_ARG,COLOR>,RandomPerLEDFlicker<Black,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 UnstableBlades (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#UnstableBlades
    OS6.7 v4.021
    Single Style
    Base Style: Unstable Pulse

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/
#define SecondaryBlade_Unstable(COLOR) StylePtr<Layers<StripesX<Int<6000>,Scale<SlowNoise<Int<2000>>,Int<-1600>,Int<-3200>>,RgbArg<BASE_COLOR_ARG,COLOR>,RandomPerLEDFlicker<Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,BrownNoiseFlicker<Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,300>,RgbArg<BASE_COLOR_ARG,COLOR>,RandomPerLEDFlicker<Black,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 UnstableBlades (Crystal Chamber) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#UnstableBlades
    OS6.7 v4.021
    Single Style
    Base Style: Unstable Pulse

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
    Lockup Effect: Intensity Lockup Up V1
    LightningBlock Effect: Full Blade Lightning
    Blast Effect: Blast Wave Up (Sound Based)
    Clash Effect: Real Clash V1 Up
*/
#define Chamber_Unstable(COLOR) StylePtr<Layers<StripesX<Int<6000>,Scale<SlowNoise<Int<2000>>,Int<-1600>,Int<-3200>>,RgbArg<BASE_COLOR_ARG,COLOR>,RandomPerLEDFlicker<Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,BrownNoiseFlicker<Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,300>,RgbArg<BASE_COLOR_ARG,COLOR>,RandomPerLEDFlicker<Black,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrSelect<Scale<IsLessThan<ClashImpactF<>,Int<20000>>,Int<1>,Int<0>>,TrWaveX<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<50>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<500>,Int<300>>,Int<0>>,TrSparkX<Stripes<1200,-3600,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Int<30>,Scale<Sum<ClashImpactF<>,SwingSpeed<600>>,Int<100>,Int<400>>,Int<0>>>>,EFFECT_LOCKUP_END>,LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrInstant,Black>>>()

/* 
    copyright Fett263 UnstableBlades (Accent LED / PCB) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#UnstableBlades
    OS6.7 v4.021
    Single Style
    Base Style: Unstable Pulse

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
*/
#define AccentStrip_Unstable(COLOR) StylePtr<Layers<StripesX<Int<6000>,Scale<SlowNoise<Int<2000>>,Int<-1600>,Int<-3200>>,RgbArg<BASE_COLOR_ARG,COLOR>,RandomPerLEDFlicker<Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,BrownNoiseFlicker<Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,300>,RgbArg<BASE_COLOR_ARG,COLOR>,RandomPerLEDFlicker<Black,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,InOutTrL<TrInstant,TrInstant,Black>>>()

#pragma endregion

#pragma region "Responsive Flame Blade"

/* 
    copyright Fett263 ResponsiveFlame (Primary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#ResponsiveFlame
    OS6.7 v4.021
    Single Style
    Base Style: Responsive Flame (Real Flame Gradient)

    Base Color: Rgb<255,0,0> (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
    Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
    LightningBlock Effect: Responsive Lightning Block
    Drag Effect: Intensity Sparking Drag
    Melt Effect: Intensity Melt
    Blast Effect: Blast Wave (Random)
    Clash Effect: Real Clash V1
*/
#define MainBlade_Flame(COLOR) StylePtr<Mix<SmoothStep<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<36000>,Scale<BladeAngle<>,Int<10924>,Int<54000>>>,Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<-1>,Scale<BladeAngle<>,Int<-10000>,Int<-1>>>>,Black,Remap<Scale<RampF,Int<0>,Scale<IsLessThan<BladeAngle<>,Int<15000>>,Int<32768>,Scale<BladeAngle<0,15000>,Int<60000>,Int<32768>>>>,Layers<Mix<BladeAngle<>,StaticFire<Gradient<RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RotateColorsX<Int<1000>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RotateColorsX<Int<400>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,0,2,0,1800,10>,StaticFire<Gradient<RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RotateColorsX<Int<1200>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RotateColorsX<Int<600>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,0,4,0,2200,2>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>>>()

/* 
    copyright Fett263 ResponsiveFlame (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#ResponsiveFlame
    OS6.7 v4.021
    Single Style
    Base Style: Responsive Flame (Real Flame Gradient)

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/
#define SecondaryBlade_Flame(COLOR) StylePtr<Mix<SmoothStep<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<36000>,Scale<BladeAngle<>,Int<10924>,Int<54000>>>,Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<-1>,Scale<BladeAngle<>,Int<-10000>,Int<-1>>>>,Black,Remap<Scale<RampF,Int<0>,Scale<IsLessThan<BladeAngle<>,Int<15000>>,Int<32768>,Scale<BladeAngle<0,15000>,Int<60000>,Int<32768>>>>,Layers<Mix<BladeAngle<>,StaticFire<Gradient<RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1000>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<400>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,0,2,0,1800,10>,StaticFire<Gradient<RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1200>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<600>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,0,4,0,2200,2>>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>>>()

/* 
    copyright Fett263 ResponsiveFlame (Crystal Chamber) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#ResponsiveFlame
    OS6.7 v4.021
    Single Style
    Base Style: Responsive Flame (Real Flame Gradient)

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
    Lockup Effect: Intensity Lockup Up V1
    LightningBlock Effect: Full Blade Lightning
    Blast Effect: Blast Wave Up (Sound Based)
    Clash Effect: Real Clash V1 Up
*/
#define Chamber_Flame(COLOR) StylePtr<Layers<Mix<BladeAngle<>,StaticFire<Gradient<RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1000>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<400>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,0,2,0,1800,10>,StaticFire<Gradient<RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1200>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<600>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,0,4,0,2200,2>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrSelect<Scale<IsLessThan<ClashImpactF<>,Int<20000>>,Int<1>,Int<0>>,TrWaveX<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<50>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<500>,Int<300>>,Int<0>>,TrSparkX<Stripes<1200,-3600,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Int<30>,Scale<Sum<ClashImpactF<>,SwingSpeed<600>>,Int<100>,Int<400>>,Int<0>>>>,EFFECT_LOCKUP_END>,LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrInstant,Black>>>()

/* 
    copyright Fett263 ResponsiveFlame (Accent LED / PCB) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#ResponsiveFlame
    OS6.7 v4.021
    Single Style
    Base Style: Responsive Flame (Real Flame Gradient)

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
*/
#define AccentStrip_Flame(COLOR) StylePtr<Layers<Mix<BladeAngle<>,StaticFire<Gradient<RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1000>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<400>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,0,2,0,1800,10>,StaticFire<Gradient<RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1200>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<600>,RgbArg<BASE_COLOR_ARG,COLOR>>,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,0,4,0,2200,2>>,InOutTrL<TrInstant,TrInstant,Black>>>()

#pragma endregion

#pragma region "Smoke Blade"

/* 
    copyright Fett263 SmokeBlade (Primary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#SmokeBlade
    OS6.7 v4.021
    Single Style
    Base Style: Smoke Blade

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
    Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
    LightningBlock Effect: Responsive Lightning Block
    Drag Effect: Intensity Sparking Drag
    Melt Effect: Intensity Melt
    Blast Effect: Blast Wave (Random)
    Clash Effect: Real Clash V1
*/
#define MainBlade_Smoke(COLOR) StylePtr<Layers<Layers<StripesX<Sin<Int<12>,Int<3000>,Int<7000>>,Scale<SwingSpeed<100>,Int<75>,Int<125>>,StripesX<Sin<Int<10>,Int<1000>,Int<3000>>,Scale<SwingSpeed<100>,Int<75>,Int<100>>,Pulsing<RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<2570>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,1200>,Mix<SwingSpeed<200>,Mix<Int<16000>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Black>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Pulsing<Mix<Int<6425>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,StripesX<Sin<Int<10>,Int<2000>,Int<3000>>,Sin<Int<10>,Int<75>,Int<100>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<12000>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,2000>,Pulsing<Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<642>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,3000>>,AlphaL<StaticFire<RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<256>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,0,1,10,2000,2>,Int<10000>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

    /* copyright Fett263 SmokeBlade (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#SmokeBlade
    OS6.7 v4.021
    Single Style
    Base Style: Smoke Blade

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/
#define SecondaryBlade_Smoke(COLOR) StylePtr<Layers<Layers<StripesX<Sin<Int<12>,Int<3000>,Int<7000>>,Scale<SwingSpeed<100>,Int<75>,Int<125>>,StripesX<Sin<Int<10>,Int<1000>,Int<3000>>,Scale<SwingSpeed<100>,Int<75>,Int<100>>,Pulsing<RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<2570>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,1200>,Mix<SwingSpeed<200>,Mix<Int<16000>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Black>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Pulsing<Mix<Int<6425>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,StripesX<Sin<Int<10>,Int<2000>,Int<3000>>,Sin<Int<10>,Int<75>,Int<100>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<12000>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,2000>,Pulsing<Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<642>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,3000>>,AlphaL<StaticFire<RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<256>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,0,1,10,2000,2>,Int<10000>>>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 SmokeBlade (Crystal Chamber) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#SmokeBlade
    OS6.7 v4.021
    Single Style
    Base Style: Smoke Blade

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
    Lockup Effect: Intensity Lockup Up V1
    LightningBlock Effect: Full Blade Lightning
    Blast Effect: Blast Wave Up (Sound Based)
    Clash Effect: Real Clash V1 Up
*/
#define Chamber_Smoke(COLOR) StylePtr<Layers<Layers<StripesX<Sin<Int<12>,Int<3000>,Int<7000>>,Scale<SwingSpeed<100>,Int<75>,Int<125>>,StripesX<Sin<Int<10>,Int<1000>,Int<3000>>,Scale<SwingSpeed<100>,Int<75>,Int<100>>,Pulsing<RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<2570>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,1200>,Mix<SwingSpeed<200>,Mix<Int<16000>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Black>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Pulsing<Mix<Int<6425>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,StripesX<Sin<Int<10>,Int<2000>,Int<3000>>,Sin<Int<10>,Int<75>,Int<100>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<12000>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,2000>,Pulsing<Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<642>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,3000>>,AlphaL<StaticFire<RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<256>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,0,1,10,2000,2>,Int<10000>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrSelect<Scale<IsLessThan<ClashImpactF<>,Int<20000>>,Int<1>,Int<0>>,TrWaveX<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<50>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<500>,Int<300>>,Int<0>>,TrSparkX<Stripes<1200,-3600,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Int<30>,Scale<Sum<ClashImpactF<>,SwingSpeed<600>>,Int<100>,Int<400>>,Int<0>>>>,EFFECT_LOCKUP_END>,LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrInstant,Black>>>()

/* 
    copyright Fett263 SmokeBlade (Accent LED / PCB) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#SmokeBlade
    OS6.7 v4.021
    Single Style
    Base Style: Smoke Blade

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
*/
#define AccentStrip_Smoke(COLOR) StylePtr<Layers<Layers<StripesX<Sin<Int<12>,Int<3000>,Int<7000>>,Scale<SwingSpeed<100>,Int<75>,Int<125>>,StripesX<Sin<Int<10>,Int<1000>,Int<3000>>,Scale<SwingSpeed<100>,Int<75>,Int<100>>,Pulsing<RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<2570>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,1200>,Mix<SwingSpeed<200>,Mix<Int<16000>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Black>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Pulsing<Mix<Int<6425>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,StripesX<Sin<Int<10>,Int<2000>,Int<3000>>,Sin<Int<10>,Int<75>,Int<100>>,RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<12000>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>>,2000>,Pulsing<Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,Mix<Int<642>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,3000>>,AlphaL<StaticFire<RgbArg<BASE_COLOR_ARG,COLOR>,Mix<Int<256>,Black,RgbArg<BASE_COLOR_ARG,COLOR>>,0,1,10,2000,2>,Int<10000>>>,InOutTrL<TrInstant,TrInstant,Black>>>()


#pragma endregion

#pragma region "Clone Wars Darksaber"

/* 
    copyright Fett263 DarkSaber (Primary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
    OS6.7 v4.021
    Single Style
    Base Style: Clone Wars Darksaber

    Base Color: Rgb<100,100,150> (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
    Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
    LightningBlock Effect: Responsive Lightning Block
    Drag Effect: Intensity Sparking Drag
    Melt Effect: Intensity Melt
    Blast Effect: Blast Wave (Random)
    Clash Effect: Real Clash V1
*/
#define MainBlade_TCWDarksaber StylePtr<Layers<AudioFlicker<BrownNoiseFlicker<Mix<SwingSpeed<400>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,Mix<Int<6425>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,White>>,Stripes<5000,-300,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<25700>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>>,300>,Mix<Int<6425>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,White>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 DarkSaber (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
    OS6.7 v4.021
    Single Style
    Base Style: Clone Wars Darksaber

    Base Color: Rgb<100,100,150> (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/
#define SecondaryBlade_TCWDarksaber StylePtr<Layers<AudioFlicker<BrownNoiseFlicker<Mix<SwingSpeed<400>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,Mix<Int<6425>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,White>>,Stripes<5000,-300,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<25700>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>>,300>,Mix<Int<6425>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,White>>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 DarkSaber (Crystal Chamber) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
    OS6.7 v4.021
    Single Style
    Base Style: Clone Wars Darksaber

    Off Behavior: Off

    Base Color: Rgb<100,100,150> (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
    Lockup Effect: Intensity Lockup Up V1
    LightningBlock Effect: Full Blade Lightning
    Blast Effect: Blast Wave Up (Sound Based)
    Clash Effect: Real Clash V1 Up
*/
#define Chamber_TCWDarksaber StylePtr<Layers<AudioFlicker<BrownNoiseFlicker<Mix<SwingSpeed<400>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,Mix<Int<6425>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,White>>,Stripes<5000,-300,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<25700>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>>,300>,Mix<Int<6425>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,White>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrSelect<Scale<IsLessThan<ClashImpactF<>,Int<20000>>,Int<1>,Int<0>>,TrWaveX<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<50>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<500>,Int<300>>,Int<0>>,TrSparkX<Stripes<1200,-3600,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Int<30>,Scale<Sum<ClashImpactF<>,SwingSpeed<600>>,Int<100>,Int<400>>,Int<0>>>>,EFFECT_LOCKUP_END>,LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrInstant,Black>>>()

/* 
    copyright Fett263 DarkSaber (Accent LED / PCB) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
    OS6.7 v4.021
    Single Style
    Base Style: Clone Wars Darksaber

    Off Behavior: Off

    Base Color: Rgb<100,100,150> (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
*/
#define AccentStrip_TCWDarksaber StylePtr<Layers<AudioFlicker<BrownNoiseFlicker<Mix<SwingSpeed<400>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,Mix<Int<6425>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,White>>,Stripes<5000,-300,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<25700>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<1285>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>>,300>,Mix<Int<6425>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,White>>,InOutTrL<TrInstant,TrInstant,Black>>>()


#pragma endregion

#pragma region "Mando Darksaber"

/* 
    copyright Fett263 DarkSaber (Primary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
    OS6.7 v4.021
    Single Style
    Base Style: Live Action Darksaber (Hyper-Responsive)

    Base Color: Rgb<100,100,150> (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
    Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
    LightningBlock Effect: Responsive Lightning Block
    Drag Effect: Intensity Sparking Drag
    Melt Effect: Intensity Melt
    Blast Effect: Blast Wave (Random)
    Clash Effect: Real Clash V1
*/
#define MainBlade_MandoDarksaber StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<400>,Scale<SwingAcceleration<>,Int<2000>,Int<4000>>,Int<8000>>,HumpFlicker<RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,Stripes<35000,-200,Mix<Int<14000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<24000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<28000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>>,100>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 DarkSaber (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
    OS6.7 v4.021
    Single Style
    Base Style: Live Action Darksaber (Hyper-Responsive)

    Base Color: Rgb<100,100,150> (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/
#define SecondaryBlade_MandoDarksaber StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<400>,Scale<SwingAcceleration<>,Int<2000>,Int<4000>>,Int<8000>>,HumpFlicker<RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,Stripes<35000,-200,Mix<Int<14000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<24000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<28000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>>,100>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 DarkSaber (Crystal Chamber) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
    OS6.7 v4.021
    Single Style
    Base Style: Live Action Darksaber (Hyper-Responsive)

    Off Behavior: Off

    Base Color: Rgb<100,100,150> (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
    Lockup Effect: Intensity Lockup Up V1
    LightningBlock Effect: Full Blade Lightning
    Blast Effect: Blast Wave Up (Sound Based)
    Clash Effect: Real Clash V1 Up
*/
#define Chamber_MandoDarksaber StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<400>,Scale<SwingAcceleration<>,Int<2000>,Int<4000>>,Int<8000>>,HumpFlicker<RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,Stripes<35000,-200,Mix<Int<14000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<24000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<28000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>>,100>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrSelect<Scale<IsLessThan<ClashImpactF<>,Int<20000>>,Int<1>,Int<0>>,TrWaveX<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<50>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<500>,Int<300>>,Int<0>>,TrSparkX<Stripes<1200,-3600,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Int<30>,Scale<Sum<ClashImpactF<>,SwingSpeed<600>>,Int<100>,Int<400>>,Int<0>>>>,EFFECT_LOCKUP_END>,LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrInstant,Black>>>()

/* 
    copyright Fett263 DarkSaber (Accent LED / PCB) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
    OS6.7 v4.021
    Single Style
    Base Style: Live Action Darksaber (Hyper-Responsive)

    Off Behavior: Off

    Base Color: Rgb<100,100,150> (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
*/
#define AccentStrip_MandoDarksaber StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<400>,Scale<SwingAcceleration<>,Int<2000>,Int<4000>>,Int<8000>>,HumpFlicker<RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,Stripes<35000,-200,Mix<Int<14000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<24000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<28000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>>,100>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,InOutTrL<TrInstant,TrInstant,Black>>>()

#pragma endregion

#pragma region "Rainbow Blade (Slow)"

/* 
    copyright Fett263 RainbowBlade (Primary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#RainbowBlade
    OS6.7 v4.021
    Single Style
    Base Style: Running Rainbow (Slow)

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
    Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
    LightningBlock Effect: Responsive Lightning Block
    Drag Effect: Intensity Sparking Drag
    Melt Effect: Intensity Melt
    Blast Effect: Blast Wave (Random)
    Clash Effect: Real Clash V1
*/
#define MainBlade_RainbowSlow(COLOR) StylePtr<Layers<Stripes<50000,-50,RgbArg<BASE_COLOR_ARG,COLOR>,RotateColorsX<Int<5461>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<10922>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<16384>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<21845>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<27306>,RgbArg<BASE_COLOR_ARG,COLOR>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 RainbowBlade (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#RainbowBlade
    OS6.7 v4.021
    Single Style
    Base Style: Running Rainbow (Slow)

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/
#define SecondaryBlade_RainbowSlow(COLOR) StylePtr<Layers<Stripes<50000,-50,RgbArg<BASE_COLOR_ARG,COLOR>,RotateColorsX<Int<5461>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<10922>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<16384>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<21845>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<27306>,RgbArg<BASE_COLOR_ARG,COLOR>>>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 RainbowBlade (Crystal Chamber) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#RainbowBlade
    OS6.7 v4.021
    Single Style
    Base Style: Running Rainbow (Slow)

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
    Lockup Effect: Intensity Lockup Up V1
    LightningBlock Effect: Full Blade Lightning
    Blast Effect: Blast Wave Up (Sound Based)
    Clash Effect: Real Clash V1 Up
*/
#define Chamber_RainbowSlow(COLOR) StylePtr<Layers<Stripes<50000,-50,RgbArg<BASE_COLOR_ARG,COLOR>,RotateColorsX<Int<5461>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<10922>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<16384>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<21845>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<27306>,RgbArg<BASE_COLOR_ARG,COLOR>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrSelect<Scale<IsLessThan<ClashImpactF<>,Int<20000>>,Int<1>,Int<0>>,TrWaveX<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<50>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<500>,Int<300>>,Int<0>>,TrSparkX<Stripes<1200,-3600,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Int<30>,Scale<Sum<ClashImpactF<>,SwingSpeed<600>>,Int<100>,Int<400>>,Int<0>>>>,EFFECT_LOCKUP_END>,LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrInstant,Black>>>()

/* 
    copyright Fett263 RainbowBlade (Accent LED / PCB) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#RainbowBlade
    OS6.7 v4.021
    Single Style
    Base Style: Running Rainbow (Slow)

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
*/
#define AccentStrip_Rainbow(COLOR) StylePtr<Layers<Stripes<50000,-50,RgbArg<BASE_COLOR_ARG,COLOR>,RotateColorsX<Int<5461>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<10922>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<16384>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<21845>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<27306>,RgbArg<BASE_COLOR_ARG,COLOR>>>,InOutTrL<TrInstant,TrInstant,Black>>>()

#pragma endregion

#pragma region "Omnicolor Swing"

/* 
    copyright Fett263 RainbowBlade (Primary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#RainbowBlade
    OS6.7 v4.021
    Single Style
    Base Style: OmniColor Swing

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
    Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
    LightningBlock Effect: Responsive Lightning Block
    Drag Effect: Intensity Sparking Drag
    Melt Effect: Intensity Melt
    Blast Effect: Blast Wave (Random)
    Clash Effect: Real Clash V1
*/
#define MainBlade_OmnicolorSwing(COLOR) StylePtr<Layers<RotateColorsX<IncrementF<SwingSpeed<600>,Int<16384>,Int<32768>,Scale<SwingSpeed<600>,Int<0>,Int<8000>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 RainbowBlade (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#RainbowBlade
    OS6.7 v4.021
    Single Style
    Base Style: OmniColor Swing

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/
#define SecondaryBlade_OmnicolorSwing(COLOR) StylePtr<Layers<RotateColorsX<IncrementF<SwingSpeed<600>,Int<16384>,Int<32768>,Scale<SwingSpeed<600>,Int<0>,Int<8000>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 RainbowBlade (Crystal Chamber) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#RainbowBlade
    OS6.7 v4.021
    Single Style
    Base Style: OmniColor Swing

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
    Lockup Effect: Intensity Lockup Up V1
    LightningBlock Effect: Full Blade Lightning
    Blast Effect: Blast Wave Up (Sound Based)
    Clash Effect: Real Clash V1 Up
*/
#define Chamber_OmnicolorSwing(COLOR) StylePtr<Layers<RotateColorsX<IncrementF<SwingSpeed<600>,Int<16384>,Int<32768>,Scale<SwingSpeed<600>,Int<0>,Int<8000>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrSelect<Scale<IsLessThan<ClashImpactF<>,Int<20000>>,Int<1>,Int<0>>,TrWaveX<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<50>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<500>,Int<300>>,Int<0>>,TrSparkX<Stripes<1200,-3600,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Int<30>,Scale<Sum<ClashImpactF<>,SwingSpeed<600>>,Int<100>,Int<400>>,Int<0>>>>,EFFECT_LOCKUP_END>,LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrInstant,Black>>>()

/* 
    copyright Fett263 RainbowBlade (Accent LED / PCB) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#RainbowBlade
    OS6.7 v4.021
    Single Style
    Base Style: OmniColor Swing

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
*/
#define AccentStrip_OmnicolorSwing(COLOR) StylePtr<Layers<RotateColorsX<IncrementF<SwingSpeed<600>,Int<16384>,Int<32768>,Scale<SwingSpeed<600>,Int<0>,Int<8000>>>,RgbArg<BASE_COLOR_ARG,COLOR>>,InOutTrL<TrInstant,TrInstant,Black>>>()

#pragma endregion

#pragma region "Eye of Sauron"

/* 
    copyright Fett263 Sauron (Primary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Sauron
    OS6.7 v4.021
    Single Style
    Base Style: Eye of Sauron (Center)

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
    Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
    LightningBlock Effect: Responsive Lightning Block
    Drag Effect: Intensity Sparking Drag
    Melt Effect: Intensity Melt
    Blast Effect: Blast Wave (Random)
    Clash Effect: Real Clash V1
*/
#define MainBlade_EyeOfSauron(COLOR) StylePtr<Layers<Layers<Remap<CenterDistF<>,StaticFire<Gradient<RotateColorsX<Int<800>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1200>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>,0,2,0,2400,5>>,AlphaL<AudioFlicker<RotateColorsX<Int<200>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<600>,RgbArg<BASE_COLOR_ARG,COLOR>>>,Bump<Int<16384>,Scale<NoisySoundLevel,Int<16000>,Int<22000>>>>,AlphaL<Black,LinearSectionF<Int<16384>,Scale<NoisySoundLevel,Int<4000>,Int<8000>>>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 Sauron (Quillion / Secondary Blade) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Sauron
    OS6.7 v4.021
    Single Style
    Base Style: Eye of Sauron (Center)

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Standard Ignition
    Retraction Effect: Standard Retraction
*/
#define SecondaryBlade_EyeOfSauron(COLOR) StylePtr<Layers<StaticFire<Gradient<RotateColorsX<Int<800>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1200>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>,0,2,0,2400,5>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>()

/* 
    copyright Fett263 Sauron (Crystal Chamber) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Sauron
    OS6.7 v4.021
    Single Style
    Base Style: Eye of Sauron (Center)

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
    Lockup Effect: Intensity Lockup Up V1
    LightningBlock Effect: Full Blade Lightning
    Blast Effect: Blast Wave Up (Sound Based)
    Clash Effect: Real Clash V1 Up
*/
#define Chamber_EyeOfSauron(COLOR) StylePtr<Layers<StaticFire<Gradient<RotateColorsX<Int<800>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1200>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>,0,2,0,2400,5>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrSelect<Scale<IsLessThan<ClashImpactF<>,Int<20000>>,Int<1>,Int<0>>,TrWaveX<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<50>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<500>,Int<300>>,Int<0>>,TrSparkX<Stripes<1200,-3600,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Int<30>,Scale<Sum<ClashImpactF<>,SwingSpeed<600>>,Int<100>,Int<400>>,Int<0>>>>,EFFECT_LOCKUP_END>,LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrInstant,Black>>>()

/* 
    copyright Fett263 Sauron (Accent LED / PCB) OS6 Style
    https://fett263.com/fett263-proffieOS6-style-library.html#Sauron
    OS6.7 v4.021
    Single Style
    Base Style: Eye of Sauron (Center)

    Off Behavior: Off

    Base Color: COLOR (0)

    --Effects Included--
    Ignition Effect: Instant
    Retraction Effect: Instant
*/
#define AccentStrip_EyeOfSauron(COLOR) StylePtr<Layers<StaticFire<Gradient<RotateColorsX<Int<800>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1200>,RgbArg<BASE_COLOR_ARG,COLOR>>,RotateColorsX<Int<1600>,RgbArg<BASE_COLOR_ARG,COLOR>>>,RgbArg<BASE_COLOR_ARG,COLOR>,0,2,0,2400,5>,InOutTrL<TrInstant,TrInstant,Black>>>()

#pragma endregion

#pragma region "Brian Connor Styles"

// Red only for now
#define IgnitionRedux StylePtr<Layers<Stripes<2000,-2500,RotateColorsX<Variation,Red>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<60,0,0>>,Black>,BrownNoiseFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<30,0,0>>,200>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<80,0,0>>,RotateColorsX<Variation,Rgb<30,0,0>>>>,TransitionLoopL<TrConcat<TrWaveX<RandomFlicker<RotateColorsX<Variation,Red>,BrownNoiseFlicker<RotateColorsX<Variation,Rgb<80,0,0>>,Black,300>>,Int<400>,Int<100>,Int<200>,Int<0>>,AlphaL<Red,Int<0>>,TrDelayX<Scale<SlowNoise<Int<1500>>,Int<200>,Int<1200>>>>>,AlphaL<BrownNoiseFlicker<Red,Black,300>,SwingSpeed<400>>,EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,GreenYellow,TrDelay<25>,AlphaL<TransitionEffect<BrownNoiseFlicker<Rgb<255,150,0>,Black,50>,Moccasin,TrInstant,TrFade<300>,EFFECT_CLASH>,Bump<Scale<BladeAngle<>,Int<25000>,Int<8000>>,Int<18000>>>,TrFade<600>>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,GreenYellow,TrDelay<25>,AlphaL<Black,Int<0>>,TrWipeIn<300>,AlphaL<Stripes<5000,1000,DarkOrange,Rgb<80,60,0>,Orange,Rgb<60,30,0>,Black,DarkOrange,Orange>,SmoothStep<Int<20000>,Int<2000>>>,TrJoin<TrSmoothFade<900>,TrWipe<700>>>,EFFECT_STAB>,TransitionEffectL<TrConcat<TrInstant,GreenYellow,TrDelay<25>>,EFFECT_BLAST>,BlastL<ColorSequence<300,White,DarkOrange>,400,250,401>,AlphaL<White,BlastF<300,300,100000>>,LockupTrL<Layers<AlphaL<Blinking<Tomato,Strobe<Yellow,Black,15,30>,60,500>,Bump<Scale<BladeAngle<5000,28000>,Scale<BladeAngle<8000,16000>,Int<3000>,Int<44000>>,Int<3000>>,Scale<SlowNoise<Int<3000>>,Int<8000>,Int<18000>>>>,AlphaL<BrownNoiseFlicker<Yellow,Black,50>,Bump<Scale<BladeAngle<5000,28000>,Scale<BladeAngle<8000,16000>,Int<3000>,Int<44000>>,Int<3000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<Blinking<White,Strobe<BrownNoiseFlicker<Yellow,Black,500>,Black,15,30>,60,500>,Bump<Scale<BladeAngle<5000,28000>,Scale<BladeAngle<8000,16000>,Int<3000>,Int<44000>>,Int<3000>>,Scale<SlowNoise<Int<3000>>,Int<25000>,Int<32000>>>>,TrFade<500>>,TrSmoothFade<900>,SaberBase::LOCKUP_NORMAL>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Strobe<GreenYellow,Black,20,30>,Bump<Scale<BladeAngle<5000,28000>,Scale<BladeAngle<8000,16000>,Int<3000>,Int<44000>>,Int<3000>>,Int<15000>>>,TrFade<600>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<Strobe<AlphaL<White,Int<20000>>,Black,20,30>,30>,TrSmoothFade<250>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,GreenYellow,TrDelay<25>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,Strobe<GreenYellow,Black,20,30>,TrFade<200>,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrJoinR<TrWipe<200>,TrWipeIn<200>,TrFade<300>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<AudioFlicker<BrownNoiseFlicker<Strobe<Black,OrangeRed,20,25>,Yellow,200>,White>,SmoothStep<Int<30000>,Int<2000>>>,TrConcat<TrInstant,GreenYellow,TrDelay<25>,AlphaL<Black,Int<0>>,TrFade<150>>,TrColorCycle<1500,-2000,100>,SaberBase::LOCKUP_DRAG>,ResponsiveLightningBlockL<RandomFlicker<Strobe<White,Rgb16<21301,0,65535>,50,10>,BrownNoiseFlicker<Rgb16<21301,0,65535>,Black,500>>,TrConcat<TrInstant,GreenYellow,TrDelay<25>,BrownNoiseFlicker<Rgb16<21301,0,65535>,Black,500>,TrFade<100>>,TrConcat<TrInstant,GreenYellow,TrDelay<25>,BrownNoiseFlicker<Rgb16<21301,0,65535>,Black,500>,TrFade<150>,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrJoinR<TrWipe<200>,TrWipeIn<200>,TrFade<400>>>>,LockupTrL<AlphaL<Mix<TwistAngle<>,Yellow,RandomPerLEDFlicker<Orange,OrangeRed>,BrownNoiseFlicker<Rgb16<20095,128,128>,Rgb16<35103,8175,298>,150>,StyleFire<Rgb16<20393,93,93>,Red,0,4,FireConfig<0,2000,0>,FireConfig<3000,0,0>,FireConfig<0,4000,0>>>,SmoothStep<Scale<TwistAngle<>,Int<24000>,Int<29000>>,Int<2000>>>,TrConcat<TrInstant,GreenYellow,TrDelay<25>,AlphaL<Black,Int<0>>,TrWipeIn<600>>,TrColorCycle<1500,-2000,100>,SaberBase::LOCKUP_MELT>,TransitionEffectL<TrConcat<TrDelay<150>,AlphaL<Black,Int<0>>,TrFade<500>,AlphaL<Strobe<White,Black,40,40>,Bump<Int<0>,Int<80000>>>,TrDelay<350>>,EFFECT_RETRACTION>,AlphaL<Black,SmoothStep<Scale<SlowNoise<Int<1800>>,Int<22000>,Int<40000>>,Int<24000>>>,InOutTrL<TrConcat<TrInstant,BrownNoiseFlicker<White,DarkOrange,300>,TrDelay<20>,Black,TrWipe<300>,Stripes<2500,-5000,BrownNoiseFlicker<RotateColorsX<Variation,Red>,Black,20>,Black,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<255,20,0>>,White>,RotateColorsX<Variation,Rgb<128,34,0>>>,TrFade<300>,BrownNoiseFlicker<RotateColorsX<Variation,Red>,Black,20>,TrBoing<300,3>>,TrConcat<TrInstant,BrownNoiseFlicker<White,DarkOrange,300>,TrFade<250>,AlphaL<Black,Int<0>>,TrJoin<TrWipeInX<Int<850>>,TrWaveX<White,Int<800>,Int<400>,Int<850>,Int<32768>>>>>,TransitionEffectL<TrConcat<TrDelay<1100>,BrownNoiseFlicker<White,DarkOrange,300>,TrDelay<50>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrInstant,AlphaL<BrownNoiseFlicker<Red,Black,100>,Bump<Int<0>,Int<30000>>>,TrDelay<100>,AlphaL<BrownNoiseFlicker<Red,Black,100>,Bump<Int<0>,Int<30000>>>,TrFade<100>,Black,TrDelay<50>,AlphaL<BrownNoiseFlicker<White,Black,100>,Bump<Int<0>,Int<50000>>>,TrDelay<150>,AlphaL<BrownNoiseFlicker<White,DarkOrange,300>,Bump<Int<0>,Int<70000>>>,TrFade<150>,Black,TrFade<100>,AlphaL<BrownNoiseFlicker<Rgb<255,100,100>,Black,40>,Bump<Int<0>,Int<40000>>>,TrFade<400>,AlphaL<BrownNoiseFlicker<Red,Black,40>,Bump<Int<0>,Int<20000>>>,TrFade<450>,Black,TrInstant,AlphaL<BrownNoiseFlicker<White,Black,100>,Bump<Int<0>,Int<70000>>>,TrDelay<250>,AlphaL<BrownNoiseFlicker<White,DarkOrange,300>,Bump<Int<0>,Int<50000>>>,TrFade<200>,Black,TrFade<100>,AlphaL<BrownNoiseFlicker<Rgb<255,100,100>,Black,40>,Bump<Int<0>,Int<40000>>>,TrFade<500>,AlphaL<BrownNoiseFlicker<Red,Black,40>,Bump<Int<0>,Int<20000>>>,TrFade<600>,Black,TrInstant,AlphaL<BrownNoiseFlicker<White,Black,100>,Bump<Int<0>,Int<10000>>>,TrDelay<100>,AlphaL<BrownNoiseFlicker<White,Red,300>,Bump<Int<0>,Int<5000>>>,TrFade<150>,Black,TrDelay<350>,Black,TrInstant,AlphaL<BrownNoiseFlicker<White,Black,100>,Bump<Int<0>,Int<10000>>>,TrDelay<70>,AlphaL<BrownNoiseFlicker<White,Red,300>,Bump<Int<0>,Int<5000>>>,TrFade<40>,Black,TrDelay<20>,Black,TrInstant,AlphaL<BrownNoiseFlicker<Red,Black,100>,Bump<Int<0>,Int<30000>>>,TrDelay<50>,AlphaL<BrownNoiseFlicker<Red,Black,100>,Bump<Int<0>,Int<30000>>>,TrFade<50>,Black,TrDelay<50>,AlphaL<BrownNoiseFlicker<White,Black,100>,Bump<Int<0>,Int<50000>>>,TrDelay<100>,AlphaL<BrownNoiseFlicker<White,DarkOrange,300>,Bump<Int<0>,Int<70000>>>,TrFade<150>,Black,TrFade<100>,AlphaL<BrownNoiseFlicker<Rgb<255,100,100>,Black,40>,Bump<Int<0>,Int<40000>>>,TrFade<300>,AlphaL<BrownNoiseFlicker<Red,Black,40>,Bump<Int<0>,Int<20000>>>,TrFade<400>,AlphaL<BrownNoiseFlicker<White,Red,100>,Bump<Int<0>,Int<10000>>>,TrFade<175>,AlphaL<BrownNoiseFlicker<White,DarkOrange,300>,Bump<Int<0>,Int<20000>>>,TrFade<175>,AlphaL<BrownNoiseFlicker<White,Red,100>,Bump<Int<0>,Int<10000>>>,TrFade<115>,AlphaL<BrownNoiseFlicker<White,DarkOrange,100>,Bump<Int<0>,Int<40000>>>,TrFade<115>,AlphaL<BrownNoiseFlicker<White,Red,300>,Bump<Int<0>,Int<20000>>>,TrFade<100>,AlphaL<BrownNoiseFlicker<White,DarkOrange,100>,Bump<Int<0>,Int<60000>>>,TrFade<100>,AlphaL<BrownNoiseFlicker<White,Red,300>,Bump<Int<0>,Int<40000>>>,TrFade<75>,BrownNoiseFlicker<White,DarkOrange,300>,TrFade<50>,Black,TrFade<50>,BrownNoiseFlicker<RotateColorsX<Variation,Red>,Rgb<200,150,150>,20>,TrSmoothFade<100>>,EFFECT_PREON>,AlphaL<Black,Scale<IsLessThan<BatteryLevel,Int<11000>>,Int<0>,Int<16384>>>>>()

#pragma endregion

#pragma region "Extras"

/* 
    Ignited: Running color top to bottom
    Off: Middle Out Wipe Battery Level (Green -> Red)
*/
#define MaraBatteryStrip(COLOR) StylePtr<Layers<TransitionLoop<Black,TrConcat<TrWipeIn<200>,RgbArg<BASE_COLOR_ARG,COLOR>,TrWipeIn<200>>>,InOutTrL<TrColorCycleX<IgnitionTime<0>>,TrColorCycleX<RetractionTime<>>,TransitionLoop<Black,TrConcat<TrCenterWipe<500>,Mix<BatteryLevel,Red,Green>,TrCenterWipe<500>>>>>>()

/*
    Luke Cave Scene Alternating Blinks
    Primary: Green Arrow (Configurable)
    Secondary: Red Arrow (Configurable)
*/
#define PrimaryBlinky(COLOR) StylePtr<Layers<COLOR,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,COLOR,TrBoing<2000,5>>>>>>()

#define SecondaryBlinky(COLOR) StylePtr<Layers<COLOR,InOutTrL<TrInstant,TrInstant,TransitionLoop<COLOR,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>()

#pragma endregion

#endif // SHADOWFOIL_PRESETS_H