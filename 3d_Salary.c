#include <stdio.h>
int main() 
{

    int salary[3][4][3];
    int i, j, k;

    printf("Enter Salaries for Departments: \n");
    for (i=0; i<3; i++) 
    {
        for (j=0; j<4; j++) 
        {
            for (k=0; k<3; k++) 
            {
                printf("Dept %d, Employee %d, Month %d: ", i + 1, j + 1, k + 1);
                scanf("%d", &salary[i][j][k]);
            }
            printf("\n");
        }  
        printf("\n");
    }

    printf("\n\t\t\tTotal Salary of Each Employee \n\n");
    for (i=0; i<3; i++) 
    {
        for (j=0; j<4; j++) 
        {
            int Total_emp = 0;

            for (k=0; k<3; k++) 
            {
                Total_emp += salary[i][j][k];
            }
            printf("Department %d, Employee %d Total = %d\n", i + 1, j + 1, Total_emp);
        }
    }

    printf("\n\t\t\tDepartment Totals and Averages \n\n");
    for (i=0; i<3; i++) 
    {
        int Total_Department = 0;

        for (j=0; j<4; j++) 
        {
            for (k=0; k<3; k++) 
            {
                Total_Department += salary[i][j][k];
            }
        }

        float Monthly_Avg = (float)Total_Department / 3.0;

        printf("Department %d | Total: %d | Monthly Average: %.2f\n", 
               i + 1, Total_Department, Monthly_Avg);
    }

    int maxSalary = salary[0][0][0];
    int Deptartment_max = 0, Employee_max = 0, Month_max = 0;

    for (i=0; i<3; i++) 
    {
        for (j=0; j<4; j++) 
        {
            for (k=0; k<3; k++) 
            {
                if (salary[i][j][k] > maxSalary) 
                {
                    maxSalary = salary[i][j][k];
                    Deptartment_max = i;
                    Employee_max = j;
                    Month_max = k;
                }
            }
        }
    }

    printf("\n\t\t\tHighest Salary Details \n\n");
    printf("Highest Salary Value : %d\n", maxSalary);
    printf("Department Number    : %d\n", Deptartment_max + 1);
    printf("Employee Number      : %d\n", Employee_max + 1);
    printf("Month Number         : %d\n", Month_max + 1);

    return 0;
}