#include <stdio.h>

typedef struct {
    int pin_number;
    char port_letter;
} GPIOPin;

int main() {
   
    GPIOPin status_led;
    
    status_led.pin_number = 13;
    status_led.port_letter = 'B';
    
    printf("LED is configured on Port %c, Pin %d\n", status_led.port_letter, status_led.pin_number);
    return 0;
}
