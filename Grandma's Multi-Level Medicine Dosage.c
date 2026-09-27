#include <stdio.h>

int main() {
    int age, fever;
    float weight;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("ENter Weight : ");
    scanf("%f", &weight);

    printf("have you fever (1-yes / 0-no): ");
    scanf("%d", &fever);

    if (age < 2) {
        printf("Consult Doctor\n");
    }
    else if (age <= 12) {
        if (weight < 20) {
            if (fever && weight < 15) {
                printf("Consult Doctor\n");
            } else {
                printf("2.5 ml\n");
            }
        } else {
            printf("5 ml\n");
        }
    }
    else {
        if (fever || weight > 70) {
            printf("10 ml\n");
        } else {
            printf("7.5 ml\n");
        }
    }

    return 0;
}
