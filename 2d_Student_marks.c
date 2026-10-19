#include<stdio.h>
int main()
{
    int marks[4][2];
    float total_Mid = 0, total_Final = 0;
    int i;

    printf("Enter Marks of Student: \n");
    for(i=0; i<4; i++)
    {
        printf("\nEnter Student %d Mid marks: ", i+1);
        scanf("%d", &marks[i][0]);

        printf("Enter Student %d Final marks: ", i+1);
        scanf("%d", &marks[i][1]);
    }

    int sum;

    for(i=0; i<4; i++)
    {
        sum = marks[i][0] + marks[i][1];
        printf("\nTotal mark of student %d = %d", i+1, sum);
    } 

    int Mid_high =     marks[0][0],   Mid_low = marks[0][0];
    int Final_high =   marks[0][1],   Final_low = marks[0][1];
    int Overall_high = marks[0][0],   Overall_low = marks[0][0];

    for(i=0; i<4; i++)
    {
        if (marks[i][0] > Mid_high) Mid_high = marks[i][0];
        if (marks[i][0] < Mid_low) Mid_low = marks[i][0];

        if (marks[i][1] > Final_high) Final_high = marks[i][1];
        if (marks[i][1] < Final_low) Final_low = marks[i][1];

        if (marks[i][0] > Overall_high) Overall_high  = marks[i][0];
        if (marks[i][0] < Overall_low) Overall_low = marks[i][0];

        if (marks[i][1] > Overall_high ) Overall_high  = marks[i][1];
        if (marks[i][1] < Overall_low) Overall_low = marks[i][1];

    }

    printf("\n\nHighest Marks:\n");
    printf("Highest in Mid: %d\n", Mid_high);
    printf("Highest in Final: %d\n", Final_high);
    printf("Highest Overall: %d\n", Overall_high);

    printf("\n3Lowest Marks:\n");
    printf("Lowest in Mid: %d\n", Mid_low);
    printf("Lowest in Final: %d\n", Final_low);
    printf("Lowest Overall: %d\n", Overall_low);

    for (int i = 0; i < 4; i++) 
    {
        total_Mid += marks[i][0];
        total_Final += marks[i][1];
    }

    printf("\n\tAverage Mid Mark: %.2f\n", total_Mid / 4.0);
    printf("\tAverage Final Mark: %.2f\n", total_Final / 4.0);

 return 0;
}