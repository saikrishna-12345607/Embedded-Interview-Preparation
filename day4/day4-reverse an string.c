#include <stdio.h>

int main() {
    char str[] = "DataStructures";
    int len = 0;
    
    // 1. Find the length first
    while (str[len] != '\0') {
        len++;
    }

    // 2. Initialize pointers for swapping
    int start = 0;
    int end = len - 1;
    char temp;

    // Swap characters from both ends moving inward
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
