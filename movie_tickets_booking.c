#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOTAL_SEATS 50

typedef struct Customer {
    int bookingId;
    char name[50];
    int ticketsRequested;
    struct Customer *next;
} Customer;

typedef struct {
    Customer *front;
    Customer *rear;
    int waitingCount;
} BookingQueue;

void initQueue(BookingQueue *q) {
    q->front = NULL;
    q->rear = NULL;
    q->waitingCount = 0;
}

// Add a customer to the end of the line (Enqueue)
void joinQueue(BookingQueue *q, int id, const char *name, int tickets) {
    Customer *newCustomer = (Customer *)malloc(sizeof(Customer));
    if (newCustomer == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    newCustomer->bookingId = id;
    strcpy(newCustomer->name, name);
    newCustomer->ticketsRequested = tickets;
    newCustomer->next = NULL;

    if (q->rear == NULL) {
        q->front = q->rear = newCustomer;
    } else {
        q->rear->next = newCustomer;
        q->rear = newCustomer;
    }

    q->waitingCount++;
    printf("[Joined Line] ID #%d: %s requested %d ticket(s).\n", id, name, tickets);
}

// Issue tickets to the customer at the front of the line (Dequeue)
void processBooking(BookingQueue *q, int *availableSeats) {
    if (q->front == NULL) {
        printf("[Counter Idle] No customers waiting in the queue.\n");
        return;
    }

    Customer *current = q->front;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }
    q->waitingCount--;

    if (current->ticketsRequested <= *availableSeats) {
        *availableSeats -= current->ticketsRequested;
        printf("[Booked] ID #%d (%s): %d ticket(s) issued. Seats remaining: %d\n",
               current->bookingId, current->name, current->ticketsRequested, *availableSeats);
    } else {
        printf("[Failed] ID #%d (%s): Requested %d ticket(s), but only %d left.\n",
               current->bookingId, current->name, current->ticketsRequested, *availableSeats);
    }

    free(current);
}

void displayQueue(BookingQueue *q, int availableSeats) {
    printf("\n--- Ticket Counter Status (Seats Left: %d) ---\n", availableSeats);
    if (q->front == NULL) {
        printf("Queue is currently empty.\n");
    } else {
        Customer *temp = q->front;
        int position = 1;
        while (temp != NULL) {
            printf("%d. [ID #%d] %s - %d ticket(s)\n",
                   position++, temp->bookingId, temp->name, temp->ticketsRequested);
            temp = temp->next;
        }
    }
    printf("-----------------------------------------------\n\n");
}

int main() {
    BookingQueue ticketLine;
    initQueue(&ticketLine);

    int availableSeats = TOTAL_SEATS;
    int choice, tickets, nextId = 1001;
    char name[50];

    while (1) {
        printf("1. Join Booking Queue\n");
        printf("2. Process Next Customer\n");
        printf("3. View Waiting Queue & Seats\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter customer name: ");
                scanf(" %[^\n]", name);
                printf("Enter number of tickets: ");
                scanf("%d", &tickets);
                if (tickets > 0) {
                    joinQueue(&ticketLine, nextId++, name, tickets);
                } else {
                    printf("Invalid ticket count.\n");
                }
                break;

            case 2:
                processBooking(&ticketLine, &availableSeats);
                break;

            case 3:
                displayQueue(&ticketLine, availableSeats);
                break;

            case 4:
                printf("Closing ticket counter.\n");
                return 0;

            default:
                printf("Invalid option. Try again.\n");
        }
    }
}
