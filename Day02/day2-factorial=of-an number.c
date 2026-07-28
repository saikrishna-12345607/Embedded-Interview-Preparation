#include <stdio.h>
int main() {
    int num = 5;
    long long factorial = 1; // Used long long as factorials grow rapidly
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    printf("Factorial of %d: %lld", num, factorial);
    return 0;
}
