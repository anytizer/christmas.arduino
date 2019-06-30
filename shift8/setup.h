#ifndef SETUP_H
#define SETUP_H

/**
 * Blackout period when pattern changes
 * ie. the time difference between two patterns
 *
 * @see Animation speed in individual pattern description
 * Ideal value: 0 - 500 (milliseconds).
 */
const unsigned long pattern_difference_duration = 0;

/**
 * *********************************************
 * Do NOT edit below once the hardware is setup.
 * *********************************************
 */

/**
 * How many relays connected?
 *
 * Hint: Number of shift register x 8 times
 * @todo Convert total relays x 8: n Shift Registers
 *
 * Will affect the size of frames per pattern
 */
const unsigned long total_relays = 8;

/**
 * Where are the shift register pins connected to Arduino pins?
 * There are 3 control pins, 1 ground pin, and 1 vcc pin only.
 */

/**
 * Pin 14 of shift register (data pin: SER) goes to pin 8 on Arduino board
 */
const int DATA_PIN = 8;

/**
 * STCP
 * Pin 12 of shift register (latch pin: RCLK) goes to pin 9 on Arduino board
 */
const int LATCH_PIN = 9;

/**
 * SHCP
 * Pin 11 of shift register (clock pin: SRCLK) goes to pin 10 on Arduino board
 */
const int CLOCK_PIN = 10;

#endif

