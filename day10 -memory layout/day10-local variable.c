#include <stdio.h>

void myFunction() {
    // Local variable -> Created on the STACK
    int local_temp = 50; 
    printf("Local variable value: %d\n", local_temp);
    // local_temp is DESTROYED here when the function ends
}

int main() {
    myFunction();
    
    // ERROR: This line will break because local_temp does not exist here
    // printf("%d", local_temp); 
    
    return 0;
}
