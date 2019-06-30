#ifndef PATTERN_H
#define PATTERN_H

#include "setup.h"

typedef struct pattern
{
  /**
   * Frame animation speed
   */
  unsigned long speed;

  /**
   * How many times to repeat this pattern consequently
   */
  unsigned long repeat;

  /**
   * List of animation frames for this pattern
   * @todo Get rid of total relays - frame size and relays size to match
   */
  char* frames[total_relays];
};

/**
 * List of pattern suppliers
 * 
 * Speed: Frame animation speed
 * Repeat: Repeat this pattern for N times
 */
pattern pattern_blinker(unsigned long speed, unsigned long repeat);
pattern pattern_slider1(unsigned long speed, unsigned long repeat);
pattern pattern_slider2(unsigned long speed, unsigned long repeat);
pattern pattern_slider3(unsigned long speed, unsigned long repeat);
pattern pattern_slider4(unsigned long speed, unsigned long repeat);
pattern pattern_tearup(unsigned long speed, unsigned long repeat);
pattern pattern_opener(unsigned long speed, unsigned long repeat);
pattern pattern_spring1(unsigned long speed, unsigned long repeat);
pattern pattern_spring2(unsigned long speed, unsigned long repeat);
pattern pattern_double_runner(unsigned long speed, unsigned long repeat);
pattern pattern_run_left_right(unsigned long speed, unsigned long repeat);
pattern pattern_run_right_left(unsigned long speed, unsigned long repeat);
pattern pattern_collision(unsigned long speed, unsigned long repeat);
pattern pattern_explosion(unsigned long speed, unsigned long repeat);
pattern pattern_chopstick(unsigned long speed, unsigned long repeat);

#endif

