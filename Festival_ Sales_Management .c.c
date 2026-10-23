#include <stdio.h>

int Valid_days(void)
{
    int days;
    do {
        printf("Enter number of festival days (1-7): ");
        scanf("%d", &days);
        if (days<1 || days>7)
            printf("Invalid days!.\n");
    } while (days<1 || days>7);

    return days;
}

float Daily_sales(int Day_count)
{
    int orders, i;
    float amount, total = 0, highest = 0, average;

    do {
        printf("Day %d - number of orders: ", Day_count);
        scanf("%d", &orders);
        if (orders < 1)
            printf("Enter at least one order.\n");
    } while (orders < 1);

    for (i=1; i <= orders; i++) 
    {
        do {
            printf("Order %d amount (Rs.): ", i);
            scanf("%f", &amount);
            if (amount <= 0)
                printf("Amount is Invalid! Try again.\n");
        } while (amount <= 0);

        total += amount;
        if (i == 1 || amount>highest)
            highest = amount;
    }

    average = total / orders;
    printf("Total sales: Rs. %.2f\n", total);
    printf("Average order amount: Rs. %.2f\n", average);
    printf("Highest order amount: Rs. %.2f\n", highest);

    return total;
}

int Find_high(float Daily_sales[], int Num_days)
{
    int i, bestDay = 0;

    for (i=1; i<Num_days; i++) {
        if (Daily_sales[i] > Daily_sales[bestDay])
            bestDay = i;
    }

    return bestDay + 1;
}

void Show_chart(float Daily_sales[], int Num_days)
{
    int i, j, stars;

    printf("\nDaily Sales Bar Chart ( each complete Rs. 100)\n");
    for (i=0; i < Num_days; i++) 
    {
        stars = (int)(Daily_sales[i] / 100);
        printf("Day %d: ", i + 1);
        for (j=0; j < stars; j++)
            printf("*");
        printf("\n");
    }
}

int main(void)
{
    float sales[7], Total_festival = 0;
    int days, i, highestDay;

    days = Valid_days();

    for (i=0; i<days; i++) {
        sales[i] = Daily_sales(i + 1);
        Total_festival += sales[i];
    }

    highestDay = Find_high(sales, days);
    printf("\nTotal festival sales: Rs. %.2f\n", Total_festival);
    printf("Highest sales Day %d Rs. %.2f.\n", highestDay, sales[highestDay - 1]);

    Show_chart(sales, days);

    return 0;
}
