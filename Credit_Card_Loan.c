#include <stdio.h>
#include <math.h>

int main ()
{
    int balance, month_payment, constant=30;
    float int_rate, N, i;

    printf("Enter balance: ");
    scanf("%d", &balance);
    printf("Enter monthly payment: ");
    scanf("%d", &month_payment);
    printf("Enter yearly interest rate: ");
    scanf("%f", &int_rate);

    i = int_rate / 365;
    N = -(1.0 / constant) * log(1.0 + ((float)balance / month_payment) * (1.0 - pow(1.0 + i, constant))) / log(1.0 + i);
    printf("It will take (%.3f) to pay off a credit card loan.", N );

 return 0;
}
