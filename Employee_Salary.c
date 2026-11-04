#include <stdio.h>

float getbonus(int years) 
{
    if (years > 5)
        return 0.15f;
    else if (years >= 3)
        return 0.10f;
    else
        return 0.05f;
}


float calculateBonus(float basicSalary, int years) {
    return basicSalary * getbonus(years);
}


float calculateTax(float salaryWithBonus) {
    if (salaryWithBonus > 100000)
        return salaryWithBonus * 0.05f;
    return 0;
}


void displayResult(float basic, float bonus, float tax, float finalSalary) 
{
    printf("Basic Salary : Rs. %.2f\n", basic);
    printf("Bonus        : Rs. %.2f\n", bonus);
    printf("Tax          : Rs. %.2f\n", tax);
    printf("Final Salary : Rs. %.2f\n", finalSalary);
}

int main(void) 
{
    float basicSalary, bonus, tax, salaryWithBonus, finalSalary;
    int years;

    printf("Enter basic salary (Rs.): ");
    scanf("%f", &basicSalary);
    printf("Enter years of service: ");
    scanf("%d", &years);

    bonus = calculateBonus(basicSalary, years);
    salaryWithBonus = basicSalary + bonus;
    tax = calculateTax(salaryWithBonus);
    finalSalary = salaryWithBonus - tax;

    displayResult(basicSalary, bonus, tax, finalSalary);

    return 0;
}