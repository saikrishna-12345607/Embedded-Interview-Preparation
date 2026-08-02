#include <stdio.h>

// Structure Definition
struct Book {
    int bookId;
    char bookName[100];
    float price;
};

int main() {
    struct Book b;

    // Store Book Details
    printf("Enter Book ID: ");
    scanf("%d", &b.bookId);
    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.bookName);
    printf("Enter Price: ");
    scanf("%f", &b.price);

    // Display Book Details
    printf("\n--- Book Details ---\n");
    printf("Book ID : %d\n", b.bookId);
    printf("Title   : %s\n", b.bookName);
    printf("Price   : $%.2f\n", b.price);

    return 0;
}
