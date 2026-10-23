#include <stdio.h>

int discount();
// no arg with return something 

int main ()
{
	int prod_price = 2345;
	int disc_price = prod_price - (prod_price * discount ()/100);
	printf("Discounted Price : [%d]", disc_price);
}

int discount()
{
  return 10;
}

