#
# Copyright Altera 2013,2014,2015
# All Rights Reserved.
#

C_SRC := hello.c
MULTILIBFLAGS := -mfloat-abi=softfp -mtune=cortex-a9 -mcpu=cortex-a9 -march=armv7-a
CFLAGS := $(MULTILIBFLAGS) -g -O0 -Werror -Wall -Wstrict-prototypes

BOARD := cyclonev
ifeq ($(filter $(BOARD),arriav cyclonev),$(BOARD))
LINKER_SCRIPT := cycloneV-dk-oc-ram-hosted.ld
else
ifeq ($(BOARD),arria10)
LINKER_SCRIPT := arria10-dk-oc-ram-hosted.ld
else
$(error ERROR: BOARD setting "$(BOARD)" is not invalid))
endif
endif

CROSS_COMPILE := arm-altera-eabi-
CC := $(CROSS_COMPILE)gcc
LD := $(CROSS_COMPILE)g++
NM := $(CROSS_COMPILE)nm
OD := $(CROSS_COMPILE)objdump

ifeq ($(or $(COMSPEC),$(ComSpec)),)
RM := rm -rf
else
RM := cs-rm -rf
endif

ELF ?= $(basename $(firstword $(C_SRC))).axf
OBJ := $(patsubst %.c,%.o,$(C_SRC))

.PHONY: all
all: $(ELF)

.PHONY: clean
clean:
	$(RM) $(ELF) $(OBJ) *.objdump *.map

$(OBJ): %.o: %.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(ELF): $(OBJ)
	$(LD) -T$(LINKER_SCRIPT) $(MULTILIBFLAGS) $(OBJ) -o $@
	$(OD) -d $@ > $@.objdump
	$(NM) $@ > $@.map
