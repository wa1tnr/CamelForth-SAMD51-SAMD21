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
CFLAGS += -DADAFRUIT_METRO_M4_EXPRESS

# List the subdirectories for creating object files
SUB_DIRS +=  \
 \
hpl/pm \
gcc \
hpl/osc32kctrl \
hpl/ramecc \
hpl/dmac \
hal/src \
hpl/mclk \
hal/utils/src \
hpl/sercom \
examples \
hpl/gclk \
hpl/oscctrl \
gcc/gcc \
src \
src/cf \
src/cf/atsamdx1 \
hpl/core

# List the object files
OBJS +=  \
hal/src/hal_io.o \
hpl/core/hpl_core_m4.o \
hal/utils/src/utils_syscalls.o \
hpl/core/hpl_init.o \
hpl/gclk/hpl_gclk.o \
gcc/system_samd51.o \
hal/utils/src/utils_assert.o \
hal/src/hal_usart_sync.o \
hpl/mclk/hpl_mclk.o \
hal/src/hal_init.o \
gcc/gcc/startup_samd51.o \
hpl/osc32kctrl/hpl_osc32kctrl.o \
hpl/sercom/hpl_sercom.o \
hal/src/hal_gpio.o \
atmel_start.o \
src/cf/forth.o \
src/cf/atsamdx1/usart_gateway.o \
main.o

# usart_ini.o \
# src/cf/usart_gateway.o \
# src/cf/atsamdx1/

# src/cf/atsamdx1_getkey.o \

# hal/src/hal_io.o \
# hpl/core/hpl_core_m4.o \
# hal/utils/src/utils_syscalls.o \
# hal/src/hal_delay.o \
# hpl/oscctrl/hpl_oscctrl.o \
# hpl/core/hpl_init.o \
# hpl/gclk/hpl_gclk.o \
# hal/utils/src/utils_list.o \
# gcc/system_samd51.o \
# hal/utils/src/utils_assert.o \
# hpl/dmac/hpl_dmac.o \
# hpl/pm/hpl_pm.o \
# hal/src/hal_usart_sync.o \
# hpl/mclk/hpl_mclk.o \
# hpl/ramecc/hpl_ramecc.o \
# hal/src/hal_init.o \
# gcc/gcc/startup_samd51.o \
# hpl/osc32kctrl/hpl_osc32kctrl.o \
# examples/driver_examples.o \
# driver_init.o \
# usart_ini.o \
# hpl/sercom/hpl_sercom.o \
# hal/src/hal_gpio.o \
# hal/utils/src/utils_event.o \
# hal/src/hal_sleep.o \
# atmel_start.o \
# hal/src/hal_atomic.o \
# src/cf/forth.o \
# src/cf/usart_gateway.o \
# src/cf/atsamdx1_getkey.o \

# src/cf/getKey_cf.o \
# pins.o \
# src/cf/itoacf.o \
# src/cf/cmf_itoa.o \

OBJS_AS_ARGS +=  \
"hal/src/hal_io.o" \
"hpl/core/hpl_core_m4.o" \
"hal/utils/src/utils_syscalls.o" \
"hpl/core/hpl_init.o" \
"hpl/gclk/hpl_gclk.o" \
"gcc/system_samd51.o" \
"hal/utils/src/utils_assert.o" \
"hal/src/hal_usart_sync.o" \
"hpl/mclk/hpl_mclk.o" \
"hal/src/hal_init.o" \
"gcc/gcc/startup_samd51.o" \
"hpl/osc32kctrl/hpl_osc32kctrl.o" \
"hpl/sercom/hpl_sercom.o" \
"hal/src/hal_gpio.o" \
"atmel_start.o" \
"src/cf/forth.o" \
"src/cf/atsamdx1/usart_gateway.o" \
"main.o"

# "usart_ini.o" \

# "src/cf/usart_gateway.o" \
# "src/cf/atsamdx1_getkey.o" \


# "hal/src/hal_io.o" \
# "hpl/core/hpl_core_m4.o" \
# "hal/utils/src/utils_syscalls.o" \
# "hal/src/hal_delay.o" \
# "hpl/oscctrl/hpl_oscctrl.o" \
# "hpl/core/hpl_init.o" \
# "hpl/gclk/hpl_gclk.o" \
# "hal/utils/src/utils_list.o" \
# "gcc/system_samd51.o" \
# "hal/utils/src/utils_assert.o" \
# "hpl/dmac/hpl_dmac.o" \
# "hpl/pm/hpl_pm.o" \
# "hal/src/hal_usart_sync.o" \
# "hpl/mclk/hpl_mclk.o" \
# "hpl/ramecc/hpl_ramecc.o" \
# "hal/src/hal_init.o" \
# "gcc/gcc/startup_samd51.o" \
# "hpl/osc32kctrl/hpl_osc32kctrl.o" \
# "examples/driver_examples.o" \
# "driver_init.o" \
# "usart_ini.o" \
# "hpl/sercom/hpl_sercom.o" \
# "hal/src/hal_gpio.o" \
# "hal/utils/src/utils_event.o" \
# "hal/src/hal_sleep.o" \
# "atmel_start.o" \
# "hal/src/hal_atomic.o" \
# "src/cf/forth.o" \
# "src/cf/usart_gateway.o" \
# "src/cf/atsamdx1_getkey.o" \

# "src/cf/getKey_cf.o" \
# "pins.o" \
# "src/cf/itoacf.o" \
# "src/cf/cmf_itoa.o" \

# "src/asm_test.o" \
# "src/programs.o" \
# "src/ascii_art.o" \
# "src/math.o" \
# "src/runword.o" \
# "src/itoa.o" \
# "src/stack_ops.o" \
# "src/clock_gen_OE.o" \
# "src/warm.o" \
# "src/nyb_stack.o" \
# "src/readword.o" \
# "src/dict.o" \
# "src/emit.o" \
# "src/dump.o" \
# "src/getKey.o" \
# "src/serial_io.o" \

# List the dependency files
DEPS := $(OBJS:%.o=%.d)

DEPS_AS_ARGS +=  \
"hal/src/hal_io.d" \
"hpl/core/hpl_core_m4.d" \
"hal/utils/src/utils_syscalls.d" \
"hpl/core/hpl_init.d" \
"hpl/gclk/hpl_gclk.d" \
"gcc/system_samd51.d" \
"hal/utils/src/utils_assert.d" \
"hal/src/hal_usart_sync.d" \
"hpl/mclk/hpl_mclk.d" \
"hal/src/hal_init.d" \
"gcc/gcc/startup_samd51.d" \
"hpl/osc32kctrl/hpl_osc32kctrl.d" \
"hpl/sercom/hpl_sercom.d" \
"hal/src/hal_gpio.d" \
"atmel_start.d" \
"src/cf/forth.d" \
"src/cf/atsamdx1/usart_gateway.d" \
"main.d"

# "usart_ini.d" \

# "src/cf/usart_gateway.d" \
# "src/cf/atsamdx1_getkey.d" \

# "hal/src/hal_gpio.d" \
# "hal/src/hal_io.d" \
# "hpl/ramecc/hpl_ramecc.d" \
# "hpl/core/hpl_core_m4.d" \
# "hal/utils/src/utils_syscalls.d" \
# "gcc/system_samd51.d" \
# "hal/utils/src/utils_list.d" \
# "hpl/dmac/hpl_dmac.d" \
# "hal/utils/src/utils_assert.d" \
# "hal/src/hal_delay.d" \
# "hpl/core/hpl_init.d" \
# "hpl/pm/hpl_pm.d" \
# "hpl/gclk/hpl_gclk.d" \
# "gcc/gcc/startup_samd51.d" \
# "hal/src/hal_init.d" \
# "hal/src/hal_usart_sync.d" \
# "hpl/mclk/hpl_mclk.d" \
# "driver_init.d" \
# "usart_ini.d" \
# "hpl/osc32kctrl/hpl_osc32kctrl.d" \
# "examples/driver_examples.d" \
# "hal/src/hal_sleep.d" \
# "hpl/sercom/hpl_sercom.d" \
# "hal/utils/src/utils_event.d" \
# "hal/src/hal_atomic.d" \
# "hpl/oscctrl/hpl_oscctrl.d" \
# "atmel_start.d" \
# "src/cf/forth.d" \
# "src/cf/usart_gateway.d" \
# "src/cf/atsamdx1_getkey.d" \

# "src/cf/getKey_cf.d" \
# "pins.d" \
# "src/cf/itoacf.d" \
# "src/cf/cmf_itoa.d" \

# "src/asm_test.d" \
# "src/programs.d" \
# "src/ascii_art.d" \
# "src/math.d" \
# "src/runword.d" \
# "src/itoa.d" \
# "src/stack_ops.d" \
# "src/clock_gen_OE.d" \
# "src/warm.d" \
# "src/nyb_stack.d" \
# "src/readword.d" \
# "src/dict.d" \
# "src/emit.d" \
# "src/dump.d" \
# "src/getKey.d" \
# "src/serial_io.d" \

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
# -T"../gcc/gcc/samd51j19a_flash.ld" \

$(OUTPUT_FILE_PATH): $(OBJS)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -o $(OUTPUT_FILE_NAME).elf $(OBJS_AS_ARGS) -Wl,--start-group -lm -Wl,--end-group -mthumb \
-Wl,-Map="$(OUTPUT_FILE_NAME).map" --specs=nano.specs -Wl,--gc-sections -mcpu=cortex-m4 \
 \
-T"../gcc/gcc/samd51j19a_flash_with_bootloader.ld" \
-L"../gcc/gcc"
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
-D__SAMD51J19A__ -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
-I"../" -I"../config" -I"../examples" -I"../src" -I"../src/cf" -I"../src/cf/atsamdx1" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/core" -I"../hpl/dmac" -I"../hpl/gclk" -I"../hpl/mclk" -I"../hpl/osc32kctrl" -I"../hpl/oscctrl" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/ramecc" -I"../hpl/sercom" -I"../hri" -I"../" -I"../CMSIS/Include" -I"../include"  \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.s
	@echo Building file: $<
	@echo ARM/GNU Assembler
	$(QUOTE)arm-none-eabi-as$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 $(CFLAGS)        -c -std=gnu99 \
-D__SAMD51J19A__ -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
-I"../" -I"../config" -I"../examples" -I"../src" -I"../src/cf" -I"../src/cf/atsamdx1" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/core" -I"../hpl/dmac" -I"../hpl/gclk" -I"../hpl/mclk" -I"../hpl/osc32kctrl" -I"../hpl/oscctrl" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/ramecc" -I"../hpl/sercom" -I"../hri" -I"../" -I"../CMSIS/Include" -I"../include"  \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.S
	@echo Building file: $<
	@echo ARM/GNU Preprocessing Assembler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 $(CFLAGS)       -c -std=gnu99 \
-D__SAMD51J19A__ -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
-I"../" -I"../config" -I"../examples" -I"../src" -I"../src/cf" -I"../src/cf/atsamdx1" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/core" -I"../hpl/dmac" -I"../hpl/gclk" -I"../hpl/mclk" -I"../hpl/osc32kctrl" -I"../hpl/oscctrl" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/ramecc" -I"../hpl/sercom" -I"../hri" -I"../" -I"../CMSIS/Include" -I"../include"  \
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

arc:
	# running target 'make arc' now
	cp   ./AtmelStart.bin    _stored/AtmelStart.bin
	cp   ./AtmelStart.eep    _stored/AtmelStart.eep
	cp   ./AtmelStart.elf    _stored/AtmelStart.elf
	cp   ./AtmelStart.hex    _stored/AtmelStart.hex
	cp   ./AtmelStart.lss    _stored/AtmelStart.lss
	cp   ./AtmelStart.map    _stored/AtmelStart.map

# git checkout -- AtmelStart.bin

checkout:
	# running target 'make checkout' now
	@git    checkout    --     _stored/AtmelStart.eep
	@git    checkout    --     _stored/AtmelStart.bin
	@git    checkout    --     _stored/AtmelStart.elf
	@git    checkout    --     _stored/AtmelStart.hex
	@git    checkout    --     _stored/AtmelStart.lss
	@git    checkout    --     _stored/AtmelStart.map

#       @git    checkout    --     AtmelStart.eep

# install: arc checkout
install: arc
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


# for clean target:
# rm -f ./_stored/AtmelStart.???

clean:
	rm -f $(OBJS_AS_ARGS)
	rm -f $(OUTPUT_FILE_PATH)
	rm -f $(DEPS_AS_ARGS)
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin \
        $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map \
        $(OUTPUT_FILE_NAME).srec
