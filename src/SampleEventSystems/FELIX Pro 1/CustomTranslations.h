/*
If the Configuration.h contains
#define CUSTOM_TRANSLATIONS

this file is included inside uilang.cpp

Adjust the scheme below to add custom translation

*/

#define NUM_EXTRA_TRANSLATIONS 20

#define UI_CTEXT_CALIBRATING_Z_OFFSET_ID NUM_TRANSLATED_WORDS
#define UI_CTEXT_CALIBRATE_EXTRUDERS_ID NUM_TRANSLATED_WORDS+1
#define UI_CTEXT_CALIBRATE_XY_ID NUM_TRANSLATED_WORDS+2
#define UI_CTEXT_CALIBRATE_Z_ID NUM_TRANSLATED_WORDS+3
#define UI_CTEXT_XY_P1_1_ID NUM_TRANSLATED_WORDS+4 // "Please prepare the"
#define UI_CTEXT_XY_P1_2_ID NUM_TRANSLATED_WORDS+5 // "printer for PLA dual"
#define UI_CTEXT_XY_P1_3_ID NUM_TRANSLATED_WORDS+6 // "head printing"
#define UI_CTEXT_XY_P3_1_ID NUM_TRANSLATED_WORDS+7 // "Choose the best"
#define UI_CTEXT_XY_P3_2_ID NUM_TRANSLATED_WORDS+8 // "aligning XY values"
#define UI_CTEXT_XY_P3_X_ID NUM_TRANSLATED_WORDS+9 // "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_ID NUM_TRANSLATED_WORDS+10 // "Y Value         %w1"
#define UI_CTEXT_CONTINUE_ID NUM_TRANSLATED_WORDS+11
#define UI_CTEXT_START_PRINTING_ID NUM_TRANSLATED_WORDS+12
#define UI_CTEXT_PRINTXYCAL1_ID NUM_TRANSLATED_WORDS+13 // Printing xy 
#define UI_CTEXT_PRINTXYCAL2_ID NUM_TRANSLATED_WORDS+14 // calibration
#define UI_CTEXT_EXTZCAL1_ID NUM_TRANSLATED_WORDS+15 // Calibrating 
#define UI_CTEXT_EXTZCAL2_ID NUM_TRANSLATED_WORDS+16 // z offset
#define UI_CTEXT_PREHEATCOOL_ID NUM_TRANSLATED_WORDS+17 // Preheat/cool 
#define UI_CTEXT_PREHEATCOOL2_ID NUM_TRANSLATED_WORDS+18 // Dual Preheat/cool 
#define UI_CTEXT_REMOVEBED_ID NUM_TRANSLATED_WORDS+19   // Remove bed

// English version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_EN "Calibrating Z offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_EN "Calibrate Extruders"
#define UI_CTEXT_CALIBRATE_XY_EN "Calibrate XY"
#define UI_CTEXT_CALIBRATE_Z_EN "Calibrate Z"
#define UI_CTEXT_XY_P1_1_EN " Please prepare the"
#define UI_CTEXT_XY_P1_2_EN " printer for PLA dual"
#define UI_CTEXT_XY_P1_3_EN "    head printing"
#define UI_CTEXT_XY_P3_1_EN "  Choose the best"
#define UI_CTEXT_XY_P3_2_EN " aligning XY values"
#define UI_CTEXT_XY_P3_X_EN "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_EN "Y Value         %w1"
#define UI_CTEXT_CONTINUE_EN "Continue"
#define UI_CTEXT_START_PRINTING_EN "Start Printing"
#define UI_CTEXT_PRINTXYCAL1_EN    "       Printing"  
#define UI_CTEXT_PRINTXYCAL2_EN    "    xy calibration"
#define UI_CTEXT_EXTZCAL1_EN       "     Calibrating" 
#define UI_CTEXT_EXTZCAL2_EN       "      z offset"
#define UI_CTEXT_PREHEATCOOL_EN "Preheat/cool" 
#define UI_CTEXT_PREHEATCOOL2_EN "Dual Preheat/cool" 
#define UI_CTEXT_REMOVEBED_EN "Remove bed"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_EN);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_EN);
TRANS(UI_CTEXT_CALIBRATE_XY_EN);
TRANS(UI_CTEXT_CALIBRATE_Z_EN);
TRANS(UI_CTEXT_XY_P1_1_EN);
TRANS(UI_CTEXT_XY_P1_2_EN);
TRANS(UI_CTEXT_XY_P1_3_EN);
TRANS(UI_CTEXT_XY_P3_1_EN);
TRANS(UI_CTEXT_XY_P3_2_EN);
TRANS(UI_CTEXT_XY_P3_X_EN);
TRANS(UI_CTEXT_XY_P3_Y_EN);
TRANS(UI_CTEXT_CONTINUE_EN);
TRANS(UI_CTEXT_START_PRINTING_EN);
TRANS(UI_CTEXT_PRINTXYCAL1_EN);  
TRANS(UI_CTEXT_PRINTXYCAL2_EN);
TRANS(UI_CTEXT_EXTZCAL1_EN); 
TRANS(UI_CTEXT_EXTZCAL2_EN);
TRANS(UI_CTEXT_PREHEATCOOL_EN); 
TRANS(UI_CTEXT_PREHEATCOOL2_EN); 
TRANS(UI_CTEXT_REMOVEBED_EN);
#endif

#define CUSTOM_TRANS_EN ,FUI_CTEXT_CALIBRATING_Z_OFFSET_EN,FUI_CTEXT_CALIBRATE_EXTRUDERS_EN,FUI_CTEXT_CALIBRATE_XY_EN,FUI_CTEXT_CALIBRATE_Z_EN \
  ,FUI_CTEXT_XY_P1_1_EN,FUI_CTEXT_XY_P1_2_EN,FUI_CTEXT_XY_P1_3_EN,FUI_CTEXT_XY_P3_1_EN,FUI_CTEXT_XY_P3_2_EN,FUI_CTEXT_XY_P3_X_EN,FUI_CTEXT_XY_P3_Y_EN,FUI_CTEXT_CONTINUE_EN,FUI_CTEXT_START_PRINTING_EN\
  ,FUI_CTEXT_PRINTXYCAL1_EN,FUI_CTEXT_PRINTXYCAL2_EN,FUI_CTEXT_EXTZCAL1_EN,FUI_CTEXT_EXTZCAL2_EN,FUI_CTEXT_PREHEATCOOL_EN,FUI_CTEXT_PREHEATCOOL2_EN,FUI_CTEXT_REMOVEBED_EN

// German version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_DE "Kalibriere Z-Offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_DE "Kalibriere Extruder"
#define UI_CTEXT_CALIBRATE_XY_DE "Kalibriere XY"
#define UI_CTEXT_CALIBRATE_Z_DE "Kalibriere Z"
#define UI_CTEXT_XY_P1_1_DE "Bitte den Drucker"
#define UI_CTEXT_XY_P1_2_DE "Dual-PLA-Druck"
#define UI_CTEXT_XY_P1_3_DE "Druck vorbereiten"
#define UI_CTEXT_XY_P3_1_DE "W" STR_auml "hle die am besten"
#define UI_CTEXT_XY_P3_2_DE "passenden XY Werte"
#define UI_CTEXT_XY_P3_X_DE "X Wert         %w0"
#define UI_CTEXT_XY_P3_Y_DE "Y Wert         %w1"
#define UI_CTEXT_CONTINUE_DE "Weiter"
#define UI_CTEXT_START_PRINTING_DE "Starte Druck"
#define UI_CTEXT_PRINTXYCAL1_DE "       Drucke"  
#define UI_CTEXT_PRINTXYCAL2_DE "  XY Kalibrierung"
#define UI_CTEXT_EXTZCAL1_DE "     Kalibriere" 
#define UI_CTEXT_EXTZCAL2_DE "      Z-Offset"
#define UI_CTEXT_PREHEATCOOL_DE "Vorheizen/abk" STR_uuml "hlen" 
#define UI_CTEXT_PREHEATCOOL2_DE "Dual vorheizen/abk." 
#define UI_CTEXT_REMOVEBED_DE "Heizbett entfernen"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_DE);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_DE);
TRANS(UI_CTEXT_CALIBRATE_XY_DE);
TRANS(UI_CTEXT_CALIBRATE_Z_DE);
TRANS(UI_CTEXT_XY_P1_1_DE);
TRANS(UI_CTEXT_XY_P1_2_DE);
TRANS(UI_CTEXT_XY_P1_3_DE);
TRANS(UI_CTEXT_XY_P3_1_DE);
TRANS(UI_CTEXT_XY_P3_2_DE);
TRANS(UI_CTEXT_XY_P3_X_DE);
TRANS(UI_CTEXT_XY_P3_Y_DE);
TRANS(UI_CTEXT_CONTINUE_DE);
TRANS(UI_CTEXT_START_PRINTING_DE);
TRANS(UI_CTEXT_PRINTXYCAL1_DE);  
TRANS(UI_CTEXT_PRINTXYCAL2_DE);
TRANS(UI_CTEXT_EXTZCAL1_DE); 
TRANS(UI_CTEXT_EXTZCAL2_DE);
TRANS(UI_CTEXT_PREHEATCOOL_DE); 
TRANS(UI_CTEXT_PREHEATCOOL2_DE); 
TRANS(UI_CTEXT_REMOVEBED_DE);
#endif

#define CUSTOM_TRANS_DE ,FUI_CTEXT_CALIBRATING_Z_OFFSET_DE,FUI_CTEXT_CALIBRATE_EXTRUDERS_DE,FUI_CTEXT_CALIBRATE_XY_DE,FUI_CTEXT_CALIBRATE_Z_DE \
  ,FUI_CTEXT_XY_P1_1_DE,FUI_CTEXT_XY_P1_2_DE,FUI_CTEXT_XY_P1_3_DE,FUI_CTEXT_XY_P3_1_DE,FUI_CTEXT_XY_P3_2_DE,FUI_CTEXT_XY_P3_X_DE,FUI_CTEXT_XY_P3_Y_DE,FUI_CTEXT_CONTINUE_DE,FUI_CTEXT_START_PRINTING_DE\
  ,FUI_CTEXT_PRINTXYCAL1_DE,FUI_CTEXT_PRINTXYCAL2_DE,FUI_CTEXT_EXTZCAL1_DE,FUI_CTEXT_EXTZCAL2_DE,FUI_CTEXT_PREHEATCOOL_DE,FUI_CTEXT_PREHEATCOOL2_DE,FUI_CTEXT_REMOVEBED_DE

// Dutch version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_NL "Calibrating Z offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_NL "Calibrate Extruders"
#define UI_CTEXT_CALIBRATE_XY_NL "Calibrate XY"
#define UI_CTEXT_CALIBRATE_Z_NL "Calibrate Z"
#define UI_CTEXT_XY_P1_1_NL "Please prepare the"
#define UI_CTEXT_XY_P1_2_NL "printer for PLA dual"
#define UI_CTEXT_XY_P1_3_NL "head printing"
#define UI_CTEXT_XY_P3_1_NL "Choose the best"
#define UI_CTEXT_XY_P3_2_NL "aligning XY values"
#define UI_CTEXT_XY_P3_X_NL "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_NL "Y Value         %w1"
#define UI_CTEXT_CONTINUE_NL "Continue"
#define UI_CTEXT_START_PRINTING_NL "Start Printing"
#define UI_CTEXT_PRINTXYCAL1_NL "   Printing"  
#define UI_CTEXT_PRINTXYCAL2_NL "xy calibration"
#define UI_CTEXT_EXTZCAL1_NL "    Calibrating" 
#define UI_CTEXT_EXTZCAL2_NL "     z offset"
#define UI_CTEXT_PREHEATCOOL_NL "Preheat/cool" 
#define UI_CTEXT_PREHEATCOOL2_NL "Dual Preheat/cool" 
#define UI_CTEXT_REMOVEBED_NL "Remove bed"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_NL);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_NL);
TRANS(UI_CTEXT_CALIBRATE_XY_NL);
TRANS(UI_CTEXT_CALIBRATE_Z_NL);
TRANS(UI_CTEXT_XY_P1_1_NL);
TRANS(UI_CTEXT_XY_P1_2_NL);
TRANS(UI_CTEXT_XY_P1_3_NL);
TRANS(UI_CTEXT_XY_P3_1_NL);
TRANS(UI_CTEXT_XY_P3_2_NL);
TRANS(UI_CTEXT_XY_P3_X_NL);
TRANS(UI_CTEXT_XY_P3_Y_NL);
TRANS(UI_CTEXT_CONTINUE_NL);
TRANS(UI_CTEXT_START_PRINTING_NL);
TRANS(UI_CTEXT_PRINTXYCAL1_NL);  
TRANS(UI_CTEXT_PRINTXYCAL2_NL);
TRANS(UI_CTEXT_EXTZCAL1_NL); 
TRANS(UI_CTEXT_EXTZCAL2_NL);
TRANS(UI_CTEXT_PREHEATCOOL_NL); 
TRANS(UI_CTEXT_PREHEATCOOL2_NL); 
TRANS(UI_CTEXT_REMOVEBED_NL);
#endif

#define CUSTOM_TRANS_NL ,FUI_CTEXT_CALIBRATING_Z_OFFSET_NL,FUI_CTEXT_CALIBRATE_EXTRUDERS_NL,FUI_CTEXT_CALIBRATE_XY_NL,FUI_CTEXT_CALIBRATE_Z_NL \
  ,FUI_CTEXT_XY_P1_1_NL,FUI_CTEXT_XY_P1_2_NL,FUI_CTEXT_XY_P1_3_NL,FUI_CTEXT_XY_P3_1_NL,FUI_CTEXT_XY_P3_2_NL,FUI_CTEXT_XY_P3_X_NL,FUI_CTEXT_XY_P3_Y_NL,FUI_CTEXT_CONTINUE_NL,FUI_CTEXT_START_PRINTING_NL\
  ,FUI_CTEXT_PRINTXYCAL1_NL,FUI_CTEXT_PRINTXYCAL2_NL,FUI_CTEXT_EXTZCAL1_NL,FUI_CTEXT_EXTZCAL2_NL,FUI_CTEXT_PREHEATCOOL_NL,FUI_CTEXT_PREHEATCOOL2_NL,FUI_CTEXT_REMOVEBED_NL

// Spanish version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_ES "Calibrating Z offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_ES "Calibrate Extruders"
#define UI_CTEXT_CALIBRATE_XY_ES "Calibrate XY"
#define UI_CTEXT_CALIBRATE_Z_ES "Calibrate Z"
#define UI_CTEXT_XY_P1_1_ES "Please prepare the"
#define UI_CTEXT_XY_P1_2_ES "printer for PLA dual"
#define UI_CTEXT_XY_P1_3_ES "head printing"
#define UI_CTEXT_XY_P3_1_ES "Choose the best"
#define UI_CTEXT_XY_P3_2_ES "aligning XY values"
#define UI_CTEXT_XY_P3_X_ES "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_ES "Y Value         %w1"
#define UI_CTEXT_CONTINUE_ES "Continue"
#define UI_CTEXT_START_PRINTING_ES "Start Printing"
#define UI_CTEXT_PRINTXYCAL1_ES "   Printing"  
#define UI_CTEXT_PRINTXYCAL2_ES "xy calibration"
#define UI_CTEXT_EXTZCAL1_ES "    Calibrating" 
#define UI_CTEXT_EXTZCAL2_ES "     z offset"
#define UI_CTEXT_PREHEATCOOL_ES "Preheat/cool" 
#define UI_CTEXT_PREHEATCOOL2_ES "Dual Preheat/cool" 
#define UI_CTEXT_REMOVEBED_ES "Remove bed"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_ES);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_ES);
TRANS(UI_CTEXT_CALIBRATE_XY_ES);
TRANS(UI_CTEXT_CALIBRATE_Z_ES);
TRANS(UI_CTEXT_XY_P1_1_ES);
TRANS(UI_CTEXT_XY_P1_2_ES);
TRANS(UI_CTEXT_XY_P1_3_ES);
TRANS(UI_CTEXT_XY_P3_1_ES);
TRANS(UI_CTEXT_XY_P3_2_ES);
TRANS(UI_CTEXT_XY_P3_X_ES);
TRANS(UI_CTEXT_XY_P3_Y_ES);
TRANS(UI_CTEXT_CONTINUE_ES);
TRANS(UI_CTEXT_START_PRINTING_ES);
TRANS(UI_CTEXT_PRINTXYCAL1_ES);  
TRANS(UI_CTEXT_PRINTXYCAL2_ES);
TRANS(UI_CTEXT_EXTZCAL1_ES); 
TRANS(UI_CTEXT_EXTZCAL2_ES);
TRANS(UI_CTEXT_PREHEATCOOL_ES); 
TRANS(UI_CTEXT_PREHEATCOOL2_ES); 
TRANS(UI_CTEXT_REMOVEBED_ES);
#endif

#define CUSTOM_TRANS_ES ,FUI_CTEXT_CALIBRATING_Z_OFFSET_ES,FUI_CTEXT_CALIBRATE_EXTRUDERS_ES,FUI_CTEXT_CALIBRATE_XY_ES,FUI_CTEXT_CALIBRATE_Z_ES \
  ,FUI_CTEXT_XY_P1_1_ES,FUI_CTEXT_XY_P1_2_ES,FUI_CTEXT_XY_P1_3_ES,FUI_CTEXT_XY_P3_1_ES,FUI_CTEXT_XY_P3_2_ES,FUI_CTEXT_XY_P3_X_ES,FUI_CTEXT_XY_P3_Y_ES,FUI_CTEXT_CONTINUE_ES,FUI_CTEXT_START_PRINTING_ES\
  ,FUI_CTEXT_PRINTXYCAL1_ES,FUI_CTEXT_PRINTXYCAL2_ES,FUI_CTEXT_EXTZCAL1_ES,FUI_CTEXT_EXTZCAL2_ES,FUI_CTEXT_PREHEATCOOL_ES,FUI_CTEXT_PREHEATCOOL2_ES,FUI_CTEXT_REMOVEBED_ES

// Portuguies version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_PT "Calibrating Z offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_PT "Calibrate Extruders"
#define UI_CTEXT_CALIBRATE_XY_PT "Calibrate XY"
#define UI_CTEXT_CALIBRATE_Z_PT "Calibrate Z"
#define UI_CTEXT_XY_P1_1_PT "Please prepare the"
#define UI_CTEXT_XY_P1_2_PT "printer for PLA dual"
#define UI_CTEXT_XY_P1_3_PT "head printing"
#define UI_CTEXT_XY_P3_1_PT "Choose the best"
#define UI_CTEXT_XY_P3_2_PT "aligning XY values"
#define UI_CTEXT_XY_P3_X_PT "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_PT "Y Value         %w1"
#define UI_CTEXT_CONTINUE_PT "Continue"
#define UI_CTEXT_START_PRINTING_PT "Start Printing"
#define UI_CTEXT_PRINTXYCAL1_PT "   Printing"  
#define UI_CTEXT_PRINTXYCAL2_PT "xy calibration"
#define UI_CTEXT_EXTZCAL1_PT "    Calibrating" 
#define UI_CTEXT_EXTZCAL2_PT "     z offset"
#define UI_CTEXT_PREHEATCOOL_PT "Preheat/cool" 
#define UI_CTEXT_PREHEATCOOL2_PT "Dual Preheat/cool" 
#define UI_CTEXT_REMOVEBED_PT "Remove bed"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_PT);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_PT);
TRANS(UI_CTEXT_CALIBRATE_XY_PT);
TRANS(UI_CTEXT_CALIBRATE_Z_PT);
TRANS(UI_CTEXT_XY_P1_1_PT);
TRANS(UI_CTEXT_XY_P1_2_PT);
TRANS(UI_CTEXT_XY_P1_3_PT);
TRANS(UI_CTEXT_XY_P3_1_PT);
TRANS(UI_CTEXT_XY_P3_2_PT);
TRANS(UI_CTEXT_XY_P3_X_PT);
TRANS(UI_CTEXT_XY_P3_Y_PT);
TRANS(UI_CTEXT_CONTINUE_PT);
TRANS(UI_CTEXT_START_PRINTING_PT);
TRANS(UI_CTEXT_PRINTXYCAL1_PT);  
TRANS(UI_CTEXT_PRINTXYCAL2_PT);
TRANS(UI_CTEXT_EXTZCAL1_PT); 
TRANS(UI_CTEXT_EXTZCAL2_PT);
TRANS(UI_CTEXT_PREHEATCOOL_PT); 
TRANS(UI_CTEXT_PREHEATCOOL2_PT); 
TRANS(UI_CTEXT_REMOVEBED_PT);
#endif

#define CUSTOM_TRANS_PT ,FUI_CTEXT_CALIBRATING_Z_OFFSET_PT,FUI_CTEXT_CALIBRATE_EXTRUDERS_PT,FUI_CTEXT_CALIBRATE_XY_PT,FUI_CTEXT_CALIBRATE_Z_PT \
  ,FUI_CTEXT_XY_P1_1_PT,FUI_CTEXT_XY_P1_2_PT,FUI_CTEXT_XY_P1_3_PT,FUI_CTEXT_XY_P3_1_PT,FUI_CTEXT_XY_P3_2_PT,FUI_CTEXT_XY_P3_X_PT,FUI_CTEXT_XY_P3_Y_PT,FUI_CTEXT_CONTINUE_PT,FUI_CTEXT_START_PRINTING_PT\
  ,FUI_CTEXT_PRINTXYCAL1_PT,FUI_CTEXT_PRINTXYCAL2_PT,FUI_CTEXT_EXTZCAL1_PT,FUI_CTEXT_EXTZCAL2_PT,FUI_CTEXT_PREHEATCOOL_PT,FUI_CTEXT_PREHEATCOOL2_PT,FUI_CTEXT_REMOVEBED_PT

// French version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_FR "Calibrating Z offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_FR "Calibrate Extruders"
#define UI_CTEXT_CALIBRATE_XY_FR "Calibrate XY"
#define UI_CTEXT_CALIBRATE_Z_FR "Calibrate Z"
#define UI_CTEXT_XY_P1_1_FR "Please prepare the"
#define UI_CTEXT_XY_P1_2_FR "printer for PLA dual"
#define UI_CTEXT_XY_P1_3_FR "head printing"
#define UI_CTEXT_XY_P3_1_FR "Choose the best"
#define UI_CTEXT_XY_P3_2_FR "aligning XY values"
#define UI_CTEXT_XY_P3_X_FR "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_FR "Y Value         %w1"
#define UI_CTEXT_CONTINUE_FR "Continue"
#define UI_CTEXT_START_PRINTING_FR "Start Printing"
#define UI_CTEXT_PRINTXYCAL1_FR "   Printing"  
#define UI_CTEXT_PRINTXYCAL2_FR "xy calibration"
#define UI_CTEXT_EXTZCAL1_FR "    Calibrating" 
#define UI_CTEXT_EXTZCAL2_FR "     z offset"
#define UI_CTEXT_PREHEATCOOL_FR "Preheat/cool" 
#define UI_CTEXT_PREHEATCOOL2_FR "Dual Preheat/cool" 
#define UI_CTEXT_REMOVEBED_FR "Remove bed"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_FR);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_FR);
TRANS(UI_CTEXT_CALIBRATE_XY_FR);
TRANS(UI_CTEXT_CALIBRATE_Z_FR);
TRANS(UI_CTEXT_XY_P1_1_FR);
TRANS(UI_CTEXT_XY_P1_2_FR);
TRANS(UI_CTEXT_XY_P1_3_FR);
TRANS(UI_CTEXT_XY_P3_1_FR);
TRANS(UI_CTEXT_XY_P3_2_FR);
TRANS(UI_CTEXT_XY_P3_X_FR);
TRANS(UI_CTEXT_XY_P3_Y_FR);
TRANS(UI_CTEXT_CONTINUE_FR);
TRANS(UI_CTEXT_START_PRINTING_FR);
TRANS(UI_CTEXT_PRINTXYCAL1_FR);  
TRANS(UI_CTEXT_PRINTXYCAL2_FR);
TRANS(UI_CTEXT_EXTZCAL1_FR); 
TRANS(UI_CTEXT_EXTZCAL2_FR);
TRANS(UI_CTEXT_PREHEATCOOL_FR); 
TRANS(UI_CTEXT_PREHEATCOOL2_FR); 
TRANS(UI_CTEXT_REMOVEBED_FR);
#endif

#define CUSTOM_TRANS_FR ,FUI_CTEXT_CALIBRATING_Z_OFFSET_FR,FUI_CTEXT_CALIBRATE_EXTRUDERS_FR,FUI_CTEXT_CALIBRATE_XY_FR,FUI_CTEXT_CALIBRATE_Z_FR \
  ,FUI_CTEXT_XY_P1_1_FR,FUI_CTEXT_XY_P1_2_FR,FUI_CTEXT_XY_P1_3_FR,FUI_CTEXT_XY_P3_1_FR,FUI_CTEXT_XY_P3_2_FR,FUI_CTEXT_XY_P3_X_FR,FUI_CTEXT_XY_P3_Y_FR,FUI_CTEXT_CONTINUE_FR,FUI_CTEXT_START_PRINTING_FR\
  ,FUI_CTEXT_PRINTXYCAL1_FR,FUI_CTEXT_PRINTXYCAL2_FR,FUI_CTEXT_EXTZCAL1_FR,FUI_CTEXT_EXTZCAL2_FR,FUI_CTEXT_PREHEATCOOL_FR,FUI_CTEXT_PREHEATCOOL2_FR,FUI_CTEXT_REMOVEBED_FR

// Italien version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_IT "Calibrating Z offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_IT "Calibrate Extruders"
#define UI_CTEXT_CALIBRATE_XY_IT "Calibrate XY"
#define UI_CTEXT_CALIBRATE_Z_IT "Calibrate Z"
#define UI_CTEXT_XY_P1_1_IT "Please prepare the"
#define UI_CTEXT_XY_P1_2_IT "printer for PLA dual"
#define UI_CTEXT_XY_P1_3_IT "head printing"
#define UI_CTEXT_XY_P3_1_IT "Choose the best"
#define UI_CTEXT_XY_P3_2_IT "aligning XY values"
#define UI_CTEXT_XY_P3_X_IT "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_IT "Y Value         %w1"
#define UI_CTEXT_CONTINUE_IT "Continue"
#define UI_CTEXT_START_PRINTING_IT "Start Printing"
#define UI_CTEXT_PRINTXYCAL1_IT "   Printing"  
#define UI_CTEXT_PRINTXYCAL2_IT "xy calibration"
#define UI_CTEXT_EXTZCAL1_IT "    Calibrating" 
#define UI_CTEXT_EXTZCAL2_IT "     z offset"
#define UI_CTEXT_PREHEATCOOL_IT "Preheat/cool" 
#define UI_CTEXT_PREHEATCOOL2_IT "Dual Preheat/cool" 
#define UI_CTEXT_REMOVEBED_IT "Remove bed"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_IT);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_IT);
TRANS(UI_CTEXT_CALIBRATE_XY_IT);
TRANS(UI_CTEXT_CALIBRATE_Z_IT);
TRANS(UI_CTEXT_XY_P1_1_IT);
TRANS(UI_CTEXT_XY_P1_2_IT);
TRANS(UI_CTEXT_XY_P1_3_IT);
TRANS(UI_CTEXT_XY_P3_1_IT);
TRANS(UI_CTEXT_XY_P3_2_IT);
TRANS(UI_CTEXT_XY_P3_X_IT);
TRANS(UI_CTEXT_XY_P3_Y_IT);
TRANS(UI_CTEXT_CONTINUE_IT);
TRANS(UI_CTEXT_START_PRINTING_IT);
TRANS(UI_CTEXT_PRINTXYCAL1_IT);  
TRANS(UI_CTEXT_PRINTXYCAL2_IT);
TRANS(UI_CTEXT_EXTZCAL1_IT); 
TRANS(UI_CTEXT_EXTZCAL2_IT);
TRANS(UI_CTEXT_PREHEATCOOL_IT); 
TRANS(UI_CTEXT_PREHEATCOOL2_IT); 
TRANS(UI_CTEXT_REMOVEBED_IT);
#endif

#define CUSTOM_TRANS_IT ,FUI_CTEXT_CALIBRATING_Z_OFFSET_IT,FUI_CTEXT_CALIBRATE_EXTRUDERS_IT,FUI_CTEXT_CALIBRATE_XY_IT,FUI_CTEXT_CALIBRATE_Z_IT \
  ,FUI_CTEXT_XY_P1_1_IT,FUI_CTEXT_XY_P1_2_IT,FUI_CTEXT_XY_P1_3_IT,FUI_CTEXT_XY_P3_1_IT,FUI_CTEXT_XY_P3_2_IT,FUI_CTEXT_XY_P3_X_IT,FUI_CTEXT_XY_P3_Y_IT,FUI_CTEXT_CONTINUE_IT,FUI_CTEXT_START_PRINTING_IT\
  ,FUI_CTEXT_PRINTXYCAL1_IT,FUI_CTEXT_PRINTXYCAL2_IT,FUI_CTEXT_EXTZCAL1_IT,FUI_CTEXT_EXTZCAL2_IT,FUI_CTEXT_PREHEATCOOL_IT,FUI_CTEXT_PREHEATCOOL2_IT,FUI_CTEXT_REMOVEBED_IT

// Swedish version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_SE "Calibrating Z offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_SE "Calibrate Extruders"
#define UI_CTEXT_CALIBRATE_XY_SE "Calibrate XY"
#define UI_CTEXT_CALIBRATE_Z_SE "Calibrate Z"
#define UI_CTEXT_XY_P1_1_SE "Please prepare the"
#define UI_CTEXT_XY_P1_2_SE "printer for PLA dual"
#define UI_CTEXT_XY_P1_3_SE "head printing"
#define UI_CTEXT_XY_P3_1_SE "Choose the best"
#define UI_CTEXT_XY_P3_2_SE "aligning XY values"
#define UI_CTEXT_XY_P3_X_SE "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_SE "Y Value         %w1"
#define UI_CTEXT_CONTINUE_SE "Continue"
#define UI_CTEXT_START_PRINTING_SE "Start Printing"
#define UI_CTEXT_PRINTXYCAL1_SE "   Printing"  
#define UI_CTEXT_PRINTXYCAL2_SE "xy calibration"
#define UI_CTEXT_EXTZCAL1_SE "    Calibrating" 
#define UI_CTEXT_EXTZCAL2_SE "     z offset"
#define UI_CTEXT_PREHEATCOOL_SE "Preheat/cool" 
#define UI_CTEXT_PREHEATCOOL2_SE "Dual Preheat/cool" 
#define UI_CTEXT_REMOVEBED_SE "Remove bed"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_SE);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_SE);
TRANS(UI_CTEXT_CALIBRATE_XY_SE);
TRANS(UI_CTEXT_CALIBRATE_Z_SE);
TRANS(UI_CTEXT_XY_P1_1_SE);
TRANS(UI_CTEXT_XY_P1_2_SE);
TRANS(UI_CTEXT_XY_P1_3_SE);
TRANS(UI_CTEXT_XY_P3_1_SE);
TRANS(UI_CTEXT_XY_P3_2_SE);
TRANS(UI_CTEXT_XY_P3_X_SE);
TRANS(UI_CTEXT_XY_P3_Y_SE);
TRANS(UI_CTEXT_CONTINUE_SE);
TRANS(UI_CTEXT_START_PRINTING_SE);
TRANS(UI_CTEXT_PRINTXYCAL1_SE);  
TRANS(UI_CTEXT_PRINTXYCAL2_SE);
TRANS(UI_CTEXT_EXTZCAL1_SE); 
TRANS(UI_CTEXT_EXTZCAL2_SE);
TRANS(UI_CTEXT_PREHEATCOOL_SE); 
TRANS(UI_CTEXT_PREHEATCOOL2_SE); 
TRANS(UI_CTEXT_REMOVEBED_SE);
#endif

#define CUSTOM_TRANS_SE ,FUI_CTEXT_CALIBRATING_Z_OFFSET_SE,FUI_CTEXT_CALIBRATE_EXTRUDERS_SE,FUI_CTEXT_CALIBRATE_XY_SE,FUI_CTEXT_CALIBRATE_Z_SE \
  ,FUI_CTEXT_XY_P1_1_SE,FUI_CTEXT_XY_P1_2_SE,FUI_CTEXT_XY_P1_3_SE,FUI_CTEXT_XY_P3_1_SE,FUI_CTEXT_XY_P3_2_SE,FUI_CTEXT_XY_P3_X_SE,FUI_CTEXT_XY_P3_Y_SE,FUI_CTEXT_CONTINUE_SE,FUI_CTEXT_START_PRINTING_SE\
  ,FUI_CTEXT_PRINTXYCAL1_SE,FUI_CTEXT_PRINTXYCAL2_SE,FUI_CTEXT_EXTZCAL1_SE,FUI_CTEXT_EXTZCAL2_SE,FUI_CTEXT_PREHEATCOOL_SE,FUI_CTEXT_PREHEATCOOL2_SE,FUI_CTEXT_REMOVEBED_SE

// Czech version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_CZ "Calibrating Z offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_CZ "Calibrate Extruders"
#define UI_CTEXT_CALIBRATE_XY_CZ "Calibrate XY"
#define UI_CTEXT_CALIBRATE_Z_CZ "Calibrate Z"
#define UI_CTEXT_XY_P1_1_CZ "Please prepare the"
#define UI_CTEXT_XY_P1_2_CZ "printer for PLA dual"
#define UI_CTEXT_XY_P1_3_CZ "head printing"
#define UI_CTEXT_XY_P3_1_CZ "Choose the best"
#define UI_CTEXT_XY_P3_2_CZ "aligning XY values"
#define UI_CTEXT_XY_P3_X_CZ "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_CZ "Y Value         %w1"
#define UI_CTEXT_CONTINUE_CZ "Continue"
#define UI_CTEXT_START_PRINTING_CZ "Start Printing"
#define UI_CTEXT_PRINTXYCAL1_CZ "   Printing"  
#define UI_CTEXT_PRINTXYCAL2_CZ "xy calibration"
#define UI_CTEXT_EXTZCAL1_CZ "    Calibrating" 
#define UI_CTEXT_EXTZCAL2_CZ "     z offset"
#define UI_CTEXT_PREHEATCOOL_CZ "Preheat/cool" 
#define UI_CTEXT_PREHEATCOOL2_CZ "Dual Preheat/cool" 
#define UI_CTEXT_REMOVEBED_CZ "Remove bed"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_CZ);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_CZ);
TRANS(UI_CTEXT_CALIBRATE_XY_CZ);
TRANS(UI_CTEXT_CALIBRATE_Z_CZ);
TRANS(UI_CTEXT_XY_P1_1_CZ);
TRANS(UI_CTEXT_XY_P1_2_CZ);
TRANS(UI_CTEXT_XY_P1_3_CZ);
TRANS(UI_CTEXT_XY_P3_1_CZ);
TRANS(UI_CTEXT_XY_P3_2_CZ);
TRANS(UI_CTEXT_XY_P3_X_CZ);
TRANS(UI_CTEXT_XY_P3_Y_CZ);
TRANS(UI_CTEXT_CONTINUE_CZ);
TRANS(UI_CTEXT_START_PRINTING_CZ);
TRANS(UI_CTEXT_PRINTXYCAL1_CZ);  
TRANS(UI_CTEXT_PRINTXYCAL2_CZ);
TRANS(UI_CTEXT_EXTZCAL1_CZ); 
TRANS(UI_CTEXT_EXTZCAL2_CZ);
TRANS(UI_CTEXT_PREHEATCOOL_CZ); 
TRANS(UI_CTEXT_PREHEATCOOL2_CZ); 
TRANS(UI_CTEXT_REMOVEBED_CZ);
#endif

#define CUSTOM_TRANS_CZ ,FUI_CTEXT_CALIBRATING_Z_OFFSET_CZ,FUI_CTEXT_CALIBRATE_EXTRUDERS_CZ,FUI_CTEXT_CALIBRATE_XY_CZ,FUI_CTEXT_CALIBRATE_Z_CZ \
  ,FUI_CTEXT_XY_P1_1_CZ,FUI_CTEXT_XY_P1_2_CZ,FUI_CTEXT_XY_P1_3_CZ,FUI_CTEXT_XY_P3_1_CZ,FUI_CTEXT_XY_P3_2_CZ,FUI_CTEXT_XY_P3_X_CZ,FUI_CTEXT_XY_P3_Y_CZ,FUI_CTEXT_CONTINUE_CZ,FUI_CTEXT_START_PRINTING_CZ\
  ,FUI_CTEXT_PRINTXYCAL1_CZ,FUI_CTEXT_PRINTXYCAL2_CZ,FUI_CTEXT_EXTZCAL1_CZ,FUI_CTEXT_EXTZCAL2_CZ,FUI_CTEXT_PREHEATCOOL_CZ,FUI_CTEXT_PREHEATCOOL2_CZ,FUI_CTEXT_REMOVEBED_CZ

// Polnish version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_PL "Calibrating Z offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_PL "Calibrate Extruders"
#define UI_CTEXT_CALIBRATE_XY_PL "Calibrate XY"
#define UI_CTEXT_CALIBRATE_Z_PL "Calibrate Z"
#define UI_CTEXT_XY_P1_1_PL "Please prepare the"
#define UI_CTEXT_XY_P1_2_PL "printer for PLA dual"
#define UI_CTEXT_XY_P1_3_PL "head printing"
#define UI_CTEXT_XY_P3_1_PL "Choose the best"
#define UI_CTEXT_XY_P3_2_PL "aligning XY values"
#define UI_CTEXT_XY_P3_X_PL "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_PL "Y Value         %w1"
#define UI_CTEXT_CONTINUE_PL "Continue"
#define UI_CTEXT_START_PRINTING_PL "Start Printing"
#define UI_CTEXT_PRINTXYCAL1_PL "   Printing"  
#define UI_CTEXT_PRINTXYCAL2_PL "xy calibration"
#define UI_CTEXT_EXTZCAL1_PL "    Calibrating" 
#define UI_CTEXT_EXTZCAL2_PL "     z offset"
#define UI_CTEXT_PREHEATCOOL_PL "Preheat/cool" 
#define UI_CTEXT_PREHEATCOOL2_PL "Dual Preheat/cool" 
#define UI_CTEXT_REMOVEBED_PL "Remove bed"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_PL);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_PL);
TRANS(UI_CTEXT_CALIBRATE_XY_PL);
TRANS(UI_CTEXT_CALIBRATE_Z_PL);
TRANS(UI_CTEXT_XY_P1_1_PL);
TRANS(UI_CTEXT_XY_P1_2_PL);
TRANS(UI_CTEXT_XY_P1_3_PL);
TRANS(UI_CTEXT_XY_P3_1_PL);
TRANS(UI_CTEXT_XY_P3_2_PL);
TRANS(UI_CTEXT_XY_P3_X_PL);
TRANS(UI_CTEXT_XY_P3_Y_PL);
TRANS(UI_CTEXT_CONTINUE_PL);
TRANS(UI_CTEXT_START_PRINTING_PL);
TRANS(UI_CTEXT_PRINTXYCAL1_PL);  
TRANS(UI_CTEXT_PRINTXYCAL2_PL);
TRANS(UI_CTEXT_EXTZCAL1_PL); 
TRANS(UI_CTEXT_EXTZCAL2_PL);
TRANS(UI_CTEXT_PREHEATCOOL_PL); 
TRANS(UI_CTEXT_PREHEATCOOL2_PL); 
TRANS(UI_CTEXT_REMOVEBED_PL);
#endif

#define CUSTOM_TRANS_PL ,FUI_CTEXT_CALIBRATING_Z_OFFSET_PL,FUI_CTEXT_CALIBRATE_EXTRUDERS_PL,FUI_CTEXT_CALIBRATE_XY_PL,FUI_CTEXT_CALIBRATE_Z_PL \
  ,FUI_CTEXT_XY_P1_1_PL,FUI_CTEXT_XY_P1_2_PL,FUI_CTEXT_XY_P1_3_PL,FUI_CTEXT_XY_P3_1_PL,FUI_CTEXT_XY_P3_2_PL,FUI_CTEXT_XY_P3_X_PL,FUI_CTEXT_XY_P3_Y_PL,FUI_CTEXT_CONTINUE_PL,FUI_CTEXT_START_PRINTING_PL\
  ,FUI_CTEXT_PRINTXYCAL1_PL,FUI_CTEXT_PRINTXYCAL2_PL,FUI_CTEXT_EXTZCAL1_PL,FUI_CTEXT_EXTZCAL2_PL,FUI_CTEXT_PREHEATCOOL_PL,FUI_CTEXT_PREHEATCOOL2_PL,FUI_CTEXT_REMOVEBED_PL

// Turk version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_TR "Calibrating Z offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_TR "Calibrate Extruders"
#define UI_CTEXT_CALIBRATE_XY_TR "Calibrate XY"
#define UI_CTEXT_CALIBRATE_Z_TR "Calibrate Z"
#define UI_CTEXT_XY_P1_1_TR "Please prepare the"
#define UI_CTEXT_XY_P1_2_TR "printer for PLA dual"
#define UI_CTEXT_XY_P1_3_TR "head printing"
#define UI_CTEXT_XY_P3_1_TR "Choose the best"
#define UI_CTEXT_XY_P3_2_TR "aligning XY values"
#define UI_CTEXT_XY_P3_X_TR "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_TR "Y Value         %w1"
#define UI_CTEXT_CONTINUE_TR "Continue"
#define UI_CTEXT_START_PRINTING_TR "Start Printing"
#define UI_CTEXT_PRINTXYCAL1_TR "   Printing"  
#define UI_CTEXT_PRINTXYCAL2_TR "xy calibration"
#define UI_CTEXT_EXTZCAL1_TR "    Calibrating" 
#define UI_CTEXT_EXTZCAL2_TR "     z offset"
#define UI_CTEXT_PREHEATCOOL_TR "Preheat/cool" 
#define UI_CTEXT_PREHEATCOOL2_TR "Dual Preheat/cool" 
#define UI_CTEXT_REMOVEBED_TR "Remove bed"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_TR);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_TR);
TRANS(UI_CTEXT_CALIBRATE_XY_TR);
TRANS(UI_CTEXT_CALIBRATE_Z_TR);
TRANS(UI_CTEXT_XY_P1_1_TR);
TRANS(UI_CTEXT_XY_P1_2_TR);
TRANS(UI_CTEXT_XY_P1_3_TR);
TRANS(UI_CTEXT_XY_P3_1_TR);
TRANS(UI_CTEXT_XY_P3_2_TR);
TRANS(UI_CTEXT_XY_P3_X_TR);
TRANS(UI_CTEXT_XY_P3_Y_TR);
TRANS(UI_CTEXT_CONTINUE_TR);
TRANS(UI_CTEXT_START_PRINTING_TR);
TRANS(UI_CTEXT_PRINTXYCAL1_TR);  
TRANS(UI_CTEXT_PRINTXYCAL2_TR);
TRANS(UI_CTEXT_EXTZCAL1_TR); 
TRANS(UI_CTEXT_EXTZCAL2_TR);
TRANS(UI_CTEXT_PREHEATCOOL_TR); 
TRANS(UI_CTEXT_PREHEATCOOL2_TR); 
TRANS(UI_CTEXT_REMOVEBED_TR);
#endif

#define CUSTOM_TRANS_TR ,FUI_CTEXT_CALIBRATING_Z_OFFSET_TR,FUI_CTEXT_CALIBRATE_EXTRUDERS_TR,FUI_CTEXT_CALIBRATE_XY_TR,FUI_CTEXT_CALIBRATE_Z_TR \
  ,FUI_CTEXT_XY_P1_1_TR,FUI_CTEXT_XY_P1_2_TR,FUI_CTEXT_XY_P1_3_TR,FUI_CTEXT_XY_P3_1_TR,FUI_CTEXT_XY_P3_2_TR,FUI_CTEXT_XY_P3_X_TR,FUI_CTEXT_XY_P3_Y_TR,FUI_CTEXT_CONTINUE_TR,FUI_CTEXT_START_PRINTING_TR\
  ,FUI_CTEXT_PRINTXYCAL1_TR,FUI_CTEXT_PRINTXYCAL2_TR,FUI_CTEXT_EXTZCAL1_TR,FUI_CTEXT_EXTZCAL2_TR,FUI_CTEXT_PREHEATCOOL_TR,FUI_CTEXT_PREHEATCOOL2_TR,FUI_CTEXT_REMOVEBED_TR

// Finish version

#define UI_CTEXT_CALIBRATING_Z_OFFSET_FI "Calibrating Z offset"
#define UI_CTEXT_CALIBRATE_EXTRUDERS_FI "Calibrate Extruders"
#define UI_CTEXT_CALIBRATE_XY_FI "Calibrate XY"
#define UI_CTEXT_CALIBRATE_Z_FI "Calibrate Z"
#define UI_CTEXT_XY_P1_1_FI "Please prepare the"
#define UI_CTEXT_XY_P1_2_FI "printer for PLA dual"
#define UI_CTEXT_XY_P1_3_FI "head printing"
#define UI_CTEXT_XY_P3_1_FI "Choose the best"
#define UI_CTEXT_XY_P3_2_FI "aligning XY values"
#define UI_CTEXT_XY_P3_X_FI "X Value         %w0"
#define UI_CTEXT_XY_P3_Y_FI "Y Value         %w1"
#define UI_CTEXT_CONTINUE_FI "Continue"
#define UI_CTEXT_START_PRINTING_FI "Start Printing"
#define UI_CTEXT_PRINTXYCAL1_FI "   Printing"  
#define UI_CTEXT_PRINTXYCAL2_FI "xy calibration"
#define UI_CTEXT_EXTZCAL1_FI "    Calibrating" 
#define UI_CTEXT_EXTZCAL2_FI "     z offset"
#define UI_CTEXT_PREHEATCOOL_FI "Preheat/cool" 
#define UI_CTEXT_PREHEATCOOL2_FI "Dual Preheat/cool" 
#define UI_CTEXT_REMOVEBED_FI "Remove bed"

#ifdef UILANG_CPP
TRANS(UI_CTEXT_CALIBRATING_Z_OFFSET_FI);
TRANS(UI_CTEXT_CALIBRATE_EXTRUDERS_FI);
TRANS(UI_CTEXT_CALIBRATE_XY_FI);
TRANS(UI_CTEXT_CALIBRATE_Z_FI);
TRANS(UI_CTEXT_XY_P1_1_FI);
TRANS(UI_CTEXT_XY_P1_2_FI);
TRANS(UI_CTEXT_XY_P1_3_FI);
TRANS(UI_CTEXT_XY_P3_1_FI);
TRANS(UI_CTEXT_XY_P3_2_FI);
TRANS(UI_CTEXT_XY_P3_X_FI);
TRANS(UI_CTEXT_XY_P3_Y_FI);
TRANS(UI_CTEXT_CONTINUE_FI);
TRANS(UI_CTEXT_START_PRINTING_FI);
TRANS(UI_CTEXT_PRINTXYCAL1_FI);  
TRANS(UI_CTEXT_PRINTXYCAL2_FI);
TRANS(UI_CTEXT_EXTZCAL1_FI); 
TRANS(UI_CTEXT_EXTZCAL2_FI);
TRANS(UI_CTEXT_PREHEATCOOL_FI); 
TRANS(UI_CTEXT_PREHEATCOOL2_FI); 
TRANS(UI_CTEXT_REMOVEBED_FI);
#endif

#define CUSTOM_TRANS_FI ,FUI_CTEXT_CALIBRATING_Z_OFFSET_FI,FUI_CTEXT_CALIBRATE_EXTRUDERS_FI,FUI_CTEXT_CALIBRATE_XY_FI,FUI_CTEXT_CALIBRATE_Z_FI \
  ,FUI_CTEXT_XY_P1_1_FI,FUI_CTEXT_XY_P1_2_FI,FUI_CTEXT_XY_P1_3_FI,FUI_CTEXT_XY_P3_1_FI,FUI_CTEXT_XY_P3_2_FI,FUI_CTEXT_XY_P3_X_FI,FUI_CTEXT_XY_P3_Y_FI,FUI_CTEXT_CONTINUE_FI,FUI_CTEXT_START_PRINTING_FI\
  ,FUI_CTEXT_PRINTXYCAL1_FI,FUI_CTEXT_PRINTXYCAL2_FI,FUI_CTEXT_EXTZCAL1_FI,FUI_CTEXT_EXTZCAL2_FI,FUI_CTEXT_PREHEATCOOL_FI,FUI_CTEXT_PREHEATCOOL2_FI,FUI_CTEXT_REMOVEBED_FI



/*
  You can also change the translations for existing text. Simply undef the
  existing translation text and define a new translation for the word.
*/