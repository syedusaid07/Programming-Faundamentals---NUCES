#include <stdio.h>

int main() {
    
    int marks[2][3][3];
    int i, j, k;

    int maxMark = -1;
    int maxSem = 0, maxStud = 0, maxSubj = 0;

    printf("--- Enter Marks for 2 Semesters, 3 Students, and 3 Subjects ---\n");
    for (i = 0; i < 2; i++) {
        printf("\n--- Semester %d ---\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("  Student %d:\n", j + 1);
            for (k = 0; k < 3; k++) {
                printf("    Subject %d mark (0-100): ", k + 1);
                scanf("%d", &marks[i][j][k]);

                if (marks[i][j][k] > maxMark) {
                    maxMark = marks[i][j][k];
                    maxSem = i;
                    maxStud = j;
                    maxSubj = k;
                }
            }
        }
    }

    printf("              ANALYSIS REPORT               \n");


    printf("\n(a) Highest Mark Details:\n");
    printf("    - Highest Value : %d\n", maxMark);
    printf("    - Array Index   : marks[%d][%d][%d]\n", maxSem, maxStud, maxSubj);
   
    printf("\n(b) Marks of Student 1 in Semester 2 (All Subjects):\n");
    printf("    ");
    for (k = 0; k < 3; k++) {
        printf("Subject %d: %d   ", k + 1, marks[1][0][k]);
    }
    printf("\n");

    printf("\n(c) Total Marks of Each Student in Semester 1:\n");
    for (j = 0; j < 3; j++) {
        int studentTotal = 0;
        for (k = 0; k < 3; k++) {
            studentTotal += marks[0][j][k];
        }
        printf("    - Student %d Total = %d\n", j + 1, studentTotal);
    }

    return 0;
}