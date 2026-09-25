#include <stdio.h>

int main() {
    int mid, final;
    char task;
    
    printf("Enter Your Mid marks: ");
    scanf("%d", &mid);
    
    // Stage 1: Check Midterm examination
    if (mid >= 60) {
        printf("Enter Your Final marks: ");
        scanf("%d", &final);
        
        // Stage 2: Check Final examination
        if (final >= 60) {
            printf("Have you completed your lab task (Y/N): ");
            scanf(" %c", &task);
            
            // Stage 3: Check Lab tasks completion
            if (task == 'Y' || task == 'y') {
                printf("\nYou have successfully passed...\n");
            } else {
                printf("\nYou have not met the criteria (Lab tasks incomplete).\n");
            }
        } else {
            printf("\nYou have not met the criteria (Failed Final examination).\n");
        }
    } else {
        printf("\nYou have not met the criteria (Failed Midterm examination).\n");
    }
    
    return 0;
}
