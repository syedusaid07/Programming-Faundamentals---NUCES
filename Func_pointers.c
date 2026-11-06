#include<stdio.h>
int sum ( int num1 , int num2)
{
	return num1 + num2;
}

void isEven ( int num)
{
	if(num % 2 == 0)
	{
		printf("Number is Even");
	}else
	{
		printf("Number is Odd");
	}
}

int main ()
{
	int (*p)(int); // for even func call
	p = isEven; 
	p(6);
}
