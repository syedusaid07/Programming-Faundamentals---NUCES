#include <stdio.h>

int main() {
    float attendance;
    int marks, unapproved;

    printf("Enter Your -- Attendance | MArks | Unapproved leaves ");

    scanf("%f %d %d", &attendance, &marks, &unapproved);

    if (marks < 20) {
        printf("Debarred\n");
    }
    else if (attendance >= 75 && marks >= 30) {
        printf("Eligible\n");
    }
    else if (attendance >= 65 && attendance <= 74 && marks >= 40) {
        if (unapproved > 2) {
            printf("Debarred\n");
        } else {
            printf("Eligible (Grace Attendance)\n");
        }
    }
    else {
        printf("Not Eligible\n");
    }

    return 0;
}
