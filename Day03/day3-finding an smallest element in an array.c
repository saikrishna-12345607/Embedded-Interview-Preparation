#include <stdio.h>

int main() {
    int arr[] = {12, 45, 2, 91, 34};
    int size = 5;
    int min = arr[0]; // Assume first element is smallest

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min
        }
    }
    printf("Smallest element: %d", min);
    return 0;
}
// Output: Smallest element: 2
