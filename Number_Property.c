#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int isPalindrome(int n) {
    int original = n, reversed = 0, digit;

    while (n>0) 
    {
        digit = n % 10;              
        reversed = reversed*10 + digit; 
        n = n/10;                   
    }
    return original == reversed;
}

int isPrime(int n) 
{
    int i;
    if (n<2)
        return 0;                     

    for (i=2; i*i<= n; i++) {
        if (n % i == 0)
            return 0;                
    }
    return 1;
}

int main(void) 
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input!.\n");
        return 1;
    }

    if (isEven(num))
        printf("Number : Even\n");
    else
        printf("Number : Odd\n");

    if (isPalindrome(num))
        printf("Palindrome : Yes\n");
    else
        printf("Palindrome : No\n");

    if (isPrime(num))
        printf("Prime  : Yes\n");
    else
        printf("Prime  : No\n");

    return 0;
}