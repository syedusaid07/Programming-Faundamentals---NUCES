#include <stdio.h>

int main() 
{
    int units[5];
    float total = 0.0;

    for (int i=0; i<5; i++) 
    {
        printf("Enter units for household %d: ", i + 1);
        scanf("%d", &units[i]);
    }
    printf("\n");
    for (int i=0; i<5; i++) 
    {
      float bill = units[i] * 10;

      if (units[i] > 500) 
      {
      bill = bill + (bill * 0.05);
      }

      printf("Household %d Bill: %.2f\n", i + 1, bill);
      total += bill;
    }
    printf("\nTotal collected amount: %.2f\n", total);
  return 0;
}