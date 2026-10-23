#include <stdio.h>
int main()
{
	int price  = 900;
	int *p = &price;
	
	// * = drefrensing operator
	// & = Address
	// p (memory address of price)	
	// *P (it will provide the value of taht value)
	
	printf("\nProduct Price [%d]\n", price);
	printf("\nMemory Address Of Price [%p]\n", &price);
	printf("\nMemory Address stored in pointer [%p]\n", p);
	printf("Data of Price variable through defrencing the pointer [%d]\n", *p);
	
	*p = 67;
	printf("Product Price [%d]", *p);	
}
