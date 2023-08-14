#include QMK_KEYBOARD_H
#include "features/achordion.h"

#define _GRAPHITE 0
#define _QWERTY 1
#define _LOWER 2
#define _RAISE 3
#define _ADJUST 4

#define KC_UNDO     G(KC_Z)
#define KC_CUT      G(KC_X)
#define KC_COPY     G(KC_C)
#define KC_PASTE    G(KC_V)
#define KC_BOLD     G(KC_B)
#define KC_RFRSH    G(KC_R)
#define KC_REDO     G(LSFT(KC_Z))
#define KC_REDOTAB  G(LSFT(KC_T))
#define KC_FIND     G(KC_F)
#define KC_TPASTE   LSFT(LALT(G(KC_V)))
#define KC_CPLINK   G(LSFT(KC_C))
#define KC_PUP      LCTL(LALT(KC_UP))
#define KC_PDOWN    LCTL(LALT(KC_DOWN))
#define KC_RAY      LSFT(G(LCTL(LALT(KC_SPC))))
#define KC_ALTTAB   G((KC_TAB))
#define DELWORD     LALT(KC_BSPC)
 
enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  SELLINE
};

//QWERTY
/*
enum combos {
//homerow left 3 keys
  A_S_D_Back,
  S_D_F_Forwards,
  D_F_G_Find,
//homerow right 3 keys
  J_K_L_Brackets,
  H_J_K_CommandComma,
  K_L_Semi_CommandComma,
//top row left 3 keys  
  Q_W_E_Minimise,
//bottom row left  
  Z_X_Undo,
  X_C_Copy,
  X_V_Paste,
  Z_C_Cut,
  Z_B_SelectAll,
//home row right  
  J_K_Commandpalette,
  J_L_CommandO,
 //diagonal
  J_N_CommandN,
//top row right
  Q_W_CommandW,
  Q_R_CommandR,
  Q_E_HyperHyphen,
  Q_T_CommandS,
//both sides
  Q_P_Quit
};
*/


//COLEMAK-DH
/*
enum combos {
//homerow left 3 keys
  A_R_S_Back,
  R_S_T_Forwards,
  S_T_G_Find,
//homerow right 3 keys
  N_E_I_Brackets,
  J_M_CommandComma, //new
  J_L_CommandK,
//top row left 3 keys  
  Q_W_F_Minimise,
//bottom row left  
  Z_X_Undo,
  X_C_Copy,
  X_D_Paste,
  Z_C_Cut,
  Z_V_SelectAll,
//home row right  
  K_H_CommandL,
  J_Y_CommandO,
 //diagonal
  J_N_CommandN,
//top row right
  Q_W_CommandW,
  Q_P_CommandR,
  Q_F_HyperHyphen,
  Q_B_CommandS,
//both sides
  Q_Semi_Quit
};
*/

//GRAPHITE
enum combos {
//homerow left 3 keys
  NRT_Back,
  RTS_Forwards,
  TSG_Find,
//homerow right 3 keys
  HAE_Brackets,
  SemiY_CommandComma, //new
  SemiF_CommandK,
//top row left 3 keys  
  DWZ_Minimise,
//bottom row left  
  QX_Undo,
  XM_Copy,
  XC_Paste,
  QM_Cut,
  QV_SelectAll,
//home row right  
  AEI_CommandL,
  SemiO_CommandO,
 //diagonal
  SemiH_CommandN,
//top row right
  WZ_CommandW,
  ZG_CommandR,
  LDW_HyperHyphen,
  BZ_CommandS,
//both sides
  BJ_Quit
};


//QWERTY
/*
const uint16_t PROGMEM A_S_D_combo[]      = {LT(4,KC_D),     MEH_T(KC_A),   KC_S,              COMBO_END};
const uint16_t PROGMEM S_D_F_combo[]      = {LT(2,KC_F),     KC_S,          LT(4,KC_D),        COMBO_END};
const uint16_t PROGMEM D_F_G_combo[]      = {LT(2,KC_F),     LT(4,KC_D),    KC_G,              COMBO_END};
const uint16_t PROGMEM H_J_K_combo[]      = {LT(3,KC_J),     KC_H,          LT(2,KC_K),              COMBO_END};
const uint16_t PROGMEM J_K_L_combo[]      = {LT(3,KC_J),     LT(2,KC_K),          KC_L,              COMBO_END};
const uint16_t PROGMEM K_L_Semi_combo[]   = {LT(2,KC_K),           KC_L,          RCMD_T(KC_SCLN),   COMBO_END};
const uint16_t PROGMEM Q_W_E_combo[]      = {KC_Q,           KC_W,          KC_E,              COMBO_END};
const uint16_t PROGMEM Z_X_combo[]        = {KC_Z,           KC_X,                             COMBO_END};
const uint16_t PROGMEM X_C_combo[]        = {KC_X,           KC_C,                             COMBO_END};
const uint16_t PROGMEM X_V_combo[]        = {KC_X,           KC_V,                             COMBO_END};
const uint16_t PROGMEM Z_C_combo[]        = {KC_Z,           KC_C,                             COMBO_END};
const uint16_t PROGMEM Z_B_combo[]        = {KC_Z,           KC_B,                             COMBO_END};
const uint16_t PROGMEM J_K_combo[]        = {LT(3,KC_J),     LT(2,KC_K),                             COMBO_END};
const uint16_t PROGMEM J_L_combo[]        = {LT(3,KC_J),     KC_L,                             COMBO_END};
const uint16_t PROGMEM J_N_combo[]        = {LT(3,KC_J),     KC_N,                             COMBO_END};
const uint16_t PROGMEM Q_W_combo[]        = {KC_Q,           KC_W,                             COMBO_END};
const uint16_t PROGMEM Q_R_combo[]        = {KC_Q,           KC_R,                             COMBO_END};
const uint16_t PROGMEM Q_E_combo[]        = {KC_Q,           KC_E,                             COMBO_END};
const uint16_t PROGMEM Q_T_combo[]        = {KC_Q,           KC_T,                             COMBO_END};
const uint16_t PROGMEM Q_P_combo[]        = {KC_Q,           KC_P,                             COMBO_END};
*/


//COLEMAK-DH
/*
const uint16_t PROGMEM A_R_S_combo[]      = {MEH_T(KC_A),     KC_R,             LT(4,KC_S),        COMBO_END};
const uint16_t PROGMEM R_S_T_combo[]      = {KC_R,            LT(4,KC_S),       LT(2,KC_T),        COMBO_END};
const uint16_t PROGMEM S_T_G_combo[]      = {LT(4,KC_S),      LT(2,KC_T),       KC_G,              COMBO_END};
const uint16_t PROGMEM J_M_combo[]        = {KC_M,            KC_J,                                COMBO_END};
const uint16_t PROGMEM N_E_I_combo[]      = {LT(3,KC_N),      LT(2,KC_E),       KC_I,              COMBO_END};
const uint16_t PROGMEM J_L_combo[]        = {KC_J,            KC_L,                                COMBO_END};
const uint16_t PROGMEM Q_W_F_combo[]      = {KC_Q,            KC_W,             KC_F,              COMBO_END};
const uint16_t PROGMEM Z_X_combo[]        = {KC_Z,            KC_X,                                COMBO_END};
const uint16_t PROGMEM X_C_combo[]        = {KC_X,            KC_C,                                COMBO_END};
const uint16_t PROGMEM X_D_combo[]        = {KC_X,            KC_D,                                COMBO_END};
const uint16_t PROGMEM Z_C_combo[]        = {KC_Z,            KC_C,                                COMBO_END};
const uint16_t PROGMEM Z_V_combo[]        = {KC_Z,            KC_V,                                COMBO_END};
const uint16_t PROGMEM K_H_combo[]        = {KC_K,            KC_H,                                COMBO_END};
const uint16_t PROGMEM J_Y_combo[]        = {KC_J,            KC_Y,                                COMBO_END};
const uint16_t PROGMEM J_N_combo[]        = {KC_J,            LT(3,KC_N),                          COMBO_END};
const uint16_t PROGMEM Q_W_combo[]        = {KC_Q,            KC_W,                                COMBO_END};
const uint16_t PROGMEM Q_P_combo[]        = {KC_Q,            KC_P,                                COMBO_END};
const uint16_t PROGMEM Q_F_combo[]        = {KC_Q,            KC_F,                                COMBO_END};
const uint16_t PROGMEM Q_B_combo[]        = {KC_Q,            KC_B,                                COMBO_END};
const uint16_t PROGMEM Q_Semi_combo[]     = {KC_Q,            KC_SCLN,                             COMBO_END};
*/

//GRAPHITE
const uint16_t PROGMEM NRT_Back_combo[]              = {MEH_T(KC_N),     KC_R,            LT(4,KC_T),         COMBO_END};
const uint16_t PROGMEM RTS_Forwards_combo[]          = {KC_R,            LT(4,KC_T),      LT(2,KC_S),         COMBO_END};
const uint16_t PROGMEM TSG_Find_combo[]              = {LT(4,KC_T),      LT(2,KC_S),      KC_G,               COMBO_END};
const uint16_t PROGMEM HAE_Brackets_combo[]          = {LT(3,KC_H),      LT(2,KC_A),      KC_E,               COMBO_END};
const uint16_t PROGMEM SemiY_CommandComma_combo[]    = {KC_SCLN,         KC_Y,                                COMBO_END};
const uint16_t PROGMEM SemiF_CommandK_combo[]        = {KC_SCLN,         KC_F,                                COMBO_END};
const uint16_t PROGMEM DWZ_Minimise_combo[]          = {KC_D,            KC_W,            KC_Z,               COMBO_END};
const uint16_t PROGMEM QX_Undo_combo[]               = {KC_Q,            KC_X,                                COMBO_END};
const uint16_t PROGMEM XM_Copy_combo[]               = {KC_X,            KC_M,                                COMBO_END};
const uint16_t PROGMEM XC_Paste_combo[]              = {KC_X,            KC_C,                                COMBO_END};
const uint16_t PROGMEM QM_Cut_combo[]                = {KC_Q,            KC_M,                                COMBO_END};
const uint16_t PROGMEM QV_SelectAll_combo[]          = {KC_Q,            KC_V,                                COMBO_END};
const uint16_t PROGMEM AEI_CommandL_combo[]          = {LT(2,KC_A),      KC_E,             RCMD_T(KC_I),      COMBO_END};
const uint16_t PROGMEM SemiO_CommandO_combo[]        = {KC_SCLN,         KC_O,                                COMBO_END};
const uint16_t PROGMEM SemiH_CommandN_combo[]        = {KC_SCLN,         LT(3,KC_H),                          COMBO_END};
const uint16_t PROGMEM WZ_CommandW_combo[]           = {KC_W,            KC_Z,                                COMBO_END};
const uint16_t PROGMEM ZG_CommandR_combo[]           = {KC_Z,            KC_G,                                COMBO_END};
const uint16_t PROGMEM LDW_HyperHyphen_combo[]       = {KC_L,            KC_D,             KC_W,              COMBO_END};
const uint16_t PROGMEM BZ_CommandS_combo[]           = {KC_B,            KC_Z,                                COMBO_END};
const uint16_t PROGMEM BJ_Quit_combo[]               = {KC_B,            KC_J,                                COMBO_END};

combo_t key_combos[] = {
  [NRT_Back]               = COMBO(NRT_Back_combo,              G(KC_LBRC)),
  [RTS_Forwards]           = COMBO(RTS_Forwards_combo,          G(KC_RBRC)),
  [TSG_Find]               = COMBO(TSG_Find_combo,              G(KC_F)),
  [HAE_Brackets]           = COMBO_ACTION(HAE_Brackets_combo),
  [SemiY_CommandComma]     = COMBO(SemiY_CommandComma_combo,    G(KC_COMM)),
  [SemiF_CommandK]         = COMBO(SemiF_CommandK_combo,        G(KC_K)),
  [DWZ_Minimise]           = COMBO(DWZ_Minimise_combo,          G(KC_M)),
  [QX_Undo]                = COMBO(QX_Undo_combo,               G(KC_Z)),
  [XM_Copy]                = COMBO(XM_Copy_combo,               G(KC_C)),
  [XC_Paste]               = COMBO(XC_Paste_combo,              G(KC_V)),
  [QM_Cut]                 = COMBO(QM_Cut_combo,                G(KC_X)),
  [QV_SelectAll]           = COMBO(QV_SelectAll_combo,          G(KC_A)),
  [AEI_CommandL]           = COMBO(AEI_CommandL_combo,          G(KC_L)),
  [SemiO_CommandO]         = COMBO(SemiO_CommandO_combo,        G(KC_O)),
  [SemiH_CommandN]         = COMBO(SemiH_CommandN_combo,        G(KC_N)),
  [WZ_CommandW]            = COMBO(WZ_CommandW_combo,           G(KC_W)),
  [ZG_CommandR]            = COMBO(ZG_CommandR_combo,           G(KC_R)),
  [LDW_HyperHyphen]        = COMBO(LDW_HyperHyphen_combo,       HYPR(KC_MINS)),
  [BZ_CommandS]            = COMBO(BZ_CommandS_combo,           G(KC_S)),
  [BJ_Quit]                = COMBO(BJ_Quit_combo,               G(KC_Q))
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
ALL_T(KC_ESC),MEH_T(KC_A),KC_S,LT(4,KC_D),LT(2,KC_F),KC_G,                            KC_H,LT(3,KC_J),LT(2,KC_K),KC_L,RCMD_T(KC_SCLN),KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_RAY,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┘                          └───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                            LCMD_T(KC_BSPC), KC_LSFT, SELLINE,                   KC_MPLY,  KC_SPC, KC_BSPC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


   [_GRAPHITE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TAB,  KC_B,    KC_L,    KC_D,    KC_W,    KC_Z,                               KC_SCLN, KC_F,    KC_O,    KC_U,    KC_J,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
ALL_T(KC_ESC),MEH_T(KC_N),KC_R,LT(4,KC_T),LT(2,KC_S),KC_G,                            KC_Y, LT(3,KC_H),LT(2,KC_A),KC_E, RCMD_T(KC_I),KC_QUOT,     
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_RAY,  KC_Q,    KC_X,    KC_M,    KC_C,    KC_V,                               KC_K,    KC_P,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┘                          └───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                             KC_LSFT, LCMD_T(KC_BSPC), KC_LSFT,                   KC_SPC,  KC_BSPC, KC_BSPC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

/*
    [_CLMKDH] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
ALL_T(KC_ESC),MEH_T(KC_A),KC_R,LT(4,KC_S),LT(2,KC_T),KC_G,                            KC_M, LT(3,KC_N),LT(2,KC_E),KC_I, RCMD_T(KC_O),KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_RAY,  KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                               KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┘                          └───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                            LCMD_T(KC_BSPC), KC_LSFT, KC_LSFT,                   KC_SPC,  KC_SPC, KC_BSPC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
*/

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______,KC_TPASTE,KC_REDO,KC_REDOTAB,                          KC_PUP,  KC_ALTTAB,KC_UP,  XXXXXXX, KC_BRIU, G(KC_EQL),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, XXXXXXX, MO(4),                              KC_PDOWN,KC_LEFT, KC_DOWN, KC_RGHT, KC_BRID, G(KC_MINS),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ┌────────┼────────┼────────┼────────┼────────┼────────┤
   KC_CPLINK, KC_UNDO, KC_CUT,  KC_COPY, KC_PASTE,KC_BOLD,                            KC_DEL,  XXXXXXX, KC_VOLD, KC_VOLU, XXXXXXX, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┘                          └───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                  G(KC_LBRC), _______, _______,                   _______, KC_BSPC, _______   
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, S(KC_7), S(KC_4), S(KC_5),S(KC_LBRC),S(KC_RBRC),                        XXXXXXX, XXXXXXX, KC_F4,   DF(0),   DF(1),   QK_BOOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     S(KC_3), S(KC_1), S(KC_2), S(KC_8), S(KC_9), S(KC_0),                            XXXXXXX, XXXXXXX, KC_MRWD, KC_MFFD, KC_MPLY, XXXXXXX, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GRV,  KC_BSLS, S(KC_6), XXXXXXX, KC_LBRC, KC_RBRC,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┘                          ├───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, KC_BSPC, _______   
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            KC_MINS, KC_7,    KC_8,    KC_9,    S(KC_5),S(KC_EQL),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            KC_DOT,  KC_4,    KC_5,    KC_6,  S(KC_SCLN),KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            KC_0,    KC_1,    KC_2,    KC_3,    XXXXXXX,G(KC_ENT),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┘                          ├───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, KC_BSPC, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

void matrix_scan_user(void) {
  achordion_task();
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  return 500;
}

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case HAE_Brackets:
      if (pressed) {
        SEND_STRING("()");
        tap_code(KC_LEFT);
      }
      break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    
    if (!process_achordion(keycode, record)) { return false; }

    switch (keycode) {
      case HYPR_T(KC_ESC):
        if (record->tap.count && record->event.pressed) {
            return true;
        } else if (record->event.pressed) {
            rgblight_sethsv(HSV_CYAN);
            break;
        }
        rgblight_sethsv (HSV_OFF);
        return true;

      case MEH_T(KC_A):
        if (record->tap.count && record->event.pressed) {
            return true;
        } else if (record->event.pressed) {
            rgblight_sethsv(HSV_CYAN);
            break;
        }
        rgblight_sethsv (HSV_OFF);
        return true;

      case LGUI_T(KC_BSPC):
        if (record->tap.count && record->event.pressed) {
          return true;
        } else if (record->event.pressed) {
          rgblight_sethsv(HSV_CYAN);
          break;
        }
        rgblight_sethsv (HSV_OFF);
        return true; 

      case SELLINE:
        if (record->event.pressed) {
         SEND_STRING(SS_LGUI(SS_TAP(X_LEFT)) SS_LGUI(SS_LSFT(SS_TAP(X_RGHT))));
        }
        return false;
    }
  
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _GRAPHITE:
            rgblight_sethsv(HSV_OFF);
            break;       
        case _LOWER:
            rgblight_sethsv(HSV_AZURE);
            break;
        case _RAISE:
            rgblight_sethsv(HSV_PINK);
            break;
        case _ADJUST:
            rgblight_sethsv(HSV_BLUE);
            break;
        case _QWERTY:
            rgblight_sethsv(HSV_OFF);
            break;            
        default:
            rgblight_sethsv (HSV_OFF);
            break;
    }
  return state;
}

