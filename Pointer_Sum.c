#include <stdio.h>

int main()
{
    int a, b;
    int *p, *q;
    int sum, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;     
    q = &b;  
       
    sum = *p + *q;          
    product = *p * *q;    

    printf("Sum is %d\n", sum);
    printf("Product is %d\n", product);

    return 0;
}