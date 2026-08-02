#include <stdio.h>

// Structure Definition
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    // Program 1: Store Student Details
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNumber);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name); // Reads string with spaces
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Program 2: Display Student Details
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name       : %s\n", s.name);
    printf("Marks      : %.2f\n", s.marks);

    return 0;
}
