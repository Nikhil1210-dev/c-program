#include <stdio.h>
#include <string.h> 

#define MAX_BUSES 50
#define MAX_BOOKINGS 100
struct Bus {
    int busID;
    char busName[100];
    char source[50];
    char destination[50];
    int totalSeats;
    int availableSeats;
};

struct Bus buses[MAX_BUSES];
int busCount = 0;

struct Booking {
    int busID;
    int numSeats;
};

struct Booking bookings[MAX_BOOKINGS];
int bookingCount = 0;

void addBus() {
    if (busCount < MAX_BUSES) {
        struct Bus newBus;
        printf("Enter Bus ID: ");
        scanf("%d", &newBus.busID);
        getchar();  // Consume the newline
        printf("Enter Bus Name: ");
        fgets(newBus.busName, 100, stdin);
        newBus.busName[strcspn(newBus.busName, "\n")] = '\0';
        printf("Enter Source: ");
        fgets(newBus.source, 50, stdin);
        newBus.source[strcspn(newBus.source, "\n")] = '\0';
        printf("Enter Destination: ");
        fgets(newBus.destination, 50, stdin);
        newBus.destination[strcspn(newBus.destination, "\n")] = '\0';
        printf("Enter Total Seats: ");
        scanf("%d", &newBus.totalSeats);
        newBus.availableSeats = newBus.totalSeats;
        buses[busCount] = newBus;
        busCount++;
    } else {
        printf("Bus list is full!\n");
    }
}

void viewBuses() {
    printf("Available Buses:\n");
    for (int i = 0; i < busCount; i++) {
        printf("Bus ID: %d, Bus Name: %s, Source: %s, Destination: %s, Available Seats: %d\n",
               buses[i].busID, buses[i].busName, buses[i].source, buses[i].destination, buses[i].availableSeats);
    }
}

void bookTicket() {
    int busID, numSeats;
    printf("Enter Bus ID: ");
    scanf("%d", &busID);
    printf("Enter Number of Seats: ");
    scanf("%d", &numSeats);

    // Find the bus
    int found = 0;
    for (int i = 0; i < busCount; i++) {
        if (buses[i].busID == busID) {
            found = 1;
            if (buses[i].availableSeats >= numSeats) {
                buses[i].availableSeats -= numSeats;
                printf("Booking successful! %d seats booked on bus %d\n", numSeats, busID);
                struct Booking newBooking = {busID, numSeats};
                bookings[bookingCount++] = newBooking;
            } else {
                printf("Not enough available seats!\n");
            }
            break;
        }
    }

    if (!found) {
        printf("Bus ID not found.\n");
    }
}

void cancelTicket() {
    int busID, numSeats;
    printf("Enter Bus ID: ");
    scanf("%d", &busID);
    printf("Enter Number of Seats to Cancel: ");
    scanf("%d", &numSeats);

    // Find the booking
    int found = 0;
    for (int i = 0; i < bookingCount; i++) {
        if (bookings[i].busID == busID && bookings[i].numSeats >= numSeats) {
            found = 1;
            buses[busID].availableSeats += numSeats;
            printf("Booking cancelled. %d seats refunded.\n", numSeats);
            bookings[i].numSeats -= numSeats;
            break;
        }
    }
    if (!found) {
        printf("Booking not found or invalid number of seats to cancel.\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nBus Ticket Booking System\n");
        printf("==========================\n");
        printf("1. add bus \n");
        printf("2. view bus \n");
        printf("3. book ticket\n");
        printf("4. cancel ticket \n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBus(); break;
            case 2: viewBuses(); break;
            case 3: bookTicket(); break;
            case 4: cancelTicket(); break;
            case 5: return 0;
            default: printf("Invalid choice. Please try again.\n");
        }
    }
}


// Bus Ticket Booking System
// ==========================
// 1. View Available Buses
// 2. Book Tickets
// 3. Cancel Tickets
// 4. View Bookings
// 5. Exit
// Enter your choice (1-5):
