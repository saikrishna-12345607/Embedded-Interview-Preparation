#include <stdio.h>

int main() {
    int arr[] = {12, 45, 2, 91, 34};
    int size = 5;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum: %d", sum);
    return 0;
}
// Output: Sum: 184
