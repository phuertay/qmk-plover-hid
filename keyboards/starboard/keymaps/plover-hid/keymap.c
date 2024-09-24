/* Copyright 2023 Andrew Hess <handrew@duck.com> */

#include QMK_KEYBOARD_H
#include "keymap_plover_hid.h"
#include "config.h"

// Layer IDs.
#define LAYER_STENO         0

// Layer aliases.
#define PLV LAYER_STENO

// Create the actual layers.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_STENO] = LAYOUT(
    PLV_X8,  PLV_X1,  PLV_TL,  PLV_PL,  PLV_HL,                        PLV_FR,  PLV_PR,  PLV_LR,  PLV_TR,  PLV_DR,
    PLV_X9,  PLV_SL,  PLV_KL,  PLV_WL,  PLV_RL,  PLV_X3,       PLV_X5, PLV_RR,  PLV_BR,  PLV_GR,  PLV_SR,  PLV_ZR,
                               PLV_A,   PLV_O,                         PLV_E,  PLV_U
    )

    // A blank layer commented out, just to make adding new layers a little easier.
    // [] = LAYOUT(
    //     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //                                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    // ),
};
