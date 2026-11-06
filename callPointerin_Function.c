#include<stdio.h>
int sum ( int num1 , int num2)
{
	return num1 + num2;
}

int calc ( int num1, int num2, int (*p)(int , int))
// func pointer as argument 
// sum
{
	return p(num1 , num2);
}

int main ()
{
	printf("Sum %d", calc (12, 12, sum));
}
