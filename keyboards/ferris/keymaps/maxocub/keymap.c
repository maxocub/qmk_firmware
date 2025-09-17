/*
Copyright 2025 Maxime Turcotte <maxocub@riseup.net>

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

#include "keymap_canadian_french.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
        FR_Q,           GUI_T(FR_W),    LT(2, FR_E),    LT(1, FR_R),    FR_T,           FR_Y,           LT(1, FR_U),    LT(2, FR_I),    GUI_T(FR_O),    FR_P,
        FR_A,           ALT_T(FR_S),    CTL_T(FR_D),    SFT_T(FR_F),    FR_G,           FR_H,           SFT_T(FR_J),    CTL_T(FR_K),    ALT_T(FR_L),    FR_CEDL,
        FR_Z,           FR_X,           FR_C,           FR_V,           FR_B,           FR_N,           FR_M,           FR_DCIR,        FR_DGRV,        FR_EACU,
                                                        KC_ENT,         KC_TAB,         KC_BSPC,        KC_SPC
    ),
    [1] = LAYOUT_split_3x5_2(
        FR_EXLM,        FR_QUES,        FR_SLSH,        FR_HASH,        FR_ASTR,        FR_LABK,        FR_RABK,        FR_LPRN,        FR_RPRN,        FR_COLN,
        FR_BSLS,        FR_UNDS,        FR_MINS,        FR_PLUS,        FR_EQL,         FR_LBRC,        FR_RBRC,        FR_LCBR,        FR_RCBR,        FR_SCLN,
        FR_PIPE,        FR_AMPR,        FR_PERC,        FR_DLR,         FR_TILD,        FR_QUOT,        FR_DQUO,        FR_COMM,        FR_DOT,         FR_AT,
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS
    ),
    [2] = LAYOUT_split_3x5_2(
        FR_1,           FR_2,           FR_3,           FR_4,           FR_5,           KC_HOME,        KC_PGDN,        KC_PGUP,        KC_END,         KC_VOLU,
        FR_6,           FR_7,           FR_8,           FR_9,           FR_0,           KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT,        KC_MPLY,
        KC_PSCR,        MEH(KC_LEFT),   MEH(KC_RGHT),   LCA(KC_LEFT),   LCA(KC_RGHT),   SGUI(KC_LEFT),  SGUI(KC_DOWN),  SGUI(KC_UP),    SGUI(KC_RGHT),  KC_VOLD,
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS
    )
};

const uint16_t PROGMEM combo0[] = {FR_X, FR_C, COMBO_END};
const uint16_t PROGMEM combo1[] = {FR_C, FR_V, COMBO_END};
const uint16_t PROGMEM combo2[] = {FR_M, FR_DCIR, COMBO_END};
const uint16_t PROGMEM combo3[] = {FR_DCIR, FR_DGRV, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo0, CW_TOGG),
    COMBO(combo1, KC_DEL),
    COMBO(combo2, KC_ESC),
    COMBO(combo3, C(KC_SPC)),
};
