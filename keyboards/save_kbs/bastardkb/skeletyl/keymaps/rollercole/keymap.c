

// Copyright 2023 zzeneg (@zzeneg)
// SPDX-License-Identifier: GPL-2.0-or-later

// Deploy:
//        qmk compile -kb bigga -km zzeneg

// qmk compile -kb bastardkb/skeletyl/v2/splinky_3  -km  rollercole
// qmk flash -kb bastardkb/skeletyl/v2/splinky_3  -km  rollercole
#include QMK_KEYBOARD_H

#define __________ _______

#define ROLLERCOLE_36(_q, _w, _f, _p, _b, _j, _l, _u, _y, _quote, _a, _r, _s, _t, _g, _m, _n, _e, _i, _o, _z, _x, _c, _d, _v, _k, _h, _comm, _dot, _min, _thumb1L, _thumb2L, _thumb3L, _thumb3R, _thumb2R, _thumb1R) \
    LAYOUT_split_3x5_3( \
                     _q,            _w,         _f,         _p,         _b,                   _j,         _l,         _u,         _y,    _quote, \
                     _a,             _r,         _s,         _t,         _g,                   _m,         _n,         _e,         _i,        _o, \
                     _z,             _x,         _c,         _d,         _v,                   _k,         _h,      _comm,       _dot,      _min, \
                                                  _thumb1L,   _thumb2L,   _thumb3L,             _thumb3R,   _thumb2R,   _thumb1R    )

#include "../../../rollercole/keymap.c"
