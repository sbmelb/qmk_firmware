/*
Copyright 2017 Balz Guenat <balz.guenat@gmail.com>

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

enum custom_keycodes {
    S_DOT = SAFE_RANGE,
    QUOTES,
    SQ_BKT,
    RD_BKT,
    CAPS,
    UND,
    SF_PST,
    ITALIC,
    CLEAR,
    BOLD,
    HLGHT,
    COPY,
    PASTE,
    ONE_PT,
    THRE_PT,
    SIX_PT,
    EGHT_PT,
    TWLV_PT,
    EGTN_PT,
    TWFR_PT,
    UNDO,
    REDO,
    L_INDENT,
    R_INDENT
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case S_DOT:
        if (record->event.pressed) {
            // s.
            SEND_STRING("s.");
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case QUOTES:
        if (record->event.pressed) {
            // insert quotes
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_DOWN(X_LALT));
            SEND_STRING("w");
            SEND_STRING(SS_UP(X_LCTL));
            SEND_STRING(SS_UP(X_LALT));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case SQ_BKT:
        if (record->event.pressed) {
            // insert square brackets
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_DOWN(X_LALT));
            SEND_STRING("[");
            SEND_STRING(SS_UP(X_LCTL));
            SEND_STRING(SS_UP(X_LALT));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case RD_BKT:
        if (record->event.pressed) {
            // insert round brackets
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_DOWN(X_LALT));
            SEND_STRING("9");
            SEND_STRING(SS_UP(X_LCTL));
            SEND_STRING(SS_UP(X_LALT));
        } else {
            // when keycode QMKBEST is released
        }
        break;



    case CAPS:
        if (record->event.pressed) {
            // underline
            SEND_STRING(SS_DOWN(X_LSFT));
            SEND_STRING(SS_TAP(X_F3));
            SEND_STRING(SS_UP(X_LSFT));
        } else {
            // when keycode QMKBEST is released
        }
        break;


    case UND:
        if (record->event.pressed) {
            // underline
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING("u");
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case SF_PST:
        if (record->event.pressed) {
            // paste without formatting
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING("g");
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case ITALIC:
        if (record->event.pressed) {
            // italic
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING("i");
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case CLEAR:
        if (record->event.pressed) {
            // clear all formatting
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING("s");
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case BOLD:
        if (record->event.pressed) {
            // bold
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING("b");
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case HLGHT:
        if (record->event.pressed) {
            // highlight
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_DOWN(X_LALT));
            SEND_STRING("h");
            SEND_STRING(SS_UP(X_LCTL));
            SEND_STRING(SS_UP(X_LALT));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case COPY:
        if (record->event.pressed) {
            // normal copy
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING("c");
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case PASTE:
        if (record->event.pressed) {
            // normal paste
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING("v");
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case ONE_PT:
        if (record->event.pressed) {
            // one point gap
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_TAP(X_F13));
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case THRE_PT:
        if (record->event.pressed) {
            // 3 point gap
             SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_TAP(X_F14));
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

        case SIX_PT:
        if (record->event.pressed) {
            // 6 point gap
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_TAP(X_F15));
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

        case EGHT_PT:
        if (record->event.pressed) {
            // 8 point gap
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_TAP(X_F16));
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

        case TWLV_PT:
        if (record->event.pressed) {
            // 12 point gap
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_TAP(X_F17));
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

        case EGTN_PT:
        if (record->event.pressed) {
            // 18 point gap
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_TAP(X_F18));
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

        case TWFR_PT:
        if (record->event.pressed) {
            // 24 point gap
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_TAP(X_F19));
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case UNDO:
        if (record->event.pressed) {
            // undo
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING("z");
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case REDO:
        if (record->event.pressed) {
            // redo
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING("y");
            SEND_STRING(SS_UP(X_LCTL));
        } else {
            // when keycode QMKBEST is released
        }
        break;

        case L_INDENT:
        if (record->event.pressed) {
            // decrease indent
            SEND_STRING(SS_LCTL(SS_TAP(X_F23)));
        } else {
            // when keycode QMKBEST is released
        }
        break;

        case R_INDENT:
        if (record->event.pressed) {
            // increase indent
            SEND_STRING(SS_LCTL(SS_TAP(X_F24)));
        } else {
            // when keycode QMKBEST is released
        }
        break;




    }
    return true;
    };





const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: plain Qwerty without layer switching
     *         ,---------------. ,---------------. ,---------------.
     *         |F13|F14|F15|F16| |F17|F18|F19|F20| |F21|F22|F23|F24|
     * ,---.   |---------------| |---------------| |---------------| ,-----------. ,---------------. ,-------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau| |VDn|VUp|Mut|Pwr| | Help  |
     * `---'   `---------------' `---------------' `---------------' `-----------' `---------------' `-------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------. ,-------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|JPY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -| |Stp|Agn|
     * |-----------------------------------------------------------| |-----------| |---------------| |-------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +| |Mnu|Und|
     * |-----------------------------------------------------------| `-----------' |---------------| |-------|
     * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  :|  #|Retn|               |  4|  5|  6|KP,| |Sel|Cpy|
     * |-----------------------------------------------------------|     ,---.     |---------------| |-------|
     * |Shft|  <|  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /| RO|Shift |     |Up |     |  1|  2|  3|KP=| |Exe|Pst|
     * |-----------------------------------------------------------| ,-----------. |---------------| |-------|
     * |Ctl|Gui|Alt|MHEN|HNJ| Space  |H/E|HENK|KANA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |  0    |  .|Ent| |Fnd|Cut|
     * `-----------------------------------------------------------' `-----------' `---------------' `-------'
     */
    [0] = LAYOUT_all(
                         KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,   KC_F19,       KC_F20,     KC_F21,    KC_F22,    KC_F23,    KC_F24,
    KC_ESC,              KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,        KC_F8,      KC_F9,     KC_F10,    KC_F11,    KC_F12,                 QK_RBT,   KC_SCRL,   QK_BOOT,    KC_VOLD,   KC_VOLU,   KC_MUTE,   KC_PWR,     KC_HELP,
    KC_GRV,    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     ONE_PT,   THRE_PT,  SIX_PT,       EGHT_PT,    TWLV_PT,   EGTN_PT,   TWFR_PT,   KC_INT3,   KC_BSPC,     KC_INS,    KC_HOME,   KC_PGUP,    KC_NUM,    KC_PSLS,   KC_PAST,   KC_PMNS,    KC_STOP, KC_AGIN,
    QUOTES,    CAPS,     KC_W,     KC_E,     UND,      KC_T,     KC_Y,     KC_U,     KC_I,         KC_O,       KC_P,      RD_BKT,    SQ_BKT,               KC_BSLS,     KC_DEL,    KC_END,    KC_PGDN,    KC_P7,     KC_P8,     KC_P9,     KC_PPLS,    KC_MENU, KC_UNDO,
    KC_CAPS,   CLEAR,    BOLD,     ITALIC,   HLGHT,    KC_G,     KC_H,     KC_J,     KC_K,         KC_L,       KC_SCLN,   KC_QUOT,              KC_NUHS,   KC_ENT,                                        KC_P4,     KC_P5,     KC_P6,     KC_PCMM,    KC_SLCT, KC_COPY,
    KC_LSFT,   KC_NUBS,  COPY,     SF_PST,   PASTE,    KC_V,     KC_B,     KC_N,     KC_M,         KC_COMM,    KC_DOT,    KC_SLSH,              KC_INT1,   KC_RSFT,                KC_UP,                 KC_P1,     KC_P2,     KC_P3,     KC_PEQL,    KC_EXEC, KC_PSTE,
    KC_LCTL,   UNDO,     REDO,     KC_INT5,  KC_LNG2,            KC_SPC,             L_INDENT,     R_INDENT,   KC_INT2,   KC_RALT,   KC_RGUI,   KC_APP,    KC_RCTL,     KC_LEFT,   KC_DOWN,   KC_RGHT,    KC_P0,              KC_PDOT,   KC_PENT,    KC_FIND, KC_CUT
    ),
    [1] = LAYOUT_all(
                      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______,    _______, _______, _______, _______,    _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,    _______, _______, _______, _______,    _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,  _______, _______, _______,    _______, _______, _______, _______,    _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,                                _______, _______, _______, _______,    _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,           _______,             _______, _______, _______, _______,    _______, _______,
    _______, _______, _______, _______, _______,          _______,          _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,    _______,          _______, _______,    _______, _______
    ),
};


