
# If you want to change the display of OLED, you need to change here

MCU = atmega32u4
BOOTLOADER = caterina

OPT_DEFS += -DUSE_MATRIX_I2C # added cuz compiles wrong, should work now

USE_I2C = yes

USE_MATRIX_I2C = yes

TAP_DANCE_ENABLE = yes

SPLIT_KEYBOARD = yes

RGBLIGHT_ENABLE = no
#RGB_MATRIX_ENABLE = WS2812 

SRC +=  matrix.c \
        split_util.c \
        split_scomm.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \
# yeet

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = no  # Virtual DIP switch configuration
MOUSEKEY_ENABLE  = yes # Mouse keys
EXTRAKEY_ENABLE  = yes # Audio control and System control < might want to enable this later
CONSOLE_ENABLE   = no  # Console for debug
COMMAND_ENABLE   = yes # Commands for debug and configuration
CUSTOM_MATRIX    = yes # Custom matrix file for the ErgoDox EZ
NKRO_ENABLE      = yes # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
UNICODE_ENABLE   = yes # Unicode
SWAP_HANDS_ENABLE= no # Allow swapping hands of keyboard
BACKLIGHT_ENABLE = no # Disables backlight
SLEEP_LED_ENABLE = no #, don't know what this does but sounds interesting...
#API_SYSEX_ENABLE = no
#RGBLIGHT_ENABLE = no

