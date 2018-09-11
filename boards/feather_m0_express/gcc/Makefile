################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# wow.  'git diff' renders the 'ansi.sys' style escape sequences!

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

CFLAGS = -Wall -Werror
CFLAGS += -DADAFRUIT_FEATHER_M0_EXPRESS 

# CFLAGS += -DADAFRUIT_METRO_M4_EXPRESS
# CFLAGS += -D__SAMD51J19A__ -DADAFRUIT_METRO_M4_EXPRESS -D__SAMD51__
# CFLAGS += -D__SAMD21G18A__ -DADAFRUIT_METRO_M0_EXPRESS

# List the subdirectories for creating object files
SUB_DIRS +=  \
 \
hpl/dmac \
hal/src \
samd21a/gcc \
hpl/pm \
hpl/sysctrl \
hal/utils/src \
hpl/sercom \
examples \
hpl/gclk \
samd21a/gcc/gcc \
src \
hpl/core

# List the object files
OBJS +=  \
hal/src/hal_io.o \
samd21a/gcc/gcc/startup_samd21.o \
hal/utils/src/utils_syscalls.o \
hal/src/hal_delay.o \
hpl/pm/hpl_pm.o \
hpl/core/hpl_init.o \
hal/utils/src/utils_list.o \
hpl/core/hpl_core_m0plus_base.o \
hal/utils/src/utils_assert.o \
hpl/dmac/hpl_dmac.o \
hpl/sysctrl/hpl_sysctrl.o \
hal/src/hal_usart_sync.o \
hpl/gclk/hpl_gclk.o \
hal/src/hal_init.o \
samd21a/gcc/system_samd21.o \
examples/driver_examples.o \
driver_init.o \
hpl/sercom/hpl_sercom.o \
hal/src/hal_gpio.o \
hal/utils/src/utils_event.o \
hal/src/hal_sleep.o \
atmel_start.o \
hal/src/hal_atomic.o \
main.o

OBJS_AS_ARGS +=  \
"hal/src/hal_io.o" \
"samd21a/gcc/gcc/startup_samd21.o" \
"hal/utils/src/utils_syscalls.o" \
"hal/src/hal_delay.o" \
"hpl/pm/hpl_pm.o" \
"hpl/core/hpl_init.o" \
"hal/utils/src/utils_list.o" \
"hpl/core/hpl_core_m0plus_base.o" \
"hal/utils/src/utils_assert.o" \
"hpl/dmac/hpl_dmac.o" \
"hpl/sysctrl/hpl_sysctrl.o" \
"hal/src/hal_usart_sync.o" \
"hpl/gclk/hpl_gclk.o" \
"hal/src/hal_init.o" \
"samd21a/gcc/system_samd21.o" \
"examples/driver_examples.o" \
"driver_init.o" \
"hpl/sercom/hpl_sercom.o" \
"hal/src/hal_gpio.o" \
"hal/utils/src/utils_event.o" \
"hal/src/hal_sleep.o" \
"atmel_start.o" \
"hal/src/hal_atomic.o" \
"main.o"

# List the dependency files
DEPS := $(OBJS:%.o=%.d)

DEPS_AS_ARGS +=  \
"samd21a/gcc/gcc/startup_samd21.d" \
"hal/src/hal_gpio.d" \
"hal/src/hal_io.d" \
"hal/utils/src/utils_syscalls.d" \
"hpl/core/hpl_core_m0plus_base.d" \
"hal/utils/src/utils_list.d" \
"hpl/dmac/hpl_dmac.d" \
"hal/utils/src/utils_assert.d" \
"hal/src/hal_delay.d" \
"hpl/core/hpl_init.d" \
"hpl/sysctrl/hpl_sysctrl.d" \
"hpl/gclk/hpl_gclk.d" \
"hal/src/hal_init.d" \
"hal/src/hal_usart_sync.d" \
"driver_init.d" \
"samd21a/gcc/system_samd21.d" \
"examples/driver_examples.d" \
"hal/src/hal_sleep.d" \
"hpl/sercom/hpl_sercom.d" \
"hal/utils/src/utils_event.d" \
"hal/src/hal_atomic.d" \
"hpl/pm/hpl_pm.d" \
"atmel_start.d" \
"main.d"

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
# -T"../samd21a/gcc/gcc/samd21g18a_flash.ld" \

$(OUTPUT_FILE_PATH): $(OBJS)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -o $(OUTPUT_FILE_NAME).elf $(OBJS_AS_ARGS) -Wl,--start-group -lm -Wl,--end-group -mthumb \
-Wl,-Map="$(OUTPUT_FILE_NAME).map" --specs=nano.specs -Wl,--gc-sections -mcpu=cortex-m0plus \
 \
-T"../samd21a/gcc/gcc/samd21g18a_flash_with_bootloader.ld" \
-L"../samd21a/gcc/gcc"
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
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 $(CFLAGS) -c -std=gnu99 \
-D__SAMD21G18A__ -mcpu=cortex-m0plus  \
-I"../" -I"../config" -I"../examples" -I"../src" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/core" -I"../hpl/dmac" -I"../hpl/gclk" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/sercom" -I"../hpl/sysctrl" -I"../hri" -I"../" -I"../CMSIS/Include" -I"../samd21a/include"  \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.s
	@echo Building file: $<
	@echo ARM/GNU Assembler
	$(QUOTE)arm-none-eabi-as$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 $(CFLAGS) -c -std=gnu99 \
-D__SAMD21G18A__ -mcpu=cortex-m0plus  \
-I"../" -I"../config" -I"../examples" -I"../src" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/core" -I"../hpl/dmac" -I"../hpl/gclk" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/sercom" -I"../hpl/sysctrl" -I"../hri" -I"../" -I"../CMSIS/Include" -I"../samd21a/include"  \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.S
	@echo Building file: $<
	@echo ARM/GNU Preprocessing Assembler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 $(CFLAGS) -c -std=gnu99 \
-D__SAMD21G18A__ -mcpu=cortex-m0plus  \
-I"../" -I"../config" -I"../examples" -I"../src" -I"../hal/include" -I"../hal/utils/include" -I"../hpl/core" -I"../hpl/dmac" -I"../hpl/gclk" -I"../hpl/pm" -I"../hpl/port" -I"../hpl/sercom" -I"../hpl/sysctrl" -I"../hri" -I"../" -I"../CMSIS/Include" -I"../samd21a/include"  \
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
	# running target '[0;1;35mmake arc[0m' now
	cp   ./AtmelStart.bin    _stored/AtmelStart.bin
	cp   ./AtmelStart.eep    _stored/AtmelStart.eep
	cp   ./AtmelStart.elf    _stored/AtmelStart.elf
	cp   ./AtmelStart.hex    _stored/AtmelStart.hex
	cp   ./AtmelStart.lss    _stored/AtmelStart.lss
	cp   ./AtmelStart.map    _stored/AtmelStart.map

# git checkout -- AtmelStart.bin

checkout:
	# running target 'make checkout' now
	@git    checkout    --     _stored/AtmelStart.bin
	@git    checkout    --     _stored/AtmelStart.elf
	@git    checkout    --     _stored/AtmelStart.hex
	@git    checkout    --     _stored/AtmelStart.lss
	@git    checkout    --     _stored/AtmelStart.map

#       @git    checkout    --     AtmelStart.eep

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

clean:
	rm -f $(OBJS_AS_ARGS)
	rm -f $(OUTPUT_FILE_PATH)
	rm -f $(DEPS_AS_ARGS)
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin \
        $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map \
        $(OUTPUT_FILE_NAME).srec
