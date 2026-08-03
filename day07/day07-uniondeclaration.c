#include <stdio.h>

union Student
{
    int id;
    float marks;
};

int main()
{
    union Student s;

    s.id = 101;

    printf("ID = %d", s.id);

    return 0;
}