# Moondox

## Keymap and Flashing
Keymap: same as [redox](https://config.qmk.fm/#/redox/rev1/base/LAYOUT)
Add keymap: download the json file from qmk configurator, and then run
```
mkdir keyboards/pca006132/moondox/keymaps/$YOURNAME
qmk json2c -o keyboards/pca006132/moondox/keymaps/$YOURNAME $JSONFILE
make pca006132/moondox/rev1:$YOURNAME:flash
```

Enter boot mode by
1. Press and hold `reset`
2. Press and hold `boot0`
3. Release `reset`
4. Release `boot`

## Wiring
```
MATRIX_ROW_PINS: B1, B0, A2, A1, A0
MATRIX_COL_PINS: B14, B15, A8, A15, B3, B4, B5
```

Diode direction: col to row. Schematic: ![](https://cdn.thingiverse.com/renders/fa/d3/9d/e4/e9/7a5ba68423a0d0bd15629fe10767211f_display_large.jpg)
Serial tx: B6, rx: B7. Note that the pins for LHS and RHS should be inverted due
to how TRRS works.

