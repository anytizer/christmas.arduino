#include <Arduino.h>
#include "pattern.h"
#include "animate.h"

void animate()
{
  pattern patterns[] = {
    pattern_blinker(150, 2),

    // rain drop effect (when all sliders combined together)
    pattern_slider1(100, 1),
    pattern_slider2(100, 1),
    pattern_slider3(100, 1),
    pattern_slider4(100, 1),
    
    pattern_tearup(100, 3),
    pattern_opener(300, 3),
    
    pattern_spring1(300, 2),
    pattern_spring2(100, 2),
    
    pattern_double_runner(150, 4),

    // one LED at a time (Walking and Running effect)
    pattern_run_left_right(350, 1),
    pattern_run_right_left(350, 1),
    pattern_run_left_right(90, 1),
    pattern_run_right_left(80, 1),
    
    pattern_collision(150, 2),
    pattern_explosion(150, 3),
    
    pattern_chopstick(150, 2),
  };

  int total_patterns = (sizeof patterns)/(sizeof patterns[0]);
  for(int p=0; p<total_patterns; ++p)
  {
    /**
     * Repeat a pattern immediately
     */
    for(int repeat_pattern=0; repeat_pattern < patterns[p].repeat; ++repeat_pattern)
    {
      animate_pattern(&patterns[p]);
    }
  }
}

