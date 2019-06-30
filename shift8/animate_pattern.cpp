#include <Arduino.h>
#include "setup.h"
#include "animate.h"

void animate_pattern(pattern* pattern)
{
  int frames;

  /**
   * @todo Programatically make it 8, not total_relays
   * Size should be dynamically equal to frame size
   */
  frames = total_relays;

  for(int frame=0; frame<frames; ++frame)
  {
    animate_frame(pattern->frames[frame]);
    delay(pattern->speed);
  }

  delay(pattern_difference_duration);
}

