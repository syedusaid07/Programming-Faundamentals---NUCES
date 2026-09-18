#include <stdio.h>

int main()
{
    char start, end;
    printf("Enter Starting Character: ");
    scanf(" %c", &start);

    switch(start)
    {
      case 'a':
      case 'A':
      
        printf("Enter Ending Character: ");
        scanf(" %c", &end);

        switch(end)
        {
           case 'a':
           case 'A':
           printf("America - Austria - Alaska\n");
           break;

           default:
           printf("Ending is not Matched\n");
        }
        break;

      case 'b':
      case 'B':

        printf("Enter Ending Character: ");
        scanf(" %c", &end);

          switch(end)
        {
           case 'a':
           case 'A':

           printf("Bulgaria - Blegium \n");
           break;

           default:
           printf("Ending is not Matched\n");
           break;
        }
       
      default:
        printf("Starting character not matched\n");
    }

    return 0;
}
