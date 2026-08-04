#include <stdio.h>

// Creating an alias 'counter' for 'int'
typedef int counter;

int main() {
    counter loop_cycles = 150;
    
    printf("Total loop cycles recorded: %d\n", loop_cycles);
    return 0;
}
