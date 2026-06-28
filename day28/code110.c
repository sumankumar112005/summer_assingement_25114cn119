// a program to Create bank account system

#include <stdio.h>
struct BankAccount {
    int accountNumber;
    char accountHolder[50];
    float balance;
};

int main() {
    struct BankAccount account;

    printf("Enter account number: ");
    scanf("%d", &account.accountNumber);

    printf("Enter account holder name: ");
    scanf(" %[^\n]%*c", account.accountHolder); // To read string with spaces

    printf("Enter initial balance: ");
    scanf("%f", &account.balance);

    printf("\nBank Account Details:\n");
    printf("Account Number: %d\n", account.accountNumber);
    printf("Account Holder: %s\n", account.accountHolder);
    printf("Balance: %.2f\n", account.balance);

    return 0;
}
