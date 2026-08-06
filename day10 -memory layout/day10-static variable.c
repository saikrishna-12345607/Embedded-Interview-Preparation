#include <stdio.h>

void counterFunction() {
    // This line runs ONLY the first time the function is called
    // It stays in memory for the whole life of the program
    static int call_count = 0; 
    
    call_count++;
    printf("This function has been called %d times\n", call_count);
}

int main() {
    counterFunction(); // Prints: 1 times
    counterFunction(); // Prints: 2 times
    counterFunction(); // Prints: 3 times
    return 0;
}
