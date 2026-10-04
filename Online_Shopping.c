#include <stdio.h>

int main ()
{
    int price;
    int total = 0, choice = 1;
    float discount = 0.0, final;

    while (choice == 1)
    {
        printf("Enter price of an item: ");
        scanf("%d", &price);

        total += price;

        printf("Do you want to add another item (1-Yes, 0-No): ");
        scanf("%d", &choice);
    }
    if (total>10000)
    {
        discount = total * 0.10;
    }

    final = total-discount;

    printf("\nTotal Price: %d\n", total);
    printf("Discount Offer: %.2f\n", discount);
    printf("Final Amount: %.2f\n", final);

    return 0;
}