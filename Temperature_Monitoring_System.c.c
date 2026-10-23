#include <stdio.h>

#define Max_sensor 10
#define Max_hour 10

void Reading(float temp[][Max_hour], int sensors, int hours)
{
    int i, j;

    for (i=0; i<sensors; i++) 
    {
        printf("\nSensor %d readings:\n", i+1);
        for (j=0; j<hours; j++) {
            printf("Hour %d temperature: ", j+1);
            scanf("%f", &temp[i][j]);
        }
    }
}

float Analyze(float readings[], int hours, int sensorNumber)
{
    int i;
    int critical = 0, warning = 0;
    int CurrStreak = 0, LongStreak = 0;
    float total = 0, average;
    float highest = readings[0], lowest = readings[0];

    for (i=0; i<hours; i++) 
    {
        total = total + readings[i];

        if (readings[i] > highest)
            highest = readings[i];
        if (readings[i] < lowest)
            lowest = readings[i];

        if (readings[i] >= 40)
            critical++;
        else if (readings[i] >= 35)
            warning++;

        if (readings[i] >= 35)
            CurrStreak++;
        else
            CurrStreak = 0;

        if (CurrStreak > LongStreak)
            LongStreak = CurrStreak;
    }

    average = total / hours;

    printf("\n\t Sensor %d Report\n", sensorNumber);
    printf("Total temperature: %.2f\n", total);
    printf("Average temperature: %.2f\n", average);
    printf("Highest temperature: %.2f\n", highest);
    printf("Lowest temperature: %.2f\n", lowest);
    printf("Critical readings (40 or above): %d\n", critical);
    printf("Warning readings (35 to 39): %d\n", warning);
    printf("Longest streak at 35 or above: %d hour(s)\n", LongStreak);

    return average;
}

int Avg_sensor(float averages[], int sensors)
{
    int i, Best = 0;

    for (i=1; i<sensors; i++) 
    {
        if (averages[i] > averages[Best])
            Best = i;
    }

    return Best;
}

int main()
{
    float temp[Max_sensor][Max_hour];
    float averages[Max_sensor];
    int sensors, hours, i, Best;

    printf("Enter number of sensors (1-%d): ", Max_sensor);
    scanf("%d", &sensors);
    printf("Enter hourly readings per sensor (1-%d): ", Max_hour);
    scanf("%d", &hours);

    if (sensors < 1 || sensors > Max_sensor || hours < 1 || hours > Max_hour) {
        printf("Invalid.\n");
        return 0;
    }

   Reading(temp, sensors, hours);

    for (i=0; i<sensors; i++)
        averages[i] = Analyze(temp[i], hours, i + 1);

    Best = Avg_sensor(averages, sensors);

    printf("\nSensor with highest average: %d\n", Best + 1);
    printf("Its average temperature: %.2f\n", averages[Best]);

    return 0;
}
