#include <stdio.h>

int sum (int num1, int num2);
// return + Arg

int main()
{
	int num1 = 56;
	int num2 = 45;
	printf("Sum Of Two Numbers: [%d]", sum(num1, num2));
}

int sum (int num1, int num2)
{
	return num1+num2;
}

