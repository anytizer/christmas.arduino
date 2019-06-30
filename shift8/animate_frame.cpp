#include <Arduino.h>

#include "setup.h"
#include "animate.h"

/**
 * "x.......",
 */
void animate_frame(char* frame)
{
  for(int relay=0; relay<total_relays; ++relay)
  {
    bool LEDOutput = _decide_voltage(frame[relay]);

    clock_bit(LEDOutput);
  }

  /**
   * Make a trigger on latch pin
   * It takes around 2 microseconds for digitalWrite to change the state of a pin.
   * This duration is enough to create a latch signal.
   * @see https://forum.arduino.cc/index.php?topic=41046.0
   */
  digitalWrite(LATCH_PIN, HIGH);
  digitalWrite(LATCH_PIN, LOW);
}

