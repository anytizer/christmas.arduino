#include <Arduino.h>

/**
 * Decides voltage output based on a flag character
 *
 * Specifications:
 *   '.' means no voltage; LOW
 *   'x' means high voltage; HIGH
 *
 * If external relay(s) are connected, then opposite the output.
 * ie. HIGH to turn off the relay, LOW to turn on the relay
 */
bool _decide_voltage(char flag='.')
{
  bool output = LOW;

  if(flag != '.')
  {
    output = HIGH;
  }

  return output;
}

