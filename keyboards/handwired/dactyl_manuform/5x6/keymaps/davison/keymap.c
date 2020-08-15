/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _NUMPAD 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define NUMPAD TT(_NUMPAD)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  , KC_MINS,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  , KC_EQUAL,
     KC_LCTL, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN, KC_QUOT,
     KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH, KC_RSFT,
                      KC_MINS, KC_EQUAL,                                             KC_LBRC, KC_RBRC,
                                      KC_LGUI, KC_SPC,                          KC_ENT, KC_BSPC,
                                      KC_LALT, LOWER,                           RAISE,  KC_BSLASH,
                                      KC_HOME, NUMPAD,                           KC_CAPS, KC_END
  ),


  [_LOWER] = LAYOUT_5x6(

     _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
     KC_GRV, KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,_______,
     _______, KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,_______,
     KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
                             _______,_______,                                        _______, _______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______

  ),

  [_RAISE] = LAYOUT_5x6(
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,_______,_______,KC_MS_UP,_______,_______,                        _______,_______,_______,_______,_______,_______,
       KC_LCTL,_______,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,_______,               KC_LEFT,KC_DOWN, KC_UP,KC_RIGHT,_______,_______,
       KC_LSFT,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_RSFT,
                               _______,_______,                                        _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),

  [_NUMPAD] = LAYOUT_5x6(

     _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                        KC_VOLU, KC_7 , KC_8 , KC_9 ,KC_MINS,_______,
     _______,_______,_______,_______,_______,_______,                        KC_MUTE, KC_4 , KC_5 , KC_6 ,KC_PLUS,_______,
     _______,_______,_______,_______,_______,_______,                        KC_VOLD, KC_1 , KC_2 , KC_3 ,KC_EQL ,_______,
                             _______,_______,                                         KC_0,  KC_DOT,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______

  )

};
