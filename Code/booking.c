#include <stdio.h>
#include "booking.h"

int select_destination() {
    int choice, final_amount = 0;
    
    printf("\n\n....\t\t\t\tTOURIST DESTINATIONS\t\t\t\t....\n\n");
    printf("\t\t\t\t 1. DELHI\n\t\t\t\t 2. KERALA\n");
    printf("\t\t\t\t 3. ANDHRA PRADESH\n\t\t\t\t 4. KASHMIR\n");
    printf("\t\t\t\t 5. GOA\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You have selected DELHI.\n");
            final_amount = 3600;
            break;
        case 2:
            printf("You have selected KERALA.\n");
            final_amount = 6000;
            break;
        case 3:
            printf("You have selected ANDHRA PRADESH.\n");
            final_amount = 6000;
            break;
        case 4:
            printf("You have selected KASHMIR.\n");
            final_amount = 4800;
            break;
        case 5:
            printf("You have selected GOA.\n");
            final_amount = 5400;
            break;
        default:
            printf("Invalid choice. Exiting program.\n");
            return 0;
    }
    
    return final_amount;
}

int calculate_total_cost(int base_amount) {
    int starting_date, returning_date, no_of_days, extra_service, total_cost;

    printf("Starting Date (DDMMYYYY): ");
    scanf("%d", &starting_date);

    printf("Returning Date (DDMMYYYY): ");
    scanf("%d", &returning_date);

    printf("Number of Days: ");
    scanf("%d", &no_of_days);

    total_cost = base_amount * no_of_days;

    printf("Extra Services Needed:\n1. YES\n2. NO\nEnter Your Choice: ");
    scanf("%d", &extra_service);

    if (extra_service == 1) {
        total_cost += 300;
    }

    return total_cost;
}
