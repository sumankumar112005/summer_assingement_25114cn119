// Q109 Write a program to Create library management system

#include <stdio.h>
struct Book {
    int id;
    char title[100];
    char author[50];
};

int main() {
    struct Book book;

    printf("Enter book ID: ");
    scanf("%d", &book.id);

    printf("Enter book title: ");
    scanf(" %[^\n]%*c", book.title); // To read string with spaces

    printf("Enter book author: ");
    scanf(" %[^\n]%*c", book.author); // To read string with spaces

    printf("\nLibrary Book Record:\n");
    printf("ID: %d\n", book.id);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);

    return 0;
}
 
