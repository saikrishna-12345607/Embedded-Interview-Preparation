#include <stdio.h>

int main() {
    char str1[] = "apple";
    char str2[] = "apricot";
    int i = 0;

    // Loop while characters are identical and neither string has ended
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }

    // Calculate difference of mismatching characters
    int difference = str1[i] - str2[i];

    if (difference == 0) {
        printf("Strings are completely equal.\n");
    } else if (difference > 0) {
        printf("String 1 is greater than String 2.\n");
    } else {
        printf("String 1 is less than String 2.\n");
    }

    return 0;
}
