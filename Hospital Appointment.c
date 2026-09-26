#include <stdio.h>
int main()
{
    int app, dr_avail, reg ;

    printf("1- Yes / 0- NO \n");
    printf ("\nDo you have an appointment: ");
    scanf (" %d", &app );
    printf ("Is doctor Available: ");
    scanf (" %d", &dr_avail );
    printf ("Have you completed your registraion: ");
    scanf (" %d", &reg );

   if (app == 1) 
   {
     if (dr_avail == 1)
     {
       if (reg == 1) 
       {
         printf("\nYou can meet with doctor");
       }
        else
       {
         printf("\nYour registration is not completed");
        }
     }
     else 
     {
       printf("\nDoctor is not available");
     }
   } 
    else 
    {
      printf ("\nYou have no appointment");
    }   
 return 0;
}
