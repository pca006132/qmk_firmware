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
Check the `config.h` for the respective version.
