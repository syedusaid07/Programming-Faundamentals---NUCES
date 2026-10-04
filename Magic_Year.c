#include <stdio.h>
int main ()
{
    int year, day, month, prod;
    
    printf("Enter date in numeric form: ");
    printf("\nEnter day - month - year last 2 digit: \n");
    scanf("%d%d%d", &day, &month, &year);

    prod = day * month;

    if(prod == year)
    {
        printf("\nIts magic year");
    } 
    else
    {
        printf("Not a Magic year");
    }
 return 0;
}
