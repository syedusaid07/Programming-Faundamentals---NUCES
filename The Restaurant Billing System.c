#include <stdio.h>

int main()
{
    int meal_category, customer_type;
    float bill_amount, service_per = 0.0, service_amount = 0.0;
    float dis_per = 0.0, dis_amount = 0.0, final = 0.0;

    printf("Enter bill amount: ");
    scanf("%f", &bill_amount);
    
    printf("Enter Meal Category (1 = Fast Food, 2 = Desi Food, 3 = Chinese): ");
    scanf("%d", &meal_category);
    
    printf("Enter Customer Type (1 = Student, 2 = Regular): ");
    scanf("%d", &customer_type);

    if (bill_amount < 0) {
        printf("Invalid Bill Amount\n");
        return 0;
    }
    switch (meal_category)
    {
        case 1: 
           service_per = 5.0;
            break;
        case 2:
            service_per = 8.0;
            break;
        case 3: 
           service_per = 10.0;
            break;
    }

    service_amount = bill_amount * (service_per / 100.0);

    if (bill_amount >= 1000.0)
    {
        if (customer_type == 1)
        {
            dis_per = 15.0;
        }
        else 
        {
            dis_per = 10.0;
        }
    }
    else
    {
        if (customer_type == 1) 
        {
            dis_per = 5.0;
        }
        else 
        {
            dis_per = 0.0;
        }
    }

    dis_amount = bill_amount * (dis_per / 100.0);
    final = bill_amount + service_amount - dis_amount;

    printf("\nOriginal Bill: Rs %.2f\n", bill_amount);
    printf("Service Charge: Rs %.2f (%.1f%%)\n", service_amount, service_per);
    printf("Discount Amount: Rs %.2f (%.1f%%)\n", dis_amount, dis_per);
    printf("Final Payable Amount: Rs %.2f\n", final);

    return 0;
}
