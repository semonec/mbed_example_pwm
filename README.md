# mbed_example_pwm

Mbed example for PWM(Pulse Width Modulation)


## How To?

1. create new project

```
$ mbed new ex-pwm
```

2. Write code

```C++
#include "mbed.h"

PwmOut ledPWM(D5);

int main(void)
{
  printf("1111\n");
  ledPWM.period(0.01f); // Period
  ledPWM.write(0.0f); // Duty cycle

  while(1) {
    for (float val = 0.0f; val < 1.0f; val += 0.05f) {
      ledPWM.write(val);
      printf("ledPWM status: %f\n\r", ledPWM.read());
      wait(0.1);
    }
    wait(3.0f);
    for (float val = 1.0f; val > 0.0f; val -= 0.05f) {
      ledPWM.write(val);
      printf("ledPWM status: %f\n\r", ledPWM.read());
      wait(0.1);
    }
    wait(3.0f);
  }
}
```

3. Then compile and push
* below exeample is written under Mac OSX env
```
$ mbed compile -t GCC_ARM -m auto
$ cp {YOUR_PROJECT_PATH/BUILD/{MODEL}/{TARGET}/ex-pwm.bin /Volumes/MBED/
```

## Hardware Settings

1. Connect D5 to LED light.
1. Connect LED light's another pin to GND pin (or insert a resistor between LED light and GND pin)


## Result

You can see LED dimming.
