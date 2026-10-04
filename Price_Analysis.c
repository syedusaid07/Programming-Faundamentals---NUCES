#include <stdio.h>

int main() 
{
    int price[5];
    int total= 0, highest, lowest;
    float avg;

    for (int i = 0; i < 5; i++) 
    {
      printf("Enter price pair of shoes %d: ", i + 1);
      scanf("%d", &price[i]);

      total += price[i];

        if (i == 0) 
        {
         highest = price[0];
         lowest = price[0];
        } 
        else 
        {
         if (price[i] > highest) highest = price[i];
         if (price[i] < lowest)  lowest = price[i];
        }
    }
    avg = (float) total / 5;

    printf("\nTotal Amount Collected: %d\n", total);
    printf("\nAverage of shoe price: %.2f", avg);
    printf("\nHighest Units: %d", highest);
    printf("\nLowest Units: %d", lowest);

 return 0;
}