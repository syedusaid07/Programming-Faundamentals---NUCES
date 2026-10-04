#include <stdio.h>
int main() {

  unsigned short grey, binary;
  printf("ENter 16 bit Integer: ");
  scanf("%hu", &binary);

  grey = binary ^ (binary >> 1);

  printf("GREY code value is: "); 
  for(int i=15; i>=0; i--)
  {
    printf("%hu", (grey >> i) & 1);
  }
    return 0;
}
