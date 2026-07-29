#include <stdio.h>

int main() {
    int arr[] = {12, 45, 2, 91, 34};
    int size = 5;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Typecast sum to float for precision
    float average = (float)sum / size; 

    printf("Average: %.2f", average);
    return 0;
}
// Output: Average: 36.80
