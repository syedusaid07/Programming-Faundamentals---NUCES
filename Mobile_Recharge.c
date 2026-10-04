#include <stdio.h>
int main ()
{
    int charge_amount, total = 0, count = 0;
    
    printf("Enter Charge Amount: ");
    scanf("%d", &charge_amount);

    while (charge_amount>0)
    {
        total += charge_amount;
        count++;

       if (total>5000)
      {
         printf("Recharge Limit Reached!\n");
         break;
      }

      printf("Again enter charge amount: ");
      scanf("%d", &charge_amount);
    }
    
   printf("\nTotal recharged amount: %d", total);
   printf("\nNumber of recharge attempts: %d", count);

  return 0;
}