#include <stdio.h>

float calcDiscount(float subtotal) 
{
    if (subtotal>5000)
        return subtotal*0.10f;
    return 0;
}

float calcMemDiscount(float subtotal, char member) 
{
    if (member == 'y' || member == 'Y')
        return subtotal*0.05f;
    return 0;
}

float CardFee(float amount, char card) 
{
    if (card == 'y' || card == 'Y')
        return amount*0.02f;
    return 0;
}

int main(void) 
{
    float price, subtotal, discount, memberDiscount;
    float discAmount, fee, finalAmount;
    int quantity;
    char member, card;

    printf("Enter product price (Rs.): ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("Is the customer a member? (y/n): ");
    scanf(" %c", &member);
    printf("Paying by card? (y/n): ");
    scanf(" %c", &card);

    subtotal = price * quantity;
    discount = calcDiscount(subtotal);
    memberDiscount = calcMemDiscount(subtotal, member);
    discAmount = subtotal - discount - memberDiscount;
    fee = CardFee(discAmount, card);
    finalAmount = discAmount + fee;

    printf("Subtotal            : Rs. %.2f\n", subtotal);
    printf("Discount (10%%)      : Rs. %.2f\n", discount);
    printf("Member Discount (5%%): Rs. %.2f\n", memberDiscount);
    printf("Card Payment Fee    : Rs. %.2f\n", fee);
    printf("Final Payable Amount: Rs. %.2f\n", finalAmount);

    return 0;
}