#include <stdio.h>

int main() {
    int seats[10] = {0};  
    int seatNumber;
    int bookings = 0;

    printf("=== Online Bus Seat Booking System ===\n");
    printf("Seats: 0 to 9\n");

    while (bookings < 5) {
        printf("\nEnter seat number to book (0-9): ");
        scanf("%d", &seatNumber);
        if (seatNumber < 0 || seatNumber > 9) {
            printf("Invalid seat number. Please enter between 0 and 9.\n");
            continue;
        }
        if (seats[seatNumber] == 1) {
            printf("Seat already booked. Please choose another.\n");
        } else {
            seats[seatNumber] = 1;   
            bookings++;
            printf("Seat %d successfully booked! (%d/5)\n", seatNumber, bookings);
        }
    }
    printf("\n=== Final Seat Status ===\n");
    for (int i = 0; i < 10; i++) {
        printf("Seat %d: %s\n", i, seats[i] == 1 ? "Booked" : "Empty");
    }

    return 0;
}
