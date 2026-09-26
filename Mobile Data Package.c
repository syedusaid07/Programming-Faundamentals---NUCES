#include <stdio.h>
int main()
{
    int bal;
    printf ("Enter Remaining Balance: ");
    scanf (" %d", &bal );

    if( bal < 500) {
       printf ("\nYou Have (Low Balance) ");
    } 
    else if ( bal > 500 && bal < 2000){
     printf ("\nYou Have (Sufficient Balance) ");
    } 
    else {
        printf ("\nYou have (Premium Balance) ");
    }

 return 0;
}
