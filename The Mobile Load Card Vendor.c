#include <stdio.h>
int main()
{
    int network_code, week_status;
    float load_amount, bonus = 0.0, bonus_per = 0.0, balance;

    printf("Enter mobile load amount: ");
    scanf("%f", &load_amount); 
    printf("Enter Network Code:");
    printf("\n1- Jazz | 2- Telenor | 3- Ufone: ");
    scanf("%d", &network_code);
    printf("Enter Weekend Status");
    printf("\n1- Weekend | 0- Weekday: ");
    scanf("%d", &week_status);

    if (load_amount < 0) 
    {
     printf("Invalid Load Amount\n");
     return 0;
    }

    if (load_amount < 100.0)
    {
     bonus_per = 0.0;
    } 

    else if (load_amount <= 499.0) 
    { if (week_status == 1)
        { if (network_code == 3) 
            {
             bonus_per = 5.0; 
            } 
            else 
            {
             bonus_per = 10.0;
            }
        } 
     else 
        {
         bonus_per = 5.0;
        }
    }
    else 
    { if (network_code == 1 || week_status == 1)
        {
         bonus_per = 20.0;
        } 
     else 
        {
         bonus_per = 12.0;
        }
    }

    bonus = load_amount * (bonus_per / 100.0);
    balance = load_amount + bonus;
  
    printf("\nBonus Amount: Rs %.2f (%.1f%%)\n", bonus, bonus_per);
    printf("Final Loaded Balance: Rs %.2f\n", balance);

    return 0;
}
