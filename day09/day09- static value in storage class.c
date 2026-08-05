#include <stdio.h>

void display()
{
    static int x = 0;

    x++;

    printf("%d\n", x);
}

int main()
{
    display();
    display();
    display();

    return 0;
}