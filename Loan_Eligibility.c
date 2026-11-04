#include <stdio.h>

int checkAge(int age) {
    return age>=21;
}

int checkSalary(float salary) {
    return salary>=50000;
}

float calcRemaining(float salary, float existingPayments) {
    return salary-existingPayments;
}

int checkRemaining(float salary, float remaining) {
    return remaining >= 0.40f * salary;
}

float calcLoan(float remaining) {
    return 10*remaining;
}

int main(void) 
{
    int age;
    float salary, existingPayments, remaining, maxLoan;
    int eligible = 1;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly salary (Rs.): ");
    scanf("%f", &salary);
    printf("Enter existing monthly loan payments (Rs.): ");
    scanf("%f", &existingPayments);

    remaining = calcRemaining(salary, existingPayments);

    if (!checkAge(age)) 
    {
        printf("Not eligible: Age must be at least 21 years.\n");
        eligible = 0;
    }
    if (!checkSalary(salary)) 
    {
        printf("Not eligible: Monthly salary must be at least Rs. 50,000.\n");
        eligible = 0;
    }
    if (!checkRemaining(salary, remaining)) 
    {
        printf("Not eligible: Remaining income after payments must be at least 40%% of salary.\n");
        eligible = 0;
    }

    if (eligible) 
    {
        maxLoan = calcLoan(remaining);
        printf("Congratulations! You are eligible for a loan.\n");
        printf("Remaining monthly income : Rs. %.2f\n", remaining);
        printf("Maximum loan amount      : Rs. %.2f\n", maxLoan);
    }

    return 0;
}