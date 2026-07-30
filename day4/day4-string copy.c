#include <stdio.h>

int main() {
    char source[] = "Programming";
    char destination[50];
    int i = 0;

    // Copy character by character
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Manually terminate the string

    printf("Copied string: %s\n", destination);
    return 0;
}
