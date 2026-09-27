#include <stdio.h>
int main()
{
    int capacity, water_level, remaining, round_min;
    float fill_rate, time, cost;

    printf("Enter tanker total capacity ");
    scanf("%d", &capacity);
    printf("Enter curwnt water level in tank ");
    scanf("%d", &water_level);
    printf("the motor fill rate in liters per minute ");
    scanf("%f", &fill_rate);

    if (water_level >= capacity)
    {
        printf("Tanker is Already Full");
        return 1;
    } 
    remaining = capacity - water_level;
    time = (float)remaining / fill_rate;
    round_min = (int)time;
    if (round_min < time)
    {
      round_min++;
    }
    cost = round_min * 3.50;

    printf("\nRequired Time: %.2f minutes\n", time);
    printf("Billed Electricity Cost: Rs %.2f\n", cost);

    return 0;
}
