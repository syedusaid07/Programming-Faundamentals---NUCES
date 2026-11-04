#include <stdio.h>

float calcBill(int units, char Category)
{
    if (Category == 'D' || Category == 'd') 
    {
        if (units<=100)
            return units*15;
        else
            return 100*15 + (units-100) * 20;
    }
    else 
    {
        return units*25;
    }
}

float calcSurcharge(float bill)
{
    if (bill>5000)
        return bill*0.05;
    else
        return 0;
}

void display(int units, float bill, float surcharge, float total)
{
    printf("\nUnits consumed: %d\n", units);
    printf("Bill amount: Rs. %.2f\n", bill);
    printf("Surcharge: Rs. %.2f\n", surcharge);
    printf("Final payable: Rs. %.2f\n", total);
}

int main()
{
    int units;
    char Category;
    float bill, surcharge, total;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Enter category (D = Domestic, C = Commercial): ");
    scanf(" %c", &Category);

    bill = calcBill(units, Category);
    surcharge = calcSurcharge(bill);
    total = bill+surcharge;

    display(units, bill, surcharge, total);
    return 0;
}