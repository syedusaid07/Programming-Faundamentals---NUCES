#include <stdio.h>
int main()
{
    int marks[5];
    int total = 0, highest, lowest;
    float avg;

    for (int i=0; i<5; i++) 
    {
      printf("Enter marks for student %d: ", i + 1);
      scanf("%d", &marks[i]);

      total += marks[i];
      if (i == 0) 
       {
         highest = marks[0];
         lowest = marks[0];
       } 
       else 
       {
         if (marks[i] > highest) {highest = marks[i];}
         if (marks[i] < lowest)  {lowest = marks[i];}
       }
    }
    avg = (float)total / 5;

    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", avg);
    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks: %d\n", lowest);

 return 0;
}