#include <stdio.h>

int main()
{
    int price[5]; 
    int total = 0;
    float discount = 0.0, final; 

    for (int i = 0; i < 5; i++) 
    {
      printf("Enter Price Of Product %d: ", i + 1);
      scanf("%d", &price[i]); 
      total += price[i];
    } 
    if (total > 10000) {
      discount = total * 0.10;
    }
    final = (float)total - discount; 

    printf("\nOriginal Total: %d\n", total);
    printf("Applied Discount: %.2f\n", discount);
    printf("Final Bill: %.2f\n", final);
 return 0;
}