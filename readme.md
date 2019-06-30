#Shift 8

Animate 8 LEDs using a shift register.


## Circuit Diagram:


## 74HC595N

            *
     QB 1      16  VCC
     QC 2      15  QA
     QD 3      14  SERial Line Data In - Arduino DATA_PIN (output mode)
     QE 4      13  OE' - Ground
     QF 5      12  RCLK - Arduino LATCH_PIN (output mode)
     QG 6      11  SRCLK Storage Register Clock - Arduino CLOCK_PIN (output mode)
     QH 7      10  Serial Clear - High
    GND 8      09  QH' Data Out - to pin 14 of second shift register, or floating


## Setup

See: [setup.h](shift8/setup.h)


## Pattern video


## Pattern data suppliers

  - See [pattern.h](shift8/pattern.h)
  - See [pattern.cpp](shift8/pattern.cpp)


## Animation

See [animate()](shift8/animate.cpp) function
