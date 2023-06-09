# MCU name
MCU = RP2040
# Bootloader selection
BOOTLOADER = rp2040
# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE 		= yes      		# Enable Bootmagic Lite
MOUSEKEY_ENABLE 		= yes      		# Mouse keys
EXTRAKEY_ENABLE 		= yes      		# Audio control and System control
CONSOLE_ENABLE 			= no         	# Console for debug
COMMAND_ENABLE 			= no         	# Commands for debug and configuration
NKRO_ENABLE 			= yes           # Enable N-Key Rollover
# AUDIO_DRIVER = pwm_software
ENCODER_ENABLE 			= yes
BACKLIGHT_ENABLE 		= no       		# Enable keyboard backlight functionality
RGBLIGHT_ENABLE     	= yes    		# Enable WS2812 RGB underlight.
RGB_MATRIX_ENABLE 		= no
RGB_MATRIX_DRIVER 		= WS2812
WS2812_DRIVER 			= vendor
OLED_ENABLE 			= yes
OLED_DRIVER 			= SSD1306
