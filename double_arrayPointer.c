#include <stdio.h>
int main ()
{
	int sectionA[5] = {1,2,3,4,5};
	int sectionB[3] = {1,2,3};
	int i,j;
	int *p[] = {sectionA, sectionB};
	// pointer at index 0 (section A)
	// pointer at index 1 (section B)
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{ 
			if(p[i][j]== NULL)
			{
				break;
			}
			
			printf("value   [%d][%d] [%d]",  i, j,  p[i][j]);
			printf("\nAddress [%d][%d] [%p]\n\n",i, j, &p[i][j]);
		}
	}
}
