#include <stdio.h>
int main ()
{
	int prod[2][2] = 
	{
		{120,2},
		{130,3}
	};
	
	int (*p)[2]= prod; // p stores 0 col 0 row data initially 

	int i, j;		  // using loop
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("Address of [%d] , [%d] is [%p]\n", i, j, &(*(p+i))[j]);
			printf("\nValue of [%d] , [%d] is [%d]",   i, j,  (*(p+i))[j]);
		}
	}
	printf("\n\tAddress : [%p]", &(*(p))[0]); // for row 1
	printf("\n\tvalue   : [%d]\n", (*(p))[0]);
	
	printf("\n\tAddress : [%p]", &(*(p))[1]);
	printf("\n\tvalue   : [%d]\n", (*(p))[1]);
	
	// row 2
	printf("\n\tAddress : [%p]", &(*(p+1))[0]);
	printf("\n\tvalue   : [%d]\n", (*(p+1))[0]);
	
	printf("\n\tAddress : [%p]", &(*(p+1))[1]);
	printf("\n\tvalue   : [%d]", (*(p+1))[1]);

	
	return 0;
}



