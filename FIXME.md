

=-=-=> Will need a way to auto-add some code in the source file (patch files? append arbitrary content?)

### CAPS Word for french letter 'M'

The french M key exits CAPS Word mode when it's active
(because the french M is the ',' key on english layout, and not considered a letter)
=> Configure which key is 'word breaking' using user function `caps_word_press_user`
Ref: https://docs.qmk.fm/#/feature_caps_word?id=configure-which-keys-are-word-breaking


### Order-agnostic layer stacking for symbols layer & numbers layer

When I want to write numbers then immediatly symbols, or symbols then numbers
(like '#34' or 'foo[23]' or vim commands like '3}', '34@@', '=4}'),
it's hard to be fluid even when using different hands to enable the 2nd needed layer,
because:
* the number layer overrides the symbold layer if it was enabled first,
* BUT the symbols layer DOES NOT override the number layer when it is enabled first..

=> Need to change what the layer change keys do when both keys for layers for symbols & numbers are pressed at the same time. The last pressed layer change key should take precedence.

Refs (and examples):
- Change behavior of keys: https://docs.qmk.fm/#/custom_quantum_functions?id=programming-the-behavior-of-any-keycode
- Layer action functions: https://docs.qmk.fm/#/feature_layers?id=functions
- How keys are actually processed in QMK: https://docs.qmk.fm/#/understanding_qmk?id=process-record

NOTE: `keyrecord_t` seems have a 'time' field in `record.event.time`. (WRONG: it's the current
(`keyevent_t` is defined in `quantum/keyboard.h`, `keyrecord_t` is defined in `quantum/action.h`)
!!! That 'time' field is NOT the time since pressed, BUT current value of `timer_read()` just after matrix scan it seems.
    (see `TICK_EVENT` then `MAKE_KEYEVENT` macro in `quantum/keyboard.h`)


### Keys to activate specific RGB animations

There are _a lot_ of builtin animations, but the only way to see them is to cycle them one by one
and hope to not miss the one I'm looking for.

I'd like next/previous cycle keys, + dedicated keys for selecting some effects I like, so I can
quickely get THE ONE I LIKE or another :)

Refs:
- Keycodes around RGB lighting: https://docs.qmk.fm/#/feature_rgb_matrix?id=keycodes
- Functions available to cycle: https://docs.qmk.fm/#/feature_rgb_matrix?id=change-effect-mode


### Custom top led layer indicator (and lower color intensity?)

Currently on top of the keyboard, there are 3 LED (single colored, don't think it can be changed)
that light up when activating the first few layers.

I'd like to have different pattern on left/right half (currently both are always the same)
I'd like to control them!

Maybe ref? https://docs.qmk.fm/#/feature_rgb_matrix?id=indicators
(not sure what controls those LEDs..)
