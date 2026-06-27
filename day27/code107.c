// a program to Create salary management system

#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee Salary Record:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
