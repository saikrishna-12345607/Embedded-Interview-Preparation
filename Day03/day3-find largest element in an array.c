#include <stdio.h>

int main() {
    int arr[] = {12, 45, 2, 91, 34};
    int size = 5;
    int max = arr[0]; // Assume first element is largest

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max
        }
    }
    printf("Largest element: %d", max);
    return 0;
}
// Output: Largest element: 91
