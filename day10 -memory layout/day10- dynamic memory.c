#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int main() {
    // 1. Ask the HEAP for space to hold 1 integer
    int *heap_pointer = (int*) malloc(sizeof(int));
    
    // Check if the memory was successfully given
    if (heap_pointer == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // 2. Put a value inside our new Heap space
    *heap_pointer = 999;
    printf("Value stored in Heap memory: %d\n", *heap_pointer);
    
    // 3. CRITICAL: Clean up and give the space back to the Heap
    free(heap_pointer);
    
    return 0;
}
