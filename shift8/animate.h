#ifndef ANIMATE_H
#define ANIMATE_H

#include "pattern.h"

/**
 * Method to set an individual bit
 */
void clock_bit(bool LEDOutput);

/**
 * Method to animate a set of LED states
 * All LEDs must be addressed in each frame length
 */
void animate_frame(char* frame);

/**
 * Method to animate a single pattern (set of frames)
 */
void animate_pattern(pattern* pattern);

/**
 * Loop through all patterns and blink necessary LEDs
 */
void animate();

/**
 * Determine when to glow an LED Bulb or turn on a Relay Module
 */
bool _decide_voltage(char flag='.');

#endif

