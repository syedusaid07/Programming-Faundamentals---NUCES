#include <stdio.h>

int main() 
{
    int units[5];
    int total= 0, highest, lowest;
    float bill, amount = 0.0;

    for (int i = 0; i < 5; i++) 
    {
      printf("Enter units for household %d: ", i + 1);
      scanf("%d", &units[i]);

      total += units[i];

        if (i == 0) 
        {
         highest = units[0];
         lowest = units[0];
        } 
        else 
        {
         if (units[i] > highest) highest = units[i];
         if (units[i] < lowest)  lowest = units[i];
        }

        bill = units[i] * 10;

        if (units[i] > 500) 
        {
         bill = bill + (bill * 0.05);
        }
      amount += bill;
    }
    printf("\nTotal Amount Collected: %.2f\n", amount);
    printf("\nTotal Units: %d", total);
    printf("\nHighest Units: %d", highest);
    printf("\nLowest Units: %d", lowest);

 return 0;
}