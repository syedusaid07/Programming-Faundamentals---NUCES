#include <stdio.h>
int main()
{
   float bill, gallons;

   printf("Enter Number of Gallons: ");
   scanf("%f", &gallons);
   
   if (gallons <= 100)
   {
     bill = gallons* 0.45;
   }
   else if (gallons <= 350)
   {
     bill = (100 * 0.45) + (gallons - 100) * 0.85;
   }
   else if (gallons <= 600)
   {
     bill = (100 * 0.45) + (250 * 0.85) + (gallons - 350 ) * 1.45;
   }
   else
   {
     bill = (100 * 0.45) + (250 * 0.85) + (250 * 1.45) + (gallons - 600) * 260;
   }

   bill = bill + (bill * 0.14);

   printf("\nTotal Bill of Gallons = %.2f", bill);
  return 0; 
}
