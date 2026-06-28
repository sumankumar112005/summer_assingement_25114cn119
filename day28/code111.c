//  a program to Create ticket booking system

#include <stdio.h>
struct Ticket {
    int ticketNumber;
    char passengerName[50];
    char destination[50];
};

int main() {
    struct Ticket ticket;

    printf("Enter ticket number: ");
    scanf("%d", &ticket.ticketNumber);

    printf("Enter passenger name: ");
    scanf(" %[^\n]%*c", ticket.passengerName); // To read string with spaces

    printf("Enter destination: ");
    scanf(" %[^\n]%*c", ticket.destination); // To read string with spaces

    printf("\nTicket Booking Details:\n");
    printf("Ticket Number: %d\n", ticket.ticketNumber);
    printf("Passenger Name: %s\n", ticket.passengerName);
    printf("Destination: %s\n", ticket.destination);

    return 0;
}
