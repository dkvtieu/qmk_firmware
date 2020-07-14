#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 * ,-----------------------,
 * |  7  |  8  |  9  |  /  |
 * |-----+-----+-----+-----|
 * |  4  |  5  |  6  |  *  |
 * |-----+-----+-----+-----|
 * |  1  |  2  |  3  |  -  |
 * |-----+-----+-----+-----|
 * |  0  |  .  |  =  |  +  |
 * `-----------------------'
 */
LAYOUT_ortho_4x4(
		KC_P7, KC_P8,   KC_P9,      KC_PSLS,
		KC_P4, KC_P5,   KC_P6,      KC_PAST,
		KC_P1, KC_P2,   KC_P3,      KC_PMNS,
		KC_P0, KC_PDOT, KC_PEQL,    KC_PPLS
)

};

// Set led state during powerup
void keyboard_post_init_user(void) {
    writePinHigh(LED_RED);
}

void encoder_update_user(uint8_t index, bool clockwise) {
  // First encoder
  if (index == 0) {
    if (clockwise) {
      tap_code(KC_DOWN);
    } else {
      tap_code(KC_UP);
    }
  // Second encoder
  } else if (index == 1) {
    if (clockwise) {
      tap_code(KC_RGHT);
    } else {
      tap_code(KC_LEFT);
    }
  // Third encoder
  } else if (index == 2) {
    if (clockwise) {
      tap_code(KC_RGHT);
    } else {
      tap_code(KC_LEFT);
    }
  // Forth encoder
  } else if (index == 3) {
    if (clockwise) {
      tap_code(KC_DOWN);
    } else {
      tap_code(KC_UP);
    }
  }
}
