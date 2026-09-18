#include <stdio.h>

int main() {
    int age;
    char isMember;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a club member? (y/n): ");
    scanf(" %c", &isMember);

    if (age < 12) {
        printf("Ticket Price: $5 (Child Rate)\n");
    } else {

        if (age >= 60) {
            printf("Ticket Price: $6 (Senior Rate)\n");
        } else {

            if (isMember == 'y' || isMember == 'Y') {
                printf("Ticket Price: $8 (Adult Member Discount)\n");
            } else {
                printf("Ticket Price: $12 (Standard Adult Rate)\n");
            }
        }
    }

    return 0;
}
