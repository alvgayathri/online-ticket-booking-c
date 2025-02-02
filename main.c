#include <stdio.h>
#include "user.h"
#include "booking.h"

int main() {
    printf("...\t\t\t\t\tSHANESREE TOURISM\n");
    printf("REGISTRATION\t\t\t\t\t...\n\n\n");

    int no_of_members;
    printf("Enter the number of passengers: ");
    scanf("%d", &no_of_members);

    for (int i = 1; i <= no_of_members; i++) {
        collect_user_details();
    }

    int final_amount = select_destination();
    final_amount = calculate_total_cost(final_amount);

    printf("\nFinal Amount To Be Paid: %d\n", final_amount);
    printf("\n\n...\t\t\t\t\tThank You For Registering.\t\t\t\t\t...\n");

    return 0;
}
