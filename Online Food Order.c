#include <stdio.h>
int main()
{
    int rest_Open, items_Avail, suff_Bal ;

    printf("1- Yes / 0- NO \n");
    printf ("\nIs Resturant Open: ");
    scanf (" %d", &rest_Open );
    printf ("Are Items Available: ");
    scanf (" %d", &items_Avail );
    printf ("Do you have Sufficient Balance: ");
    scanf (" %d", &suff_Bal );

   if (rest_Open == 1) 
   {
     if (items_Avail == 1)
     {
       if (suff_Bal == 1) 
       {
         printf("\nAppropriate Order Status : Order Placed Successfull");
       }
        else
       {
         printf("\nYou have not Sufficeint Balacne!");
        }
     }
     else 
     {
       printf("\nItems are not Available!");
     }
   } 
    else 
    {
      printf ("\nResturant is close now");
    }   
 return 0;
}
