#include <stdio.h>
int main ()
{
    int amount;
    int balance = 50000, count=1;
    
    printf("Enter Withdrawal amount: ");
    scanf("%d", &amount);
 
    while (amount>0)
    {
        if(amount <= balance)
        {
             count++;
             balance -= amount;  
        } 
        else
        {
              printf("Insufficient balance amount! : ");
        }
      printf("Again enter Withdrawal amount: ");
      scanf("%d", &amount);
    }
    
    printf("\nTotal withdrawal Request %d", count);
    printf("\nTotal Remaining Balance %d", balance);
    
 return 0;
}