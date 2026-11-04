#include <stdio.h>

float deposit(float balance) 
{
    float amount;

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount<=0) {
        printf("Invalid amount!\n");
    } else 
    {
        balance = balance+amount;
        printf("Deposit successful. Updated balance: Rs. %.2f\n", balance);
    }
    return balance;
}

float withdraw(float balance) {
    float amount;

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount<=0) 
    {
        printf("Invalid amount! Withdrawal must be positive.\n");
    } else if (amount>10000) 
    {
        printf("Limit exceeded! Maximum Rs. 10,000 per transaction.\n");
    } else if (amount>balance) 
    {
        printf("Insufficient balance!\n");
    } else {
        balance = balance-amount;
        printf("Withdrawal successful. Updated balance: Rs. %.2f\n", balance);
        if (balance<5000)
            printf("WARNING: Low balance! Your balance is below Rs. 5,000.\n");
    }
    return balance;
}

int main(void) 
{
    float balance = 20000;
    int choice;

    do {
        printf("\n     ATM MENU     \n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Current balance: Rs. %.2f\n", balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please select 1-4.\n");
        }
    } while (choice != 4);

    return 0;
}