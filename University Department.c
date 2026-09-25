#include <stdio.h>

int main() {
    int choice;
    
    printf("1. Computer Science\n");
    printf("2. Information Technology\n");
    printf("3. Software Engineering\n");
    printf("4. Artificial Intelligence\n");
    
    printf("Enter a number from 1 to 4: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Department: Computer Science\n");
            break;
            
        case 2:
            printf("Department: Information Technology\n");
            break;
            
        case 3:
            printf("Department: Software Engineering\n");
            break;
            
        case 4:
            printf("Department: Artificial Intelligence\n");
            break;
            
        default:
            printf("Invalid Choice\n"); 
            break;
    }
    
    return 0;
}
