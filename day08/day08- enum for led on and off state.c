#include <stdio.h>

enum LEDState {
    OFF = 0,
    ON = 1
};

int main() {
    enum LEDState onboard_led = ON;

    if (onboard_led == ON) {
        printf("The LED is currently turned ON.\n");
    } else {
        printf("The LED is currently turned OFF.\n");
    }
    return 0;
}
