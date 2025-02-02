#include <stdio.h>
#include "user.h"

void collect_user_details() {
    char first_name[20], last_name[20], gender[10];
    int age;
    double contact_number;

    printf("Enter First Name: ");
    scanf("%s", first_name);

    printf("Enter Last Name: ");
    scanf("%s", last_name);

    printf("Enter Gender: ");
    scanf("%s", gender);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Contact Number: ");
    scanf("%lf", &contact_number);

    printf("\n\t\t\t\tPASSENGER'S NAME: %s %s\n", first_name, last_name);
    printf("\t\t\t\tPASSENGER'S GENDER: %s\n", gender);
    printf("\t\t\t\tPASSENGER'S AGE: %d\n", age);
    printf("\t\t\t\tPASSENGER'S CONTACT NUMBER: %.0lf\n", contact_number);
}
