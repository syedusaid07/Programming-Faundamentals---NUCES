#include <stdio.h>

void info(char section, int rollno, int marks);

int main()
{
	printf("\tStudent Information:");
	info ('D', 1001, 76);
}

void info(char section, int rollno, int marks)
{
	printf("\n\nSection		[%c]", section);
	printf("\nRoll No		[%d]", rollno);
	printf("\nObtained Marks	[%d]", marks);
}
