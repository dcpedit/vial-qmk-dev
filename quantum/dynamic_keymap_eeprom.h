/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// This is the default EEPROM max address to use for dynamic keymaps.
// The default is the ATmega32u4 EEPROM max address.
// Explicitly override it if the keyboard uses a microcontroller with
// more EEPROM *and* it makes sense to increase it.
#ifndef DYNAMIC_KEYMAP_EEPROM_MAX_ADDR
#    if defined(__AVR_AT90USB646__) || defined(__AVR_AT90USB647__)
#        define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 2047
#    elif defined(__AVR_AT90USB1286__) || defined(__AVR_AT90USB1287__)
#        define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 4095
#    elif defined(__AVR_ATmega16U2__) || defined(__AVR_ATmega16U4__) || defined(__AVR_AT90USB162__) || defined(__AVR_ATtiny85__)
#        define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 511
#    elif defined(STM32_EEPROM_ENABLE)
#        define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 4095  /* can't access FEE_DENSITY_BYTES because that's defined in eeprom_stm32.c */
#    else
#        define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 1023
#    endif
#endif
