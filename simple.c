#include <stdio.h>
int main ()
{
	int price = 1000;
	
	printf("value [%d]\n", price); 	//value
	printf("address [%p]", &price);	//address
	int *p = &price;
	// & address operator 
	// * derefrensing operator to get valu at that 
	
	*p = 2000;
	printf("\nprice cahnged [%d]", price);
	if( p==NULL)
	{
		printf("Address Not Found\n");	
	}else 
	{	
		printf("\nAddress Found [%p]", p);
	}
}
