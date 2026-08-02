#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student classroom[3];

    // Store details for 3 students
    for(int i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &classroom[i].rollNumber);
        printf("Name: ");
        scanf(" %[^\n]", classroom[i].name);
        printf("Marks: ");
        scanf("%f", &classroom[i].marks);
    }

    // Display details for 3 students
    printf("\n--- Classroom Records ---\n");
    for(int i = 0; i < 3; i++) {
        printf("Student %d -> Roll: %d, Name: %s, Marks: %.2f\n", 
                i + 1, classroom[i].rollNumber, classroom[i].name, classroom[i].marks);
    }

    return 0;
}
