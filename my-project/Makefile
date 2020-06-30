PROJECT = simple-bootloader
BUILD_DIR = bin

CFILES = my-project.c

DEVICE = stm32f401ccu6
OOCD_FILE = jtag.cfg
CSTD = -std=gnu99

# You shouldn't have to edit anything below here.
VPATH += $(SHARED_DIR)
INCLUDES += $(patsubst %,-I%, . $(SHARED_DIR))
OPENCM3_DIR=../libopencm3

include $(OPENCM3_DIR)/mk/genlink-config.mk
include ../rules.mk
include $(OPENCM3_DIR)/mk/genlink-rules.mk
