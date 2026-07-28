#include <stdio.h>
int main() {
    int num = 4567, reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    printf("Reversed: %d", reversed);
    return 0;
}
