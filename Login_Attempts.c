#include <stdio.h>

int main() 
{
    const int correct_PIN = 1234;
    int pin, remaining;
    int attempts = 0, max_try = 3;

    while (attempts < max_try) 
    {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin==correct_PIN) {
          printf("Login Successful\n");
          return 0; 
        } 
        else
        {
          attempts++;
          remaining = max_try - attempts;

          if (remaining>0) 
          {
             printf("Incorrect PIN. Remaining attempts: %d\n", remaining);
          }
        }
    }
    printf("Account Locked\n");

  return 0;
}