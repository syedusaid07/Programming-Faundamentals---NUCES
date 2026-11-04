#include <stdio.h>

int main()
{
    int att[2][3][4];
    int i, j, k;

    int count, high, who, total;                       
    int maxTotal = 0, bestClass = 1;  
    int full = 0;                 

    for (i = 0; i < 2; i++) {       
        high = 0;
        who = 1;
        total = 0;
        for (j=0; j<3; j++) {  
            count = 0;

            for (k=0; k<4; k++) {  
                printf("Class %d Student %d Day %d (1/0): ", i+1, j+1, k+1);
                scanf("%d", &att[i][j][k]);
                count += att[i][j][k];
            }

            printf("Student %d present %d days\n", j+1, count);

            total += count;
            if (count > high) 
            {    
                high = count;
                who = j+1;
            }

            if (count == 4)        
                full++;
        }

        printf("Class %d best student: %d\n", i+1, who);

        if (total > maxTotal) {    
            maxTotal = total;
            bestClass = i+1;
        }
    }

    printf("Students present all 4 days: %d\n", full);
    printf("Best class: %d\n", bestClass);

    return 0;
}