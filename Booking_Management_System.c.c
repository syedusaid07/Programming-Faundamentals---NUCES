#include <stdio.h>

int main()
{
    int seats[50][50];
    int rows, Column, i, j, k;
    int available, Total = 0;
    int middle, distance, r, count;
    int found = 0, bookedRow = -1, startSeat = -1;

    printf("Enter number of rows (1-50): ");
    scanf("%d", &rows);
    printf("Enter seats per row (1-50): ");
    scanf("%d", &Column);

    for (i=0; i <rows; i++) {
        for (j=0; j<Column; j++) {
            do {
                printf("Seat (%d)(%d) (0=available, 1=booked): ", i, j);
                scanf("%d", &seats[i][j]);
            } while (seats[i][j] != 0 && seats[i][j] != 1);
        }
    }

    printf("\nSeat numbers: ");
    for (j=0; j<Column; j++)
        printf("%d ", j);
    printf("\n");

    for (i=0; i<rows; i++) {
        printf("Row %d: ", i);
        for (j = 0; j < Column; j++) {
            if (seats[i][j] == 0)
                printf("_ ");
            else
                printf("X ");
        }
        printf("\n");
    }

    printf("\nAvailable Seats by Row:\n");
    for (i=0; i<rows; i++) {
        available = 0;
        for (j=0; j<Column; j++) {
            if (seats[i][j] == 0)
                available++;
        }
        printf("Row %d: %d Available\n", i, available);
        Total += available;
    }
    printf("Total available seats: %d\n", Total);

    printf("\nMember want to sit together: ");
    scanf("%d", &k);

    if (k <= 0 || k > Column) {
        printf("Invalid group size");
        return 0;
    }

    middle = rows / 2;
    for (distance=0; distance<rows && found == 0; distance++) 
    {
        r = middle-distance;

        if (r>=0) {
            count = 0;
            for (j=0; j<Column; j++) {
                if (seats[r][j] == 0)
                    count++;
                else
                    count=0;

                if (count == k) {
                    bookedRow = r;
                    startSeat = j - k + 1;
                    found = 1;
                    break;
                }
            }
        }

        r = middle+distance;

        if (distance>0  && r<rows && found == 0) {
            count = 0;
            for (j=0; j<Column; j++) {
                if (seats[r][j] == 0)
                    count++;
                else
                    count=0;

                if (count == k) {
                    bookedRow = r;
                    startSeat = j - k + 1;
                    found = 1;
                    break;
                }
            }
        }
    }

    if (found == 1) 
    {
        printf("Booking successful Row %d, seats: ", bookedRow);
        for (j = startSeat; j<startSeat + k; j++) {
            seats[bookedRow][j] = 1;
            printf("%d ", j);
        }
        printf("\nUpdated seating plan:\n");

        for (j=0; j<Column; j++)
            printf("%d ", j);
        printf("\n");
        for (i=0; i<rows; i++) {
            printf("Row %d: ", i);
            for (j=0; j<Column; j++) {
                if (seats[i][j] == 0)
                    printf("_ ");
                else
                    printf("X ");
            }
            printf("\n");
        }
        printf("Remaining available seats: %d\n", Total - k);
    } 
    else 
    {
        printf("No row has %d consecutive available seats.\n", k);
    }
  return 0;
}
