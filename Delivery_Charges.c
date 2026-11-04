#include <stdio.h>

float calcBaseCharge(float weight) 
{
    if (weight<=2)
        return 200;
    else if (weight<=5)
        return 400;
    else
        return 700;
}

float calcDistCharge(float distance) 
{
    if (distance>10)
        return (distance-10) * 20;
    return 0;
}

float calculateDiscount(float total, char member) 
{
    if ((member == 'y' || member == 'Y') && total > 1000)
        return total*0.10f;
    return 0;
}

void Result(float base, float distCharge, float discount, float finalAmount) 
{
    printf("Base Charges     : Rs. %.2f\n", base);
    printf("Distance Charges : Rs. %.2f\n", distCharge);
    printf("Discount         : Rs. %.2f\n", discount);
    printf("Final Amount     : Rs. %.2f\n", finalAmount);
}

int main(void) 
{
    float weight, distance, baseCharge, distanceCharge, total, discount, finalAmount;
    char member;

    printf("Enter parcel weight (kg): ");
    scanf("%f", &weight);
    printf("Enter delivery distance (km): ");
    scanf("%f", &distance);
    printf("Is the customer a member? (y/n): ");
    scanf(" %c", &member);   

    baseCharge = calcBaseCharge(weight);
    distanceCharge = calcDistCharge(distance);
    total = baseCharge + distanceCharge;
    discount = calculateDiscount(total, member);
    finalAmount = total - discount;

    Result(baseCharge, distanceCharge, discount, finalAmount);

    return 0;
}