
#include "keymap_danish.h"
#include "timer.h"

enum layers {
    BASE,  // default layer
    ARROW,
    NUMBERS,
    F_KEYS,
    BS_LAYER,  // Backspace
    BOOT_LAYER,
    APP_LAUNCH,
    SC2_MAIN,
    SC2_LETTERS
};

// httes:/s/docs.qmk.fm/#/faq_keymap

enum custom_keycodes {
    TUB_1 = SAFE_RANGE,
    TUB_2,
    CTL_PAR_1,
    SFT_PAR_2,
    DK_LBRAC,
    DK_RBRAC,
    ALT_TAB,
    ALT_TAB_REV,
    CLOSE_WIN,
    DSKTP_NEXT,
    DSKTP_PREV,
    THUMB_LEFT,
    THUMB_RIGHT,
    TILDE,
    HAT,
    STICKY_SHIFT,
    NUMBERS_UP,
    NUMBERS_DOWN,
    SC2_ON,
    SC2_OFF
};
#define _S(kc) MT(MOD_LSFT, kc)
#define _A(kc) MT(MOD_LALT, kc)
#define _C(kc) MT(MOD_LCTL, kc)
#define _W(kc) MT(MOD_LGUI, kc)
#define _F(kc) LT(F_KEYS, kc)

#define DK_AE KC_SCLN
#define DK_OE KC_QUOT
#define DK_AA KC_LBRC
#define KC_BS KC_BACKSPACE
#define DK_SINGLE_QT KC_NUHS
#define DK_DOUBLE_QT LSFT(KC_2)
#define DK_STAR LSFT(KC_NUHS)
#define DK_QSTMRK LSFT(DK_PLUS)
#define DK_EXCLAM LSFT(KC_1)
#define DK_EQUALS LSFT(KC_0)
#define DK_SLASH LSFT(KC_7)
#define KC_DEL KC_DELETE
#define DK_COLON LSFT(DK_DOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = ROLLERCOLE_36(
LT(BOOT_LAYER, KC_Q),    KC_W,   _W(KC_R),      KC_P,     KC_B,                KC_K,       KC_L,   _W(KC_O), KC_U,LT(BOOT_LAYER,DK_SINGLE_QT),
        KC_F,        _A(KC_A),  _C(KC_S),  _S(KC_T),      KC_G,                KC_M,   _S(KC_N),   _C(KC_E),   _A(KC_I),             KC_Y,
        KC_Z,            KC_X,      KC_C,      KC_D,      KC_V,          __________,       KC_H,    DK_COMM,  LT(APP_LAUNCH, DK_DOT),  DK_MINS,
                             MO(F_KEYS), THUMB_LEFT,THUMB_LEFT,          THUMB_RIGHT, THUMB_RIGHT, MO(F_KEYS)
    ),
 [ARROW] = ROLLERCOLE_36(
        DK_EXCLAM,    DK_LABK,  DK_EQUALS,    DK_RABK,    KC_PERC,              DK_SLASH,    KC_HOME,      KC_UP,      KC_END, DK_QSTMRK,
       RALT(KC_2),      TUB_1,  CTL_PAR_1,  SFT_PAR_2,      TUB_2,               KC_PGUP,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_PGDN,
    RALT(DK_LABK), LSFT(KC_3),   DK_LBRAC,   DK_RBRAC,    DK_AMPR,               DK_PIPE,     KC_TAB,   DK_DOUBLE_QT,   DK_COLON,   DK_PLUS,
                               __________, __________, __________,            __________, __________, __________
    ),
    [NUMBERS] = ROLLERCOLE_36(
        CLOSE_WIN,    ALT_TAB, __________, ALT_TAB_REV, LALT(KC_PSCR),          DK_DLR,       KC_7,       KC_8,       KC_9,   __________,
       __________, __________,     KC_ESC,  STICKY_SHIFT,   KC_APP,           TILDE,   _S(KC_4),   _C(KC_5),   _A(KC_6),   __________,
       __________, __________, __________,  __________,     KC_DEL,             HAT,       KC_1,       KC_2,      KC_3,    __________,
                               __________,  __________, __________,      __________, __________, __________
        ),
    [BS_LAYER] = ROLLERCOLE_36(
       __________, __________, __________, __________, __________,         __________,      KC_NO,     KC_NO,       KC_NO, __________,
       __________, __________, __________, __________, __________,         __________,  _S(KC_BS),  _C(KC_BS),  _A(KC_BS), __________,
       __________, __________, __________, __________, __________,         __________,     KC_DEL,     KC_DEL,     KC_DEL, __________,
                               __________, __________, __________,         __________, __________, __________
    ),
    [F_KEYS] = ROLLERCOLE_36(
       __________, __________, __________, __________, __________,          __________,      KC_F7,      KC_F8,      KC_F9,     KC_F10,
       __________,    KC_LALT,    KC_LCTL,    KC_LSFT, __________,          __________,  _S(KC_F4),  _C(KC_F5),  _A(KC_F6),     KC_F11,
       __________, __________, __________, __________, __________,          __________,  _W(KC_F1),      KC_F2,      KC_F3,     KC_F12,
                               __________, __________, __________,            __________, __________, __________
    ),
    [BOOT_LAYER] = ROLLERCOLE_36(
       __________, __________, __________, __________, __________,           __________, __________, __________, __________, __________,
       __________, __________, __________, __________, __________,           __________, __________, __________, __________, __________,
       __________, __________, __________, __________, __________,           __________, __________, __________, __________, __________,
                                    QK_BOOT,  QK_BOOT,    QK_BOOT,              QK_BOOT,    QK_BOOT,    QK_BOOT
    ),
    [APP_LAUNCH] = ROLLERCOLE_36(
       LGUI(KC_7), __________, LGUI(KC_1), LGUI(KC_6), __________,           __________, __________, __________, __________, __________,
       LGUI(KC_4), __________, LGUI(KC_2), LGUI(KC_5), __________,           __________, __________, __________, __________, __________,
       __________, __________, LGUI(KC_3), LGUI(KC_8), __________,           __________, __________, __________, __________, __________,
                               __________, __________, __________,           __________, __________, __________
    ),

// add right click to middle button
// Jump (space) => f
// attack => a
// ?? => s
// patrol => hold thumb + p
// drop => d

// scv: build primary => ??
// scv: build advanced => ??

// thumb + number => ctrl + number
// auto-make stutter move

    [SC2_MAIN] = ROLLERCOLE_36(
         KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                 __________, __________, __________, __________,    SC2_OFF,
     _C(KC_F),       KC_A,       KC_S,      _S(KC_T),       KC_G,                 __________, __________, __________, __________, __________,
     _C(KC_Z),       KC_X,        KC_C,       KC_D,       KC_V,                 __________, __________, __________, __________, __________,
                           LCTL(KC_F1), _S(KC_SPACE), KC_F2,           __________, __________, __________
    ),
    [SC2_LETTERS] = ROLLERCOLE_36(
       __________, LSFT(KC_2),   LSFT(KC_3),      LSFT(KC_4),      LSFT(KC_5),                 __________, __________, __________, __________,    SC2_OFF,
       __________,  __________,     KC_ESC, __________, __________,                 __________, __________, __________, __________, __________,
       __________,  __________, __________, __________, __________,                 __________, __________, __________, __________, __________,
                                __________, __________, __________,           __________, __________, __________
    )
};


bool is_pressed(uint16_t mod_keycode){
  return (get_mods() & (MOD_BIT(mod_keycode)));
}

void ensure_state(uint16_t mod_keycode, bool state)
{
   if(is_pressed(mod_keycode) != state){
     if(state){
         register_code(mod_keycode);
     }else{
         unregister_code(mod_keycode);
     }
   }
}
void ensure_pressed(uint16_t mod_keycode)
{
    ensure_state(mod_keycode, true);
}
void ensure_released(uint16_t mod_keycode)
{
   ensure_state(mod_keycode, false);
}

void tap_with_altgr(uint16_t keycode)
{
    bool apply_alt = !is_pressed(KC_RALT);
    if(apply_alt){ register_code(KC_RALT); }

    tap_code(keycode);

    if(apply_alt){ unregister_code(KC_RALT); }
}

void tap_with_shift(uint16_t keycode)
{
   bool apply_shift = !is_pressed(KC_LSFT);
   if(apply_shift){ register_code(KC_LSFT); }

   tap_code(keycode);

   if(apply_shift){ unregister_code(KC_LSFT); }
}

uint16_t last_pressed_keycode = 0;
uint16_t last_released_keycode = 0;
bool tap_detected = false;
uint16_t last_key_press_time = 0;
void update_stats(uint16_t keycode, keyrecord_t *record)
{
   if (record->event.pressed) {
      last_pressed_keycode = keycode;
   }else{
      last_released_keycode = keycode;
   }
}

uint32_t retro_activate_time = 0;
bool retro_mod_already_pressed = false;
#define RETRO_WITH_MOD(mod_keycode, tap_code) RETRO2(mod_keycode, -1, tap_code)

#define RETRO2(mod_keycode, counterpart_keycode, tap_code) { \
   if (record->event.pressed) { \
       if(!is_pressed(mod_keycode)){\
           register_code(mod_keycode);\
           retro_mod_already_pressed = false;\
       }else{\
           retro_mod_already_pressed = true;\
       }\
       retro_activate_time = timer_read();\
    } else {\
        if(!retro_mod_already_pressed){\
            unregister_code(mod_keycode);\
        }\
        if(timer_read() - retro_activate_time < 250)\
        {\
            if(last_pressed_keycode == keycode || last_pressed_keycode == counterpart_keycode) {\
            tap_code \
            } \
        }; \
    }\
    return false;\
}
bool left_down = false;
bool right_down = false;

void set_layer_state(uint8_t layer, bool state){
   if(state){
      layer_on(layer);
   } else {
      layer_off(layer);
   }
}



bool alt_tab_active = false;
bool handle_alt_tab(uint16_t keycode, keyrecord_t *record)
{

    switch (keycode) {
        // Alt tab section
         case ALT_TAB:
         case ALT_TAB_REV:
             alt_tab_active = true;
             if (record->event.pressed == true)
             {
                 ensure_pressed(KC_LALT);
                 if(keycode == ALT_TAB_REV){ensure_pressed(KC_LSFT);}
                 tap_code(KC_TAB);
                 if(keycode == ALT_TAB_REV){ensure_released(KC_LSFT);}
             }
             return false;
         case CLOSE_WIN:
             if (record->event.pressed == true)
             {
                 if(alt_tab_active){
                    ensure_pressed(KC_LCTL);
                    tap_code(KC_W);
                    ensure_released(KC_LCTL);
                 }else{
                    ensure_pressed(KC_LALT);
                    tap_code(KC_F4);
                    ensure_released(KC_LALT);
                 }
             }
             return false;
        case KC_LSFT:
             return false;
        case _S(KC_4):
            return true;// Holding down shift while alt+tabbing should be possible without having the alt+tab closed
        default:
           if(alt_tab_active){
                ensure_released(KC_LALT);
                alt_tab_active = false;
            }
            return true;
    }
}


void update_last_keycodes_and_check_tapped(uint16_t keycode, keyrecord_t *record){

    if (record->event.pressed) {
      last_pressed_keycode = keycode;
     }else{
      last_released_keycode = keycode;
     }
     uint16_t now = timer_read();
     bool within_tap_period = now - last_key_press_time < 250;
     last_key_press_time = now;

    if(record->event.pressed == false // key is released
        && last_pressed_keycode == keycode // key released is the same as last one pressed
        && within_tap_period){
        tap_detected = true;
    }else{
        tap_detected = false;
    }
}

bool sticky_shift_on = false;

static uint16_t key_timer;
static bool key_held = false;
static int repeat_interval = 0;
static uint16_t keycode_held = 0;
void matrix_scan_user(void) {
    if (key_held && timer_elapsed(key_timer) > repeat_interval) { // check if the key is still held after 200ms
        tap_code(keycode_held);                             // send the key again
        key_timer = timer_read();                    // reset the timer
        repeat_interval = 50;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
        update_last_keycodes_and_check_tapped(keycode, record);

    if(!handle_alt_tab(keycode, record)){ return false; }
     switch (keycode) {
         case STICKY_SHIFT:
            if(tap_detected){
                ensure_pressed(KC_RSFT);
                sticky_shift_on = true;
                set_layer_state(NUMBERS, false);
            }
            return false;
         case KC_UP:
        case KC_DOWN:
        case KC_LEFT:
        case KC_RIGHT:
        case KC_W:
        case KC_B:
            if (record->event.pressed)  {
                key_held = true;
                repeat_interval = 100;
                keycode_held = keycode;
                key_timer = timer_read(); // Start the timer when the key is pressed
                tap_code(keycode);        // Tap the key once immediately
            } else {
                key_held = false;          // Key released, stop repeating
            }
            return false;
         case THUMB_LEFT:
         case THUMB_RIGHT:

             if(keycode == THUMB_LEFT){ left_down = record->event.pressed; }
             if(keycode == THUMB_RIGHT){ right_down = record->event.pressed; }


             if(sticky_shift_on && !left_down){// Set sticky shift to off, when left_down is released
                sticky_shift_on = false;
                ensure_released(KC_RSFT);
             }

             set_layer_state(NUMBERS, left_down && !sticky_shift_on);
             set_layer_state(ARROW, right_down);// Right press only: arrow
             set_layer_state(BS_LAYER, left_down && right_down);// Double press: backspace

             if(tap_detected){
                if(keycode == THUMB_LEFT && right_down){ tap_code(KC_SPACE); }
                if(keycode == THUMB_LEFT && !right_down){ tap_code(KC_ENTER); }
                if(keycode == THUMB_RIGHT && !left_down){ tap_code(KC_SPACE); }
                if(keycode == THUMB_RIGHT && left_down){
                    if(sticky_shift_on){
                        tap_code(KC_SPACE);
                    }else{
                        tap_code(KC_0);
                    }
                }
             }

             return false;

         case TUB_1:
            if (record->event.pressed == false) { tap_with_altgr(KC_7); }
            return false;
         case TUB_2:
            if (record->event.pressed == false) { tap_with_altgr(KC_0); }
            return false;
         case CTL_PAR_1:
            RETRO2(KC_LCTL, SFT_PAR_2, tap_with_shift(KC_8); )
            return false;
         case SFT_PAR_2:
            RETRO_WITH_MOD(KC_LSFT, register_code(KC_LSFT); tap_code(KC_9); unregister_code(KC_LSFT); )
            return false;
         case DK_LBRAC:
            if (record->event.pressed) { tap_with_altgr(KC_8); }
            return false;
         case DK_RBRAC:
            if (record->event.pressed) { tap_with_altgr(KC_9); }
            return false;


// S(DK_DIAE)
        case HAT:
            // Ensure ~ is a single keypress in windows
            if (record->event.pressed == true)
            {
                tap_code16(S(DK_DIAE));
                tap_code16(S(DK_DIAE));
                tap_code(KC_BS);
            }
            return false;
        case TILDE:
            // Ensure ~ is a single keypress in windows
            if (record->event.pressed == true)
            {
                tap_with_altgr(DK_DIAE);
                tap_code(KC_SPACE);
            }
            return false;
        case SC2_ON:
            set_layer_state(SC2_MAIN, true);
            return false;
        case SC2_OFF:
            set_layer_state(SC2_MAIN, false);
            set_layer_state(SC2_LETTERS, false);
            return false;
    }

    return true;
}

// Achordion
bool achordion_eager_mod(uint8_t mod) {
  switch (mod) {
    case MOD_LALT:
      return true;  // Eagerly apply alt
    default:
      return false;
  }
}


const uint16_t PROGMEM combo_j[] = { KC_W, _W(KC_R), COMBO_END};
const uint16_t PROGMEM combo_sc2_on[] = { LT(BOOT_LAYER, KC_Q), LT(BOOT_LAYER,DK_SINGLE_QT), COMBO_END};
const uint16_t PROGMEM combo_lo[] = { KC_L, _W(KC_O), COMBO_END};
const uint16_t PROGMEM combo_ou[] = { _W(KC_O), KC_U, COMBO_END};
const uint16_t PROGMEM combo_lu[] = { KC_L, KC_U, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo_j, KC_J),
    COMBO(combo_sc2_on, SC2_ON),
    COMBO(combo_lo, DK_AE),
    COMBO(combo_ou, DK_AA),
    COMBO(combo_lu, DK_OE)
};
