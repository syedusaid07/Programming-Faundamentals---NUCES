#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *p, *q;
    p = &a;     
    q = &b;     

    printf("Value of A = %d, Address of A = %p\n", *p, p);
    printf("Value of B = %d, Address of B = %p\n", *q, q);

    int temp = *p;
    *p = *q;
    *q = temp;

    printf("\nAfter swap:\n");
    printf("Value of A = %d, Address of A = %p\n", *p, p);
    printf("Value of B = %d, Address of B = %p\n", *q, q);

    return 0;
}