#include <stdio.h>

int main()
{
    int marks[2][5][4];
    int i, j, k;
    int total, sum, sectionTotal, highest, highestStudent;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                printf("Section %d, Student %d, Assignment %d: ", i, j, k + 1);
                scanf("%d", &marks[i][j][k]);
            }
        }
    }

    printf("\nTotal marks of each student:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            total = 0;
            for (k = 0; k < 4; k++)
            {
                total = total + marks[i][j][k];
            }
            printf("Section %d, Student %d = %d\n", i, j, total);

            if (total < 20)
            {
                printf("   Message: Section %d, Student %d has total below 20\n", i, j);
            }
        }
    }

    printf("\nAverage of each assignment:\n");
    for (i = 0; i < 2; i++)
    {
        for (k = 0; k < 4; k++)
        {
            sum = 0;
            for (j = 0; j < 5; j++)
            {
                sum = sum + marks[i][j][k];
            }
            printf("Section %d, Assignment %d = %.2f\n", i, k + 1, sum / 5.0);
        }
    }

    printf("\nSection totals and highest student:\n");
    for (i = 0; i < 2; i++)
    {
        sectionTotal = 0;
        highest = -1;
        highestStudent = 0;

        for (j = 0; j < 5; j++)
        {
            total = 0;
            for (k = 0; k < 4; k++)
            {
                total = total + marks[i][j][k];
            }

            sectionTotal = sectionTotal + total;

            if (total > highest)
            {
                highest = total;
                highestStudent = j;
            }
        }

        printf("Section %d total = %d\n", i, sectionTotal);
        printf("Section %d highest: Student %d with %d marks\n", i, highestStudent, highest);
    }

    return 0;
}