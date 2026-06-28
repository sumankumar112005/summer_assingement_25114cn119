// Q112 Write a program to Create contact management system

#include <stdio.h>
struct Contact {
    char name[50];
    char phoneNumber[15];
    char email[50];
};

int main() {
    struct Contact contact;

    printf("Enter contact name: ");
    scanf(" %[^\n]%*c", contact.name); // To read string with spaces

    printf("Enter phone number: ");
    scanf("%s", contact.phoneNumber);

    printf("Enter email address: ");
    scanf("%s", contact.email);

    printf("\nContact Details:\n");
    printf("Name: %s\n", contact.name);
    printf("Phone Number: %s\n", contact.phoneNumber);
    printf("Email: %s\n", contact.email);

    return 0;
}
