#include QMK_KEYBOARD_H

enum dasbob_layers {
  _QWERTY,
  _LOWER,
  _RAISE
};

#define __________ _______

// qmk flash -kb bastardkb/skeletyl/v2/splinky_3  -km  rollercole

#define ROLLERCOLE_36(_q, _w, _f, _p, _b, _j, _l, _u, _y, _quote, _a, _r, _s, _t, _g, _m, _n, _e, _i, _o, _z, _x, _c, _d, _v, _k, _h, _comm, _dot, _min, _thumb1L, _thumb2L, _thumb3L, _thumb3R, _thumb2R, _thumb1R) \
    LAYOUT_split_3x5_3( \
                     _q,            _w,         _f,         _p,         _b,                   _j,         _l,         _u,         _y,    _quote, \
                     _a,             _r,         _s,         _t,         _g,                   _m,         _n,         _e,         _i,        _o, \
                     _z,             _x,         _c,         _d,         _v,                   _k,         _h,      _comm,       _dot,      _min, \
                                           _thumb1L,   _thumb2L,   _thumb3L,             _thumb3R,   _thumb2R,   _thumb1R    )


#include "../../../rollercole/keymap.c"


