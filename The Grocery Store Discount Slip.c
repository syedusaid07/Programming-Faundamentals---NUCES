#include <stdio.h>

int main()
{
    float bill, final_bill, discount = 0.0, dis_amount = 0.0;
    int membership;

    printf("Enter bill amount: ");
    scanf("%f", &bill);
    printf("Enter membership status ");
    printf("1- member / 0-non member: ");
    scanf("%d", &membership);

    if (bill < 0) {
        printf("Invalid Bill Amount\n");
        return 0;
    }

    if (bill < 500)
    {
        discount = 0.0;
    } 
    else if (bill >= 500 && bill < 2000) 
    {
        if (membership == 1)
        {
            discount = 10.0;
        } 
        else 
        {
            discount = 5.0;
        }
    } 
    else 
    {
        if (membership == 1)
        {
            discount = 15.0;
        } 
        else 
        {
            discount = 8.0;
        }
    } 

    dis_amount = bill * (discount / 100.0);
    final_bill = bill - dis_amount;

    printf("\nTotal Discount Offer: %.1f%%\n", discount);
    printf("Your Discounted Amount: Rs %.2f\n", dis_amount);
    printf("Final Payable Bill Amount: Rs %.2f\n", final_bill);

    return 0;
}
