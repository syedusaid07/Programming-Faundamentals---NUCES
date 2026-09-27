#include <stdio.h>

int main()
{
    int matches, fit_status;
    float avg = 0.0;
    
    printf("Enter Your Batting Average: ");
    scanf("%f", &avg);
    printf("Enter Matches You Played: ");
    scanf("%d", &matches);
    printf("Enter Fitness Status (1- Failed, 0- Passed): ");
    scanf("%d", &fit_status);

    // Validate inputs
    if (matches < 0 || avg < 0.0) {
        printf("Invalid Data\n");
        return 0;
    }
    if (matches < 5)
    {
        printf("Rejected — Insufficient Matches\n");
    }
    else if (avg >= 35.0 && matches >= 10) 
    {
        printf("Selected\n");
    }
    else if (avg >= 25.0 && avg < 35.0 && matches >= 20) 
    {
        if (fit_status == 1)
        {
            printf("Rejected — Fitness\n");
        } 
        else
        {
            printf("Selected (Experience Quota)\n");
        }      
    } 
    else 
    {
        printf("Not Selected\n");
    }
     
    return 0;
}
