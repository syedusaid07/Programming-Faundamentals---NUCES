# include <stdio.h>

void Welcome ();
int GetWithdrawal();
void Display_amount(int amount);
int Check_withdrawal(int balance, int amount, int limit);
int cal_Balance(int balance, int amount);

int main ()
{
	int balance = 40000; 
    int amount, limit;

    Welcome();
    printf("Current Balance: Rs %d\n", balance);

    limit = GetWithdrawal();

    printf("Enter Amount to withdraw: ");
    scanf("%d", &amount);

    Display_amount(amount);

    if (Check_withdrawal(balance, amount, limit)) 
	{
        balance = cal_Balance(balance, amount);
        printf("\nTransaction Successful!\n");
        printf("Remaining Balance: Rs.%d\n", balance);
    } 
	else 
	{
        printf("\nTransaction Failed!\n");
        printf("Reason :amount is > 0, within your balance, and under Rs. 50,000.\n");
    }
    return 0;
	
}

void Welcome ()
{
	printf("\t\tWelcome to ATM\n\nss:");
}
void Display_amount(int amount) 
{
    printf("Requested Amount: Rs. %d\n", amount);
}
int GetWithdrawal() 
{
    return 50000; 
}
int Check_withdrawal(int balance, int amount, int limit) 
{  
    if (amount>0 && amount<=balance && amount<=limit) 
	{
        return 1;
    }
   // return 0;
}
cal_Balance(int balance, int amount) 
{
    return balance-amount;
}

