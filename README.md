# example_blink
A basic program, turning on and of a onboard led.
use this, to verify, that everything is working as expected.

<hr>

### Depedencies
* avrdude 
* avr-gcc
* avr-libc

Arch/Manjaro/Endavour:
```bash
pacman -S --needed avrdude avr-gcc avr-libc
```

Debian/Ubuntu/Mint:
```bash
apt install avrdude gcc-avr avr-libc
```
<hr>

### Building
Build
```bash
make
```

Build and upload:
```bash
make upload
```
