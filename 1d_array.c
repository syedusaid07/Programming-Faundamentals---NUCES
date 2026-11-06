#include <stdio.h>
int main()
{
	int price[3]= {100, 200, 300};
	int *p = price;
	int i;
	
	for(i=0; i<3; i++)
	{	
		printf("Value is [%d]\n", price[i]);
		printf("Value is [%p]\n", &price[i]);
	}

	printf("Value [1][%d]", *p);
	printf("\nAddress [o][%p]\n", p);
	
	printf("\nValue [2][%d]", *(p+1));
	printf("\nAddress [1][%p]\n", (p+1));
	
	printf("\nValue [3][%d]", *(p+2));
	printf("\nAddress [o][%p]\n", (p+2));
	
	return 0;
}
