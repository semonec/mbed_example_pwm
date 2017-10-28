#include "mbed.h"

PwmOut ledPWM(D5);

int main(void)
{
  printf("1111\n");
  ledPWM.period(0.01f); // Period
  ledPWM.write(0.0f);

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