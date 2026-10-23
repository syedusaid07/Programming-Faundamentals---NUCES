#include <stdio.h>

// declaration of function 
int cube (int x);

int main ()
{	
	int n = 7;
	printf("Cube Of Number : [%d]", cube (n));
}
// definition 
int cube (int x)
{	
	// num = 5
	return x*x*x;
}
