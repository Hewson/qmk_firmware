#include QMK_KEYBOARD_H
//test
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

#define KC_UNDO LGUI(KC_Z)
#define KC_CUT LGUI(KC_X)
#define KC_COPY LGUI(KC_C)
#define KC_PASTE LGUI(KC_V)
#define KC_BOLD LGUI(KC_B)
#define KC_RELOAD LGUI(KC_R)
#define KC_REDO LGUI(LSFT(KC_Z))
#define KC_REDOTAB LGUI(LSFT(KC_T))
#define KC_FIND LGUI(KC_F)
#define KC_PASTEONLY LSFT(LALT(LGUI(KC_V)))
#define KC_CPLINK LGUI(LSFT(KC_C))
#define KC_PUP LCTL(LALT(KC_UP))
#define KC_PDOWN LCTL(LALT(KC_DOWN))
#define KC_RAY LSFT(LGUI(LCTL(LALT(KC_SPC))))
#define KC_ALTTAB LGUI((KC_TAB))
#define DELWORD LALT(KC_BSPC)
 
enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST
};

enum combos {
  A_S_D_Back,
  S_D_F_Forwards,
  D_F_G_Find,
  J_K_L_CommandL,
  H_J_K_CommandComma,
  Q_W_E_Minimise,
  Z_X_Undo,
  X_C_Copy,
  X_V_Paste,
  Z_C_Cut,
  Z_B_SelectAll,
  J_K_Commandpalette,
  J_L_CommandO,
  J_N_CommandN,
  Q_W_CommandW,
  Q_R_CommandR,
  Q_E_CommandHyphen,
  Q_T_CommandS,
  Q_P_Quit
};

const uint16_t PROGMEM A_S_D_combo[] = {KC_A, KC_S,KC_D, COMBO_END};
const uint16_t PROGMEM S_D_F_combo[] = {KC_S, KC_D,LT(1,KC_F), COMBO_END};
const uint16_t PROGMEM D_F_G_combo[] = {KC_D, KC_G,LT(1,KC_F), COMBO_END};
const uint16_t PROGMEM J_K_L_combo[] = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM H_J_K_combo[] = {KC_H, KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM Q_W_E_combo[] = {KC_Q, KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM Z_X_combo[]   = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM X_C_combo[]   = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM X_V_combo[]   = {KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM Z_C_combo[]   = {KC_Z, KC_C, COMBO_END};
const uint16_t PROGMEM Z_B_combo[]   = {KC_Z, KC_B, COMBO_END};
const uint16_t PROGMEM J_K_combo[]   = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM J_L_combo[]   = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM J_N_combo[]   = {KC_J, KC_N, COMBO_END};
const uint16_t PROGMEM Q_W_combo[]   = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM Q_R_combo[]   = {KC_Q, KC_R, COMBO_END};
const uint16_t PROGMEM Q_E_combo[]   = {KC_Q, KC_E, COMBO_END};
const uint16_t PROGMEM Q_T_combo[]   = {KC_Q, KC_T, COMBO_END};
const uint16_t PROGMEM Q_P_combo[]   = {KC_Q, KC_P, COMBO_END};

combo_t key_combos[] = {
  [A_S_D_Back]          = COMBO(A_S_D_combo, LGUI(KC_LBRC)),
  [S_D_F_Forwards]      = COMBO(S_D_F_combo, LGUI(KC_RBRC)),
  [D_F_G_Find]          = COMBO(D_F_G_combo, LGUI(KC_F)),
  [J_K_L_CommandL]      = COMBO(J_K_L_combo, LGUI(KC_L)),
  [H_J_K_CommandComma]  = COMBO(H_J_K_combo, LGUI(KC_COMM)),
  [Q_W_E_Minimise]      = COMBO(Q_W_E_combo, LGUI(KC_M)),
  [Z_X_Undo]            = COMBO(Z_X_combo,   LGUI(KC_Z)),
  [X_C_Copy]            = COMBO(X_C_combo,   LGUI(KC_C)),
  [X_V_Paste]           = COMBO(X_V_combo,   LGUI(KC_V)),
  [Z_C_Cut]             = COMBO(Z_C_combo,   LGUI(KC_X)),
  [Z_B_SelectAll]       = COMBO(Z_B_combo,   LGUI(KC_A)),
  [J_K_Commandpalette]  = COMBO(J_K_combo,   LGUI(KC_K)),
  [J_L_CommandO]        = COMBO(J_L_combo,   LGUI(KC_O)),
  [J_N_CommandN]        = COMBO(J_N_combo,   LGUI(KC_N)),
  [Q_W_CommandW]        = COMBO(Q_W_combo,   LGUI(KC_W)),
  [Q_R_CommandR]        = COMBO(Q_R_combo,   LGUI(KC_R)),
  [Q_E_CommandHyphen]   = COMBO(Q_E_combo,   LGUI(KC_MINS)),
  [Q_T_CommandS]        = COMBO(Q_T_combo,   LGUI(KC_S)),
  [Q_P_Quit]            = COMBO(Q_P_combo,   LGUI(KC_Q))
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
MEH_T(KC_TAB), KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
HYPR_T(KC_ESC),KC_A,   KC_S,    KC_D,    LT(1,KC_F), KC_G,                            KC_H,    KC_J,    KC_K,    KC_L,    LT(3,KC_SCLN), KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    KC_RAY,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,          _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                            LGUI_T(KC_MPLY),KC_LSFT,LT(1,KC_BSPC),           LT(3,KC_SPC),DELWORD, RGUI_T(KC_MFFD)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______,  _______, _______, _______, _______, _______,                           _______,  _______, _______,_______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, KC_PASTEONLY, KC_REDO, KC_REDOTAB,                    KC_PUP,  KC_ALTTAB,KC_UP,  XXXXXXX, KC_BRIU, LGUI(KC_EQL),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
OSM(MOD_LCTL),OSM(MOD_LSFT),OSM(MOD_LALT),OSM(MOD_LGUI),_______,_______,              KC_PDOWN,KC_LEFT, KC_DOWN, KC_RGHT, KC_BRID, LGUI(KC_MINS),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  KC_CPLINK, KC_UNDO, KC_CUT,  KC_COPY, KC_PASTE, KC_BOLD, _______,          _______, KC_DEL,  XXXXXXX, KC_VOLD, KC_VOLU, KC_MFFD, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, KC_BSPC, TO(2)   
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______,_______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  _______, _______, _______,RGB_MODE_PLAIN,KC_RELOAD,QK_BOOTLOADER,              KC_PUP,KC_MS_BTN1,KC_MS_UP,KC_MS_BTN2,KC_MS_WH_RIGHT,KC_MS_WH_LEFT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, _______, _______,                       KC_PDOWN,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,_______,_______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, KC_MRWD, KC_MFFD, KC_MPLY, _______,         _______,_______,KC_MS_WH_UP,_______,KC_MS_WH_DOWN,_______,_______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   KC_MS_BTN1, TO(0), TO(3)   
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
KC_GRV,LSFT(KC_1),LSFT(KC_2),LSFT(KC_8),LSFT(KC_LBRC),LSFT(KC_RBRC),                  KC_MINS, KC_7,    KC_8,    KC_9,    XXXXXXX, KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
_______,LSFT(KC_4),LSFT(KC_5),LSFT(KC_7),XXXXXXX,LSFT(KC_9),                      LSFT(KC_0),  KC_4,    KC_5,    KC_6,    KC_DOT,  KC_BACKSLASH,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
_______, XXXXXXX,LSFT(KC_3), LSFT(KC_6), KC_LBRC, KC_RBRC, _______,          _______, KC_0,    KC_1,    KC_2,    KC_3,    XXXXXXX, LGUI(KC_ENT),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, KC_BSPC, TO(0)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
/*  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_ADJUST);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    }*/
    // Process other keycodes normally
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _RAISE:
            rgblight_sethsv(HSV_PURPLE);
            break;
        case _LOWER:
            rgblight_sethsv(HSV_CYAN);
            break;
        case _ADJUST:
            rgblight_sethsv(HSV_BLUE);
            break;        
        default: // for any other layers, or the default layer
            rgblight_sethsv (HSV_OFF);
            break;
    }
  return state;
}
