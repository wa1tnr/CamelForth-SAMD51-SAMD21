################################################################################
# Automatically-generated file. Do not edit!
################################################################################

ifdef SystemRoot
	SHELL = cmd.exe
	MK_DIR = mkdir
else
	ifeq ($(shell uname), Linux)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), CYGWIN)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW32)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW64)
		MK_DIR = mkdir -p
	endif
endif

CFLAGS = -Wall -Werror -fmax-errors=3
CFLAGS += -DADAFRUIT_TRELLIS_M4_EXPRESS

# List the subdirectories for creating object files
SUB_DIRS +=  \
 \
hpl/pm \
hpl/osc32kctrl \
hpl/ramecc \
hpl/dmac \
samd51a/gcc \
usb/class/cdc/device \
hal/src \
samd51a/gcc/gcc \
hpl/mclk \
usb \
hal/utils/src \
examples \
hpl/gclk \
usb/device \
hpl/oscctrl \
hpl/usb \
hpl/core \
hpl/cmcc \
src \
src/cf \
src/cf/atsamdx1


# List the object files
OBJS +=  \
hal/src/hal_io.o \
samd51a/gcc/system_samd51.o \
hpl/core/hpl_core_m4.o \
usb/class/cdc/device/cdcdf_acm.o \
hal/utils/src/utils_syscalls.o \
hpl/dmac/hpl_dmac.o \
hpl/usb/hpl_usb.o \
hal/src/hal_delay.o \
hpl/pm/hpl_pm.o \
hpl/core/hpl_init.o \
hpl/gclk/hpl_gclk.o \
hal/utils/src/utils_list.o \
hal/utils/src/utils_assert.o \
usb_support.o \
hpl/oscctrl/hpl_oscctrl.o \
hpl/mclk/hpl_mclk.o \
hpl/ramecc/hpl_ramecc.o \
usb/usb_protocol.o \
hal/src/hal_init.o \
hal/src/hal_usb_device.o \
hpl/osc32kctrl/hpl_osc32kctrl.o \
examples/driver_examples.o \
driver_init.o \
hal/src/hal_gpio.o \
hal/utils/src/utils_event.o \
hal/src/hal_sleep.o \
hal/src/hal_cache.o \
hpl/cmcc/hpl_cmcc.o \
samd51a/gcc/gcc/startup_samd51.o \
atmel_start.o \
usb/device/usbdc.o \
hal/src/hal_atomic.o \
src/cf/forth.o \
main.o

# usb_start.o \

OBJS_AS_ARGS +=  \
"hal/src/hal_io.o" \
"samd51a/gcc/system_samd51.o" \
"hpl/core/hpl_core_m4.o" \
"usb/class/cdc/device/cdcdf_acm.o" \
"hal/utils/src/utils_syscalls.o" \
"hpl/dmac/hpl_dmac.o" \
"hpl/usb/hpl_usb.o" \
"hal/src/hal_delay.o" \
"hpl/pm/hpl_pm.o" \
"hpl/core/hpl_init.o" \
"hpl/gclk/hpl_gclk.o" \
"hal/utils/src/utils_list.o" \
"hal/utils/src/utils_assert.o" \
"usb_support.o" \
"hpl/oscctrl/hpl_oscctrl.o" \
"hpl/mclk/hpl_mclk.o" \
"hpl/ramecc/hpl_ramecc.o" \
"usb/usb_protocol.o" \
"hal/src/hal_init.o" \
"hal/src/hal_usb_device.o" \
"hpl/osc32kctrl/hpl_osc32kctrl.o" \
"examples/driver_examples.o" \
"driver_init.o" \
"hal/src/hal_gpio.o" \
"hal/utils/src/utils_event.o" \
"hal/src/hal_sleep.o" \
"hal/src/hal_cache.o" \
"hpl/cmcc/hpl_cmcc.o" \
"samd51a/gcc/gcc/startup_samd51.o" \
"atmel_start.o" \
"usb/device/usbdc.o" \
"hal/src/hal_atomic.o" \
"src/cf/forth.o" \
"main.o"

# List the dependency files
DEPS := $(OBJS:%.o=%.d)

DEPS_AS_ARGS +=  \
"hal/utils/src/utils_event.d" \
"hal/src/hal_io.d" \
"hpl/ramecc/hpl_ramecc.d" \
"hpl/core/hpl_core_m4.d" \
"hal/utils/src/utils_syscalls.d" \
"usb/class/cdc/device/cdcdf_acm.d" \
"samd51a/gcc/system_samd51.d" \
"hpl/usb/hpl_usb.d" \
"hal/utils/src/utils_list.d" \
"hpl/cmcc/hpl_cmcc.d" \
"usb_support.d" \
"hal/utils/src/utils_assert.d" \
"hal/src/hal_delay.d" \
"hpl/core/hpl_init.d" \
"hpl/pm/hpl_pm.d" \
"usb/usb_protocol.d" \
"hpl/gclk/hpl_gclk.d" \
"hal/src/hal_usb_device.d" \
"hpl/dmac/hpl_dmac.d" \
"hal/src/hal_init.d" \
"hpl/mclk/hpl_mclk.d" \
"driver_init.d" \
"hpl/osc32kctrl/hpl_osc32kctrl.d" \
"examples/driver_examples.d" \
"hal/src/hal_cache.d" \
"hal/src/hal_sleep.d" \
"hal/src/hal_gpio.d" \
"hal/src/hal_atomic.d" \
"usb/device/usbdc.d" \
"hpl/oscctrl/hpl_oscctrl.d" \
"samd51a/gcc/gcc/startup_samd51.d" \
"src/cf/forth.d" \
"main.d" \
"atmel_start.d"

OUTPUT_FILE_NAME :=AtmelStart
QUOTE := "
OUTPUT_FILE_PATH +=$(OUTPUT_FILE_NAME).elf
OUTPUT_FILE_PATH_AS_ARGS +=$(OUTPUT_FILE_NAME).elf

vpath %.c ../
vpath %.s ../
vpath %.S ../

# All Target
all: $(SUB_DIRS) $(OUTPUT_FILE_PATH)

# Linker target
# -T"../samd51a/gcc/gcc/samd51g19a_flash.ld" \

$(OUTPUT_FILE_PATH): $(OBJS)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -o $(OUTPUT_FILE_NAME).elf $(OBJS_AS_ARGS) -Wl,--start-group -lm -Wl,--end-group -mthumb \
-Wl,-Map="$(OUTPUT_FILE_NAME).map" --specs=nano.specs -Wl,--gc-sections -mcpu=cortex-m4 \
 \
-T"../samd51a/gcc/gcc/samd51g19a_flash_with_bootloader.ld" \
-L"../samd51a/gcc/gcc"
	@echo Finished building target: $@

	"arm-none-eabi-objcopy" -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).bin"
	"arm-none-eabi-objcopy" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  \
        "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).hex"
	"arm-none-eabi-objcopy" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma \
        .eeprom=0 --no-change-warnings -O binary "$(OUTPUT_FILE_NAME).elf" \
        "$(OUTPUT_FILE_NAME).eep" || exit 0
	"arm-none-eabi-objdump" -h -S "$(OUTPUT_FILE_NAME).elf" > "$(OUTPUT_FILE_NAME).lss"
	"arm-none-eabi-size" "$(OUTPUT_FILE_NAME).elf"

	

# Compiler targets




%.o: %.c
	@echo Building file: $<
	@echo ARM/GNU C Compiler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 $(CFLAGS)       -c -std=gnu99 \
-D__SAMD51G19A__ -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
-I"../" -I"../config" -I"../examples" -I"../src" -I"../src/cf" -I"../src/cf/atsamdx1" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/cmcc" -I"../hpl/core" -I"../hpl/dmac" -I"../hpl/gclk" -I"../hpl/mclk" -I"../hpl/osc32kctrl" -I"../hpl/oscctrl" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/ramecc" -I"../hpl/usb" -I"../hri" -I"../" -I"../config" -I"../usb" -I"../usb/class/cdc" -I"../usb/class/cdc/device" -I"../usb/device" -I"../" -I"../CMSIS/Include" -I"../samd51a/include"  \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.s
	@echo Building file: $<
	@echo ARM/GNU Assembler
	$(QUOTE)arm-none-eabi-as$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 $(CFLAGS)       -c -std=gnu99 \
-D__SAMD51G19A__ -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
-I"../" -I"../config" -I"../examples" -I"../src" -I"../src/cf" -I"../src/cf/atsamdx1" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/cmcc" -I"../hpl/core" -I"../hpl/dmac" -I"../hpl/gclk" -I"../hpl/mclk" -I"../hpl/osc32kctrl" -I"../hpl/oscctrl" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/ramecc" -I"../hpl/usb" -I"../hri" -I"../" -I"../config" -I"../usb" -I"../usb/class/cdc" -I"../usb/class/cdc/device" -I"../usb/device" -I"../" -I"../CMSIS/Include" -I"../samd51a/include"  \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.S
	@echo Building file: $<
	@echo ARM/GNU Preprocessing Assembler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 $(CFLAGS)       -c -std=gnu99 \
-D__SAMD51G19A__ -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
-I"../" -I"../config" -I"../examples" -I"../src" -I"../src/cf" -I"../src/cf/atsamdx1" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/cmcc" -I"../hpl/core" -I"../hpl/dmac" -I"../hpl/gclk" -I"../hpl/mclk" -I"../hpl/osc32kctrl" -I"../hpl/oscctrl" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/ramecc" -I"../hpl/usb" -I"../hri" -I"../" -I"../config" -I"../usb" -I"../usb/class/cdc" -I"../usb/class/cdc/device" -I"../usb/device" -I"../" -I"../CMSIS/Include" -I"../samd51a/include"  \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

# Detect changes in the dependent files and recompile the respective object files.
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DEPS)),)
-include $(DEPS)
endif
endif

$(SUB_DIRS):
	$(MK_DIR) "$@"

install:
	@echo -n "[0;1;33;40msleeping 5 seconds.."
	@sleep 5
	@echo    ".  Done.[0m"
	@sleep 1
	# running target '[0;1;34mmake install[0m' now
	@sleep 1
	@echo "[0;1;32;40m./scripts/_bossac_local.sh [0;1;36;40m./AtmelStart.bin[0m"
	@sleep 1
	@./scripts/_bossac_local.sh ./AtmelStart.bin
	# use 'make checkout' to tell git no changes to AtmelStart.*
	# once it is programmed, that is. ;)

cleanup:
	rm -rf examples hal hpl samd51a usb

clean:
	rm -f $(OBJS_AS_ARGS)
	rm -f $(OUTPUT_FILE_PATH)
	rm -f $(DEPS_AS_ARGS)
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin \
        $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map \
        $(OUTPUT_FILE_NAME).srec
