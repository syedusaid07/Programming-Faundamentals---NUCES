#include <stdio.h>

int main()
{
    int obt_marks;
    char *grade;
    char *Result;

    printf("Enter Your Obtained Marks: ");
    scanf("%d", &obt_marks);

    if (obt_marks < 0 || obt_marks > 100)
    {
        printf("Invalid Marks!\n");
        return 1;
    } 
    if (obt_marks >= 90)
    {
        grade = "A+";
    } 
    else if (obt_marks >= 80)
    {
        grade = "A";
    } 
    else if (obt_marks >= 70)
    {
        grade = "B";
    } 
    else if (obt_marks >= 60)
    {
        grade = "C";
    } 
    else if (obt_marks >= 50)
    {
        grade = "D";
    } 
    else 
    {
        grade = "F";
    }
    if (grade == "F")
    {
        Result = "Fail";
    } 
    else
    {
        Result = "Pass";
    }

    printf("Result: %s\n", Result);
    printf("Grade: %s\n", grade);

    return 0;
}
