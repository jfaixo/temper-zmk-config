#include "36.h"
#include "keys_fr.h"

#pragma once

/ {
  combos {
    compatible = "zmk,combos";

    #define COMBO(NAME, BINDINGS, KEYPOS, TIMEOUT, LAYERS) \
    combo_##NAME { \
      timeout-ms = <TIMEOUT>; \
      bindings = <BINDINGS>; \
      key-positions = <KEYPOS>; \
      layers = <LAYERS>; \
    };

    // Modifiers
    COMBO(combo_caps_word,          &caps_word,               LB4 LB3,  35,   ALL_LAYERS)
    COMBO(combo_l_shift,            &smart_mod LSHIFT LSHIFT, LM4 LM3,  35,   ALL_LAYERS)
    COMBO(combo_l_ctrl,             &smart_mod LCTRL LCTRL,   LM3 LM2,  35,   ALL_LAYERS)
    COMBO(combo_l_alt,              &smart_mod LALT LALT,     LM2 LM1,  35,   ALL_LAYERS)
    
    // Common keys
    COMBO(combo_escape,             &kp ESC,                  LT4 LT3,  35,   ALL_LAYERS)
    
    COMBO(combo_left_parenthesis,   &kp FR_LEFT_PARENTHESIS,  RM1 RM2,  25,   ALL_LAYERS)
    COMBO(combo_right_parenthesis,  &kp FR_RIGHT_PARENTHESIS, RM2 RM3,  25,   ALL_LAYERS)
    COMBO(combo_left_bracket,       &kp FR_LEFT_BRACKET,      RT1 RT2,  25,   ALL_LAYERS)
    COMBO(combo_right_bracket,      &kp FR_RIGHT_BRACKET,     RT2 RT3,  25,   ALL_LAYERS)
    COMBO(combo_left_brace,         &kp FR_LEFT_BRACE,        RB1 RB2,  25,   ALL_LAYERS)
    COMBO(combo_right_brace,        &kp FR_RIGHT_BRACE,       RB2 RB3,  25,   ALL_LAYERS)

    COMBO(combo_double_quotes,      &kp FR_DOUBLE_QUOTES,     RT3 RT4,  25,   ALL_LAYERS)
    COMBO(combo_dash,               &kp FR_MINUS,        RM3 RM4,  25,   ALL_LAYERS)
    COMBO(combo_underscore,         &kp FR_UNDERSCORE,        RB3 RB4,  25,   ALL_LAYERS)

    // FR specific stuff
    COMBO(combo_e_acute,            &kp FR_E_ACUTE,           RM2 RT3,  25,   ALL_LAYERS)
    COMBO(combo_e_grave,            &kp FR_E_GRAVE,           RM2 RB3,  25,   ALL_LAYERS)
    COMBO(combo_a_grave,            &kp FR_A_GRAVE,           LM4 LB3,  25,   ALL_LAYERS)
    COMBO(combo_u_grave,            &kp FR_U_GRAVE,           RT2 RM3,  25,   ALL_LAYERS)
  };
};