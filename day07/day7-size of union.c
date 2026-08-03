#include <stdio.h>

union Data
{
    int a;
    char b;
    float c;
};

int main()
{
    printf("%d", sizeof(union Data));

    return 0;
}