#include <stdio.h>

// Declaring the enum
enum Day {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Day today = WEDNESDAY;
    printf("The numeric value for Wednesday is: %d\n", today);
    return 0;
}
