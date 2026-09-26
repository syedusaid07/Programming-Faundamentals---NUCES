#include <stdio.h>
int main()
{
    int temp;
    printf (" Enter Temperature In Celsius: ");
    scanf (" %d", &temp );

    if( temp < 15) {
       printf ("\nWeather is COLD ");
    } 
    else if ( temp > 15 && temp < 30){
     printf ("\nWeather is NORMAL ");
    } 
    else {
        printf ("\nWeather is HOT ");
    }

 return 0;
}
