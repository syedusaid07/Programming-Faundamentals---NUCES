#include <stdio.h>

int sum(int arr[], int size); // declaration

int main()
{
	int array[]= {1,2,3,4,5};
	int size = 5;
	printf("The Sum Of Elements [%d]", sum(array, size));

	
}

int sum(int arr[],int size) // definition
{
	printf("\nMemory Address of array [%p]", arr);
	int total = 0;
	int i;
	// size = 5
	for (i=0 ; i<size; i++)
	{
		total += arr[i];
	}
	return total;	
}
