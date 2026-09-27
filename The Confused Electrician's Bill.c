#include <stdio.h>

int main() {
    int curr, prev;
    float units, bill = 0;

    printf("Enter Previous reading: ");
    scanf("%d", &prev);

    printf("Enter Current reading: ");
    scanf("%d", &curr);

    if (curr < prev) {
        curr = curr + 10000;
    }
    units = curr - prev;

    if (units > 400) {
        bill = (100 * 2.0) + (200 * 3.50) + (units - 400) * 5.0;
    }
    else if (units > 200) {
        bill = (100 * 2.0) + (units - 200) * 3.50;
    }
    else if (units > 100) {
        bill = (units - 100) * 2.0;
    }
    else {
        bill = 0;
    }
    
    if (units > 500) {
        bill = bill + (bill * 0.15);
    }

    if (units < 0) {
        printf("Invalid Reading\n");
        return 0;
    }

    printf("Total Consumed Units : %.1f\n", units);
    printf("Total Bill : %.2f\n", bill);

    return 0;
}
