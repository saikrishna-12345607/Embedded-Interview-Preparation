#include <stdio.h>

// 1. Initialized Global Variable -> Goes to Initialized Data Segment
int global_score = 100; 

// 2. Uninitialized Global Variable -> Goes to BSS Segment (set to 0 automatically)
int global_highscore;   

void printScore() {
    printf("Global Score inside function: %d\n", global_score);
}

int main() {
    printf("Global Score: %d\n", global_score);
    printf("Default Highscore (BSS): %d\n", global_highscore);
    
    global_score = 150; // Can be modified anywhere
    printScore();
    return 0;
}
