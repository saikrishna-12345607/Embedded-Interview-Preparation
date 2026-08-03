#include <stdio.h>

union Data
{
    int num;
    float marks;
};

int main()
{
    union Data d;

    d.num = 10;
    printf("%d\n", d.num);

    d.marks = 95.5;

    printf("%.1f", d.marks);

    return 0;
}