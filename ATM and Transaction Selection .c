#include <stdio.h>
int main()
{
   int choice, acc_type ;

  printf("   Welcome to abc Bank\n");
  printf("\n1- Balance Inquiry ");
  printf("\n2- Cash Withdrawal ");
  printf("\n3- Cash Deposit");
  printf("\n4- Change Pin\n");
  printf("\n   Choose any one.. ");
  scanf("%d", &choice);

   switch (choice)
    { 
     case 1:
       printf("\nYou selected balance Inquiry");
       break;

     case 2:

       printf("\nYou selected Cash Withdrawal\n");
       printf("1-Savings Account OR 2-Current Account");
       printf("\nFirst Select account type: \n");
       scanf("%d", &acc_type);

        switch (acc_type)
        {
         case 1:
         printf("\nYou choose Saving Accounts");
         break;
         
         case 2:
         printf("\nYou choose Current Accounts");
         break;

         default:
         printf("Invalid account choice!");
        }
        
        break;

     case 3:
        printf("\nYou selected Cash Deposit");
        break;

     case 4:
        printf("\nYou Want to Change PIN");
        break;

     default:
        printf("\nInvalid Choice!");
    }
 return 0;
}
