#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  FR_LSPO,
  FR_RSPC,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    FR_SUP2,        TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    KC_BSPACE,      
    KC_TAB,         FR_A,           FR_Z,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_MEH,         KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    MT(MOD_LCTL, KC_ESCAPE),FR_Q,           KC_S,           KC_D,           KC_F,           KC_G,           KC_HYPR,                                                                        LSFT(KC_LCTRL), KC_H,           KC_J,           KC_K,           KC_L,           FR_M,           KC_ENTER,       
    KC_LSHIFT,      FR_W,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),   TD(DANCE_13),   KC_RSHIFT,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LGUI,        KC_LALT,        MT(MOD_LALT, KC_APPLICATION),                                                                                                KC_TRANSPARENT, KC_SPACE,       KC_BSPACE,      KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, 
    MO(1),          KC_TRANSPARENT, TG(1),                          TG(2),          KC_ENTER,       MO(2)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          RESET,                                          KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          TD(DANCE_19),   TD(DANCE_20),   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_14),   FR_APOS,        TD(DANCE_15),   FR_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, FR_AT,          FR_PIPE,        FR_GRV,         FR_ASTR,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, FR_SUP2,        KC_TRANSPARENT, FR_DQUO,        TD(DANCE_16),   FR_HASH,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, TD(DANCE_21),   FR_MINS,        FR_UNDS,        FR_EQL,         FR_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, TD(DANCE_17),   KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_18),   KC_TRANSPARENT,                                 FR_BSLS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 TG(3),          KC_TRANSPARENT, MO(3)
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, FR_EGRV,        FR_EURO,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, FR_EACU,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, FR_CCED,        KC_TRANSPARENT, KC_TRANSPARENT,                                 RCTL(KC_LEFT),  KC_TRANSPARENT, KC_TRANSPARENT, RCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MO(3),          KC_TRANSPARENT, TG(3),                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, FR_7,           FR_8,           FR_9,           FR_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, FR_4,           FR_5,           FR_6,           FR_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 FR_EQL,         TD(DANCE_22),   TD(DANCE_23),   FR_3,           FR_SLSH,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, FR_0,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    AU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,          
    MU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MU_MOD,         KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,204,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,204,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,204,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,204,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,204,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,204,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,204,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,204,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,204,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,204,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {82,218,204}, {152,255,255}, {0,0,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {102,145,180}, {0,0,134}, {0,0,134}, {0,0,134}, {0,0,0}, {102,145,180}, {0,0,134}, {0,0,134}, {0,0,134}, {0,0,0}, {102,145,180}, {0,0,134}, {0,0,134}, {0,0,134}, {0,0,0}, {102,145,180}, {0,0,134}, {0,0,134}, {0,0,134}, {0,0,0}, {102,145,180}, {0,0,134}, {0,0,134}, {0,0,134}, {0,218,204}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {102,145,180}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {102,145,180}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {102,145,180}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {102,145,180}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {102,145,180}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {26,241,169}, {0,0,0}, {26,241,169}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {26,241,169}, {0,0,0}, {26,241,169}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {146,248,209}, {102,145,180}, {0,0,0}, {0,0,0}, {0,0,0}, {146,248,209}, {102,145,180}, {0,0,0}, {0,0,0}, {0,0,0}, {146,248,209}, {102,145,180}, {0,0,0}, {0,0,0}, {0,0,0}, {146,248,209}, {102,145,180}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {152,255,255}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {42,254,255}, {42,254,255}, {42,254,255}, {42,254,255}, {0,0,0}, {42,254,255}, {42,254,255}, {42,254,255}, {0,0,0}, {0,0,0}, {42,254,255}, {42,254,255}, {42,254,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[24];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_AMP);
        tap_code16(FR_AMP);
        tap_code16(FR_AMP);
    }
    if(state->count > 3) {
        tap_code16(FR_AMP);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(FR_AMP); break;
        case SINGLE_HOLD: register_code16(FR_1); break;
        case DOUBLE_TAP: register_code16(FR_AMP); register_code16(FR_AMP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_AMP); register_code16(FR_AMP);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(FR_AMP); break;
        case SINGLE_HOLD: unregister_code16(FR_1); break;
        case DOUBLE_TAP: unregister_code16(FR_AMP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_AMP); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_EACU);
        tap_code16(FR_EACU);
        tap_code16(FR_EACU);
    }
    if(state->count > 3) {
        tap_code16(FR_EACU);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(FR_EACU); break;
        case SINGLE_HOLD: register_code16(FR_2); break;
        case DOUBLE_TAP: register_code16(FR_EACU); register_code16(FR_EACU); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_EACU); register_code16(FR_EACU);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(FR_EACU); break;
        case SINGLE_HOLD: unregister_code16(FR_2); break;
        case DOUBLE_TAP: unregister_code16(FR_EACU); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_EACU); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_DQUO);
        tap_code16(FR_DQUO);
        tap_code16(FR_DQUO);
    }
    if(state->count > 3) {
        tap_code16(FR_DQUO);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(FR_DQUO); break;
        case SINGLE_HOLD: register_code16(FR_3); break;
        case DOUBLE_TAP: register_code16(FR_DQUO); register_code16(FR_DQUO); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_DQUO); register_code16(FR_DQUO);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(FR_DQUO); break;
        case SINGLE_HOLD: unregister_code16(FR_3); break;
        case DOUBLE_TAP: unregister_code16(FR_DQUO); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_DQUO); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_APOS);
        tap_code16(FR_APOS);
        tap_code16(FR_APOS);
    }
    if(state->count > 3) {
        tap_code16(FR_APOS);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(FR_APOS); break;
        case SINGLE_HOLD: register_code16(FR_4); break;
        case DOUBLE_TAP: register_code16(FR_APOS); register_code16(FR_APOS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_APOS); register_code16(FR_APOS);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(FR_APOS); break;
        case SINGLE_HOLD: unregister_code16(FR_4); break;
        case DOUBLE_TAP: unregister_code16(FR_APOS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_APOS); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_LPRN);
        tap_code16(FR_LPRN);
        tap_code16(FR_LPRN);
    }
    if(state->count > 3) {
        tap_code16(FR_LPRN);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(FR_LPRN); break;
        case SINGLE_HOLD: register_code16(FR_5); break;
        case DOUBLE_TAP: register_code16(FR_LPRN); register_code16(FR_LPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_LPRN); register_code16(FR_LPRN);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(FR_LPRN); break;
        case SINGLE_HOLD: unregister_code16(FR_5); break;
        case DOUBLE_TAP: unregister_code16(FR_LPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_LPRN); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_MINS);
        tap_code16(FR_MINS);
        tap_code16(FR_MINS);
    }
    if(state->count > 3) {
        tap_code16(FR_MINS);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(FR_MINS); break;
        case SINGLE_HOLD: register_code16(FR_6); break;
        case DOUBLE_TAP: register_code16(FR_MINS); register_code16(FR_MINS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_MINS); register_code16(FR_MINS);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(FR_MINS); break;
        case SINGLE_HOLD: unregister_code16(FR_6); break;
        case DOUBLE_TAP: unregister_code16(FR_MINS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_MINS); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_EGRV);
        tap_code16(FR_EGRV);
        tap_code16(FR_EGRV);
    }
    if(state->count > 3) {
        tap_code16(FR_EGRV);
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(FR_EGRV); break;
        case SINGLE_HOLD: register_code16(FR_7); break;
        case DOUBLE_TAP: register_code16(FR_EGRV); register_code16(FR_EGRV); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_EGRV); register_code16(FR_EGRV);
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(FR_EGRV); break;
        case SINGLE_HOLD: unregister_code16(FR_7); break;
        case DOUBLE_TAP: unregister_code16(FR_EGRV); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_EGRV); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_UNDS);
        tap_code16(FR_UNDS);
        tap_code16(FR_UNDS);
    }
    if(state->count > 3) {
        tap_code16(FR_UNDS);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(FR_UNDS); break;
        case SINGLE_HOLD: register_code16(FR_8); break;
        case DOUBLE_TAP: register_code16(FR_UNDS); register_code16(FR_UNDS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_UNDS); register_code16(FR_UNDS);
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(FR_UNDS); break;
        case SINGLE_HOLD: unregister_code16(FR_8); break;
        case DOUBLE_TAP: unregister_code16(FR_UNDS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_UNDS); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(qk_tap_dance_state_t *state, void *user_data);
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_CCED);
        tap_code16(FR_CCED);
        tap_code16(FR_CCED);
    }
    if(state->count > 3) {
        tap_code16(FR_CCED);
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(FR_CCED); break;
        case SINGLE_HOLD: register_code16(FR_9); break;
        case DOUBLE_TAP: register_code16(FR_CCED); register_code16(FR_CCED); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_CCED); register_code16(FR_CCED);
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(FR_CCED); break;
        case SINGLE_HOLD: unregister_code16(FR_9); break;
        case DOUBLE_TAP: unregister_code16(FR_CCED); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_CCED); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_AGRV);
        tap_code16(FR_AGRV);
        tap_code16(FR_AGRV);
    }
    if(state->count > 3) {
        tap_code16(FR_AGRV);
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(FR_AGRV); break;
        case SINGLE_HOLD: register_code16(FR_0); break;
        case DOUBLE_TAP: register_code16(FR_AGRV); register_code16(FR_AGRV); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_AGRV); register_code16(FR_AGRV);
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(FR_AGRV); break;
        case SINGLE_HOLD: unregister_code16(FR_0); break;
        case DOUBLE_TAP: unregister_code16(FR_AGRV); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_AGRV); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(qk_tap_dance_state_t *state, void *user_data);
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_COMM);
        tap_code16(FR_COMM);
        tap_code16(FR_COMM);
    }
    if(state->count > 3) {
        tap_code16(FR_COMM);
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(FR_COMM); break;
        case SINGLE_HOLD: register_code16(FR_QUES); break;
        case DOUBLE_TAP: register_code16(FR_COMM); register_code16(FR_COMM); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_COMM); register_code16(FR_COMM);
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(FR_COMM); break;
        case SINGLE_HOLD: unregister_code16(FR_QUES); break;
        case DOUBLE_TAP: unregister_code16(FR_COMM); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_COMM); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(qk_tap_dance_state_t *state, void *user_data);
void dance_11_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_11_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_11(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_SCLN);
        tap_code16(FR_SCLN);
        tap_code16(FR_SCLN);
    }
    if(state->count > 3) {
        tap_code16(FR_SCLN);
    }
}

void dance_11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(FR_SCLN); break;
        case SINGLE_HOLD: register_code16(FR_DOT); break;
        case DOUBLE_TAP: register_code16(FR_SCLN); register_code16(FR_SCLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_SCLN); register_code16(FR_SCLN);
    }
}

void dance_11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(FR_SCLN); break;
        case SINGLE_HOLD: unregister_code16(FR_DOT); break;
        case DOUBLE_TAP: unregister_code16(FR_SCLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_SCLN); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(qk_tap_dance_state_t *state, void *user_data);
void dance_12_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_12_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_12(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_COLN);
        tap_code16(FR_COLN);
        tap_code16(FR_COLN);
    }
    if(state->count > 3) {
        tap_code16(FR_COLN);
    }
}

void dance_12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(FR_COLN); break;
        case SINGLE_HOLD: register_code16(FR_SLSH); break;
        case DOUBLE_TAP: register_code16(FR_COLN); register_code16(FR_COLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_COLN); register_code16(FR_COLN);
    }
}

void dance_12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(FR_COLN); break;
        case SINGLE_HOLD: unregister_code16(FR_SLSH); break;
        case DOUBLE_TAP: unregister_code16(FR_COLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_COLN); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(qk_tap_dance_state_t *state, void *user_data);
void dance_13_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_13_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_13(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_EXLM);
        tap_code16(FR_EXLM);
        tap_code16(FR_EXLM);
    }
    if(state->count > 3) {
        tap_code16(FR_EXLM);
    }
}

void dance_13_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(FR_EXLM); break;
        case SINGLE_HOLD: register_code16(FR_SECT); break;
        case DOUBLE_TAP: register_code16(FR_EXLM); register_code16(FR_EXLM); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_EXLM); register_code16(FR_EXLM);
    }
}

void dance_13_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(FR_EXLM); break;
        case SINGLE_HOLD: unregister_code16(FR_SECT); break;
        case DOUBLE_TAP: unregister_code16(FR_EXLM); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_EXLM); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(qk_tap_dance_state_t *state, void *user_data);
void dance_14_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_14_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_14(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_AMP);
        tap_code16(FR_AMP);
        tap_code16(FR_AMP);
    }
    if(state->count > 3) {
        tap_code16(FR_AMP);
    }
}

void dance_14_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(FR_AMP); break;
        case SINGLE_HOLD: register_code16(LSFT(FR_SUP2)); break;
        case DOUBLE_TAP: register_code16(FR_AMP); register_code16(FR_AMP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_AMP); register_code16(FR_AMP);
    }
}

void dance_14_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(FR_AMP); break;
        case SINGLE_HOLD: unregister_code16(LSFT(FR_SUP2)); break;
        case DOUBLE_TAP: unregister_code16(FR_AMP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_AMP); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(qk_tap_dance_state_t *state, void *user_data);
void dance_15_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_15_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_15(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_LCBR);
        tap_code16(FR_LCBR);
        tap_code16(FR_LCBR);
    }
    if(state->count > 3) {
        tap_code16(FR_LCBR);
    }
}

void dance_15_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(FR_LCBR); break;
        case SINGLE_HOLD: register_code16(FR_RCBR); break;
        case DOUBLE_TAP: register_code16(FR_LCBR); register_code16(FR_LCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_LCBR); register_code16(FR_LCBR);
    }
}

void dance_15_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(FR_LCBR); break;
        case SINGLE_HOLD: unregister_code16(FR_RCBR); break;
        case DOUBLE_TAP: unregister_code16(FR_LCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_LCBR); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(qk_tap_dance_state_t *state, void *user_data);
void dance_16_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_16_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_16(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_LPRN);
        tap_code16(FR_LPRN);
        tap_code16(FR_LPRN);
    }
    if(state->count > 3) {
        tap_code16(FR_LPRN);
    }
}

void dance_16_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(FR_LPRN); break;
        case SINGLE_HOLD: register_code16(FR_RPRN); break;
        case DOUBLE_TAP: register_code16(FR_LPRN); register_code16(FR_LPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_LPRN); register_code16(FR_LPRN);
    }
}

void dance_16_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(FR_LPRN); break;
        case SINGLE_HOLD: unregister_code16(FR_RPRN); break;
        case DOUBLE_TAP: unregister_code16(FR_LPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_LPRN); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(qk_tap_dance_state_t *state, void *user_data);
void dance_17_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_17_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_17(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_LESS);
        tap_code16(FR_LESS);
        tap_code16(FR_LESS);
    }
    if(state->count > 3) {
        tap_code16(FR_LESS);
    }
}

void dance_17_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(FR_LESS); break;
        case SINGLE_HOLD: register_code16(FR_GRTR); break;
        case DOUBLE_TAP: register_code16(FR_LESS); register_code16(FR_LESS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_LESS); register_code16(FR_LESS);
    }
}

void dance_17_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(FR_LESS); break;
        case SINGLE_HOLD: unregister_code16(FR_GRTR); break;
        case DOUBLE_TAP: unregister_code16(FR_LESS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_LESS); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(qk_tap_dance_state_t *state, void *user_data);
void dance_18_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_18_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_18(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_LBRC);
        tap_code16(FR_LBRC);
        tap_code16(FR_LBRC);
    }
    if(state->count > 3) {
        tap_code16(FR_LBRC);
    }
}

void dance_18_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(FR_LBRC); break;
        case SINGLE_HOLD: register_code16(FR_RBRC); break;
        case DOUBLE_TAP: register_code16(FR_LBRC); register_code16(FR_LBRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_LBRC); register_code16(FR_LBRC);
    }
}

void dance_18_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(FR_LBRC); break;
        case SINGLE_HOLD: unregister_code16(FR_RBRC); break;
        case DOUBLE_TAP: unregister_code16(FR_LBRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_LBRC); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(qk_tap_dance_state_t *state, void *user_data);
void dance_19_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_19_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_19(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F9);
        tap_code16(KC_F9);
        tap_code16(KC_F9);
    }
    if(state->count > 3) {
        tap_code16(KC_F9);
    }
}

void dance_19_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(KC_F9); break;
        case SINGLE_HOLD: register_code16(KC_F11); break;
        case DOUBLE_TAP: register_code16(KC_F9); register_code16(KC_F9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F9); register_code16(KC_F9);
    }
}

void dance_19_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(KC_F9); break;
        case SINGLE_HOLD: unregister_code16(KC_F11); break;
        case DOUBLE_TAP: unregister_code16(KC_F9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F9); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(qk_tap_dance_state_t *state, void *user_data);
void dance_20_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_20_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_20(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F10);
        tap_code16(KC_F10);
        tap_code16(KC_F10);
    }
    if(state->count > 3) {
        tap_code16(KC_F10);
    }
}

void dance_20_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(KC_F10); break;
        case SINGLE_HOLD: register_code16(KC_F12); break;
        case DOUBLE_TAP: register_code16(KC_F10); register_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F10); register_code16(KC_F10);
    }
}

void dance_20_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(KC_F10); break;
        case SINGLE_HOLD: unregister_code16(KC_F12); break;
        case DOUBLE_TAP: unregister_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F10); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(qk_tap_dance_state_t *state, void *user_data);
void dance_21_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_21_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_21(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_CCIRC);
        tap_code16(FR_CCIRC);
        tap_code16(FR_CCIRC);
    }
    if(state->count > 3) {
        tap_code16(FR_CCIRC);
    }
}

void dance_21_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(FR_CCIRC); break;
        case SINGLE_HOLD: register_code16(FR_DLR); break;
        case DOUBLE_TAP: register_code16(FR_CCIRC); register_code16(FR_CCIRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_CCIRC); register_code16(FR_CCIRC);
    }
}

void dance_21_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(FR_CCIRC); break;
        case SINGLE_HOLD: unregister_code16(FR_DLR); break;
        case DOUBLE_TAP: unregister_code16(FR_CCIRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_CCIRC); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(qk_tap_dance_state_t *state, void *user_data);
void dance_22_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_22_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_22(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_1);
        tap_code16(FR_1);
        tap_code16(FR_1);
    }
    if(state->count > 3) {
        tap_code16(FR_1);
    }
}

void dance_22_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(FR_1); break;
        case SINGLE_HOLD: register_code16(FR_COMM); break;
        case DOUBLE_TAP: register_code16(FR_1); register_code16(FR_1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_1); register_code16(FR_1);
    }
}

void dance_22_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(FR_1); break;
        case SINGLE_HOLD: unregister_code16(FR_COMM); break;
        case DOUBLE_TAP: unregister_code16(FR_1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_1); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(qk_tap_dance_state_t *state, void *user_data);
void dance_23_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_23_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_23(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_2);
        tap_code16(FR_2);
        tap_code16(FR_2);
    }
    if(state->count > 3) {
        tap_code16(FR_2);
    }
}

void dance_23_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(FR_2); break;
        case SINGLE_HOLD: register_code16(FR_DOT); break;
        case DOUBLE_TAP: register_code16(FR_2); register_code16(FR_2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_2); register_code16(FR_2);
    }
}

void dance_23_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(FR_2); break;
        case SINGLE_HOLD: unregister_code16(FR_DOT); break;
        case DOUBLE_TAP: unregister_code16(FR_2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_2); break;
    }
    dance_state[23].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
};

