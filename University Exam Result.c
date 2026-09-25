#include <stdio.h>        

int main() 
{
   int mid, final;
   char task;
   
   printf("\nEnter Your Mid marks: ");
   scanf("%d", &mid);
   
   printf("\nEnter Your Final marks: ");
   scanf("%d", &final);
   
   printf("\nHave You completed your lab task (Y/N): ");
   scanf(" %c", &task); 
   
   if (mid >= 60 && final >= 60 && (task == 'Y' || task == 'y')) 
   { 
       printf("\nYou have successfully passed...");
   } else {
       printf("You have not met the criteria!");   
   }
   
   return 0;                     
}
