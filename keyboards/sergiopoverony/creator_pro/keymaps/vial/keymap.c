#include QMK_KEYBOARD_H

/* default layers */
enum layers {
  _HOME = 0,
  _RED = 1,
  _BLUE = 2,
  _GREEN = 3,
};

/* Layout */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_HOME] = LAYOUT(
     KC_1, KC_2, KC_3, KC_4, TO(_RED), KC_6, KC_7, KC_8, KC_9
   ),
  [_RED] = LAYOUT(
     KC_1, KC_2, KC_3, KC_4, TO(_BLUE), KC_6, KC_7, KC_8, KC_9
  ),
  [_BLUE] = LAYOUT(
     KC_1, KC_2, KC_3, KC_4, TO(_GREEN), KC_6, KC_7, KC_8, KC_9
  ),
  [_GREEN] = LAYOUT(
     KC_1, KC_2, KC_3, KC_4, TO(_HOME), KC_6, KC_7, KC_8, KC_9
  )
};

/* Select led layout */
layer_state_t layer_state_set_user(layer_state_t state)
{
    turn_off_leds();	
    switch (get_highest_layer(state))
    {
		case _HOME:
		break;

		case _RED:
		turn_on_led(RED_LED);
		break;

		case _BLUE:
		turn_on_led(BLUE_LED);
		break;

		case _GREEN:
		turn_on_led(GREEN_LED);
		break;
	}
    return state;
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
