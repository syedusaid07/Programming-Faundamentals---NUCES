#include <stdio.h>

int main()
{
    int due_days, book_type, mem_status;
    float cost = 0.0, dis_per = 0.0, dis_amount = 0.0, fine = 0.0;
    
    printf("Enter number of overdue days: ");
    scanf("%d", &due_days);
    printf("Enter Book Type (1- Regular, 2- Reference, 3- Rare): ");
    scanf("%d", &book_type);
    printf("Enter Priority Membership Status (1- Yes, 0- No): ");
    scanf("%d", &mem_status);

    if (due_days < 0) {
        printf("Invalid Overdue Days\n");
        return 0;
    }
    if (book_type == 1) 
    {
        if (due_days <= 7) {
            cost = due_days * 5.0;
        } else {
            cost = (7 * 5.0) + ((due_days - 7) * 10.0);
        }
    }
    else if (book_type == 2) 
    {
      cost = due_days * 15.0;
    } else if (book_type == 3)
    {
      cost = due_days * 30.0;
        if (due_days > 10)
        {
            printf("Banned from Borrowing\n");
        }
    }

    if (mem_status == 1 && book_type != 3)
    {
        dis_per = 20.0;
    } else
    {
        dis_per = 0.0;
    }

    dis_amount = cost * (dis_per / 100.0);
    fine = cost - dis_amount;

    printf("\nOriginal Cost: Rs %.2f\n", cost);
    printf("Discount Amount: Rs %.2f (%.1f%%)\n", dis_amount, dis_per);
    printf("Final Payable Fine: Rs %.2f\n", fine);

 return 0;
}
