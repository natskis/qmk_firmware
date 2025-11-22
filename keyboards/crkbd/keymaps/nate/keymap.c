/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  XXXXXXX,
  //|--------+--------+-----------+--------------+------------------|          |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_A, KC_S, LCTL_T(KC_D),  LSFT_T(KC_F),KC_G,            KC_H,    LSFT_T(KC_J),RCTL_T(KC_K),KC_L, RGUI_T(KC_QUOT), XXXXXXX,
  //|--------+--------+-----------+--------+--------+--------|                 |--------+--------+--------+--------+--------+--------|
      XXXXXXX,LGUI_T(KC_Z),LALT_T(KC_X),    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,   KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_ENT,   KC_LSFT, TL_LOWR,       TL_UPPR, KC_SPC, KC_BSPC
                                      //`--------------------------'  `-----------------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_ESC, KC_TRNS, KC_TAB, KC_LCBR, KC_RCBR, 		                 KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PSCR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_TRNS,	KC_TRNS, KC_LCTL, KC_LSFT, KC_TRNS, 		            KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, KC_SCLN,XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_RGUI, KC_LALT, KC_COPY, KC_PSTE, KC_TRNS, 		            KC_MINS, KC_EQL, KC_BSLS, KC_LBRC, KC_RBRC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS, TL_LOWR,       TL_UPPR,   KC_TRNS, KC_DEL
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F1,   KC_F2,    KC_F3,  KC_F4,    KC_F5,                        KC_F6,  KC_F7,    KC_F8,  KC_F9,   KC_F10,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS, TL_LOWR,       TL_UPPR, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_GRV, KC_NO, KC_NO, KC_MSTP, KC_MPLY,                           KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_BTN1, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_CAPS,                      KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN2, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, KC_MRWD,KC_MFFD,                       KC_F11, KC_F12, KC_PIPE, KC_LCBR, KC_RCBR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS, TL_LOWR,       TL_UPPR, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `-------------------------'
  ),
};

// Combos
const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {KC_E, KC_T, COMBO_END};
// const uint16_t PROGMEM alt_f4[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM mleft[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM mdown[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM mup[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM mright[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM colon[] = {KC_Y, KC_U, COMBO_END};
combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(tab_combo, KC_TAB), // keycodes with modifiers are possible too!
    // COMBO(alt_f4,    LALT(KC_F4)),
    COMBO(mleft,     KC_WH_L),
    COMBO(mdown,     KC_WH_D),
    COMBO(mup,       KC_WH_U),
    COMBO(mright,    KC_WH_R),
    COMBO(colon,     KC_COLN)
};
