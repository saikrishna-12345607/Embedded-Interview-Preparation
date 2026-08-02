#include <stdio.h>

// Structure Definition
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;

    // Store Employee Details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Display Employee Details
    printf("\n--- Employee Record ---\n");
    printf("ID     : %d\n", emp.id);
    printf("Name   : %s\n", emp.name);
    printf("Salary : $%.2f\n", emp.salary);

    return 0;
}
