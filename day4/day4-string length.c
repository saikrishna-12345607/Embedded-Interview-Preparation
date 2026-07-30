#include <stdio.h>

int main() {
    char str[] = "Hello World";
    int length = 0;

    // Loop until null terminator is reached
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}
