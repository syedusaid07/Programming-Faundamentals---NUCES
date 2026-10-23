#include <stdio.h>

int Division(int x) 
{
    int sum = 0;
    for (int i=1; i<=x/2; i++) 
    {
        if (x % i == 0) 
        {
            sum += i; 
        }
    }
 return sum;
}

int main() 
{
    int num, a, b;
    int count = 0; 

    printf("Enter Any Num: ");
    scanf("%d", &num);

    printf("Amicable pairs: ");
    for (a=2; a<=num; a++) 
    {
        b = Division(a);
        
        if (b>a && b<=num && Division(b) == a) 
        {
            printf("(%d, %d)\n", a, b);
            count++;
        }
    }

    if (count == 0) 
    {
        printf("No amicable pairs found!\n");
    } 
    else 
    {
        printf("Total pairs: %d\n", count);
    }

 return 0;
}