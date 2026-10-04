#include <stdio.h>
int main ()
{
    int marks, total = 0, count = 0;
    float avg = 0.0;
    
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    while (marks != -1)
    {
      if (marks >= 0 && marks <= 100)
      {
         total += marks;
         count++;
      }
      else
      {
         printf("Invalid marks enter!\n");
      }
      printf("Again enter marks: ");
      scanf("%d", &marks);
    }
    
 printf("\nTotal num of students: %d", count);
 printf("\nTotal marks: %d", total);

    if (count > 0)
    {
        avg = (float)total / count;
        printf("\nAvg of marks: %.2f", avg);
    }
    else
    {
        printf("\nAvg of marks: 0.00 (No marks entered)\n");
    }
return 0;
}