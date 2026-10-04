#include <stdio.h>

int main() 
{
    int price[5], total = 0;

    for (int i = 0; i < 5; i++) {
      printf("Enter price your purchased shoe %d: ", i + 1);
      scanf("%d", &price[i]);

      total += price[i];
    }

    printf("\nTotal Price: %d\n", total);
    printf("Average Price: %.2f\n", (float)total / 5);
 return 0;
}