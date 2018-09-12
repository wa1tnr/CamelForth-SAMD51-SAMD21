#!/bin/sh

# call with one argument - the path/file.bin (not .uf2) to upload using bossac

# old bossac (SAMD21) does not complete on SAMD51, or upload:

if ! [ $1 ]; then
    echo no args.  Exiting; fi
    ~/.arduino15/packages/arduino/tools/bossac/1.7.0/bossac \
     -i -d --port=/dev/ttyACM0 -U true -i -e -w -v ${1} -R  # .bin not .elf

exit 0


# SAMD51 only:
if ! [ $1 ]; then
   echo no args.  Exiting; fi
   ~/.arduino15/packages/arduino/tools/bossac/1.8.0-48-gb176eee/bossac \
    -i -d --port=/dev/ttyACM0 -U -i --offset=0x4000 -e -w -v ${1} -R  # .bin not .elf

exit 0

# ---------------------------------------

#   -i -d --port=ttyACM0 -U -i --offset=0x4000 -e -w -v /tmp/arduino_build_17889/ainsuForth-uart-m4.ino.bin -R 

# ~/.arduino15/packages/arduino/tools/bossac/1.7.0/bossac \
# -i -d --port=/dev/ttyACM0 -U true -i -e -w -v ${1} -R  # .bin not .elf

