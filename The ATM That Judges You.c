#include <stdio.h>

int main() {
    int acc, trans, perm = 0;

    printf("Enter Account Type-- 1=Savings, 2=Current, 3=Salary: ");
    scanf("%d", &acc);

    printf("Enter Transaction Type-- 1=Withdraw, 2=Balance Check, 3=Mini Statement: ");
    scanf("%d", &trans);

    switch (acc) {
        case 1:
            perm = 3;
            break;

        case 2:
            perm = 7;
            break;

        case 3:
            perm = 5;
            break;

        default:
            printf("Invalid Selection\n");
            return 0;
    }

    switch (trans) {
        case 1:
            if (perm & (1 << 0)) {
                printf("Transaction Approved\n");
            } else {
                printf("Transaction Denied for tAccount Type\n");
            }
            break;

        case 2:
            if (perm & (1 << 1)) {
                printf("Transaction Approved\n");
            } else {
                printf("Transaction Denied for this Account Type\n");
            }
            break;

        case 3:
            if (perm & (1 << 2)) {
                printf("Approved\n");
            } else {
                printf("Transaction \n");
            }
            break;

        default:
            printf("Invalid Selection\n");
            break;
    }

    return 0;
}
