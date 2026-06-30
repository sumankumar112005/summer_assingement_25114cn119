// Q116 Write a program to Create inventory management system

#include <stdio.h>
struct Item {
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item;

    printf("Enter item name: ");
    scanf(" %[^\n]%*c", item.name); // To read string with spaces

    printf("Enter quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter price: ");
    scanf("%f", &item.price);

    printf("\nItem Details:\n");
    printf("Name: %s\n", item.name);
    printf("Quantity: %d\n", item.quantity);
    printf("Price: %.2f\n", item.price);

    return 0;
}
