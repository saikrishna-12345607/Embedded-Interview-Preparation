#include <stdio.h>
#include <stdbool.h>
int main() {
    int num = 1221, original = num, reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if (original == reversed) printf("%d is a Palindrome", original);
    else printf("%d is not a Palindrome", original);
    return 0;
}
