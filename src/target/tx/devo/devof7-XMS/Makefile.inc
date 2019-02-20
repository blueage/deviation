FILESYSTEMS := common text
SCREENSIZE  := text
DISPLAY_DRIVER := spi/video_ia9211.c

OPTIMIZE_DFU     := 1
MODULAR          := 0x20004000
DFU_ARGS         := -c 7 -b 0x08003000

include target/tx/devo/common/Makefile.inc

ifndef BUILD_TARGET

SRC_C   += $(SDIR)/target/tx/devo/devof7/backlight.c \
           $(SDIR)/target/tx/devo/devof7/channels.c \
           $(SDIR)/target/tx/devo/devof7/crc.c \
           $(SDIR)/target/tx/devo/devof7/tx_buttons.c

endif