#include <stdio.h>

enum Month {
    JAN = 1,
    FEB,
    MAR,
    APR
};

int main() {
    // Printing individual enum values
    printf("JAN = %d\n", JAN);
    printf("FEB = %d\n", FEB);
    printf("MAR = %d\n", MAR);
    printf("APR = %d\n", APR);
    return 0;
}
