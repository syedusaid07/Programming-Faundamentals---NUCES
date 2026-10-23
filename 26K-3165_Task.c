#include <stdio.h>

// Function Prototypes
void welcome();
void displayAmount(float amount);
float getWithdrawalLimit();
float calculateBalance(float currentBalance, float withdrawalAmount);
int checkWithdrawal(float currentBalance, float withdrawalAmount, float maxLimit);

int main() {
    // Initial account balance
    float currentBalance = 75000.00; 
    float withdrawalAmount;
    float maxLimit;
    
    // 1. Call welcome function
    welcome();
    
    printf("Current Account Balance: Rs. %.2f\n", currentBalance);
    
    // 2. Get the predefined maximum withdrawal limit
    maxLimit = getWithdrawalLimit();
    printf("Maximum Withdrawal Limit: Rs. %.2f\n", maxLimit);
    
    // Input withdrawal amount from user
    printf("\nEnter the amount you want to withdraw (Rs.): ");
    if (scanf("%f", &withdrawalAmount) != 1) {
        printf("Invalid input format.\n");
        return 1;
    }
    
    // 3. Display the entered withdrawal amount
    displayAmount(withdrawalAmount);
    
    // 4 & 5. Check if withdrawal is valid using checkWithdrawal()
    if (checkWithdrawal(currentBalance, withdrawalAmount, maxLimit)) {
        printf("\nStatus: Transaction Successful!\n");
        
        // Update balance using calculateBalance()
        currentBalance = calculateBalance(currentBalance, withdrawalAmount);
        printf("Updated Account Balance: Rs. %.2f\n", currentBalance);
    } else {
        printf("\nStatus: Transaction Failed!\n");
        printf("Reason: Amount must be greater than 0, not exceed your current balance, and not exceed Rs. 50,000.\n");
    }
    
    return 0;
}

// Function Implementations

// 1. welcome: takes no arguments and returns nothing
void welcome() {
    printf("=========================================\n");
    printf("       WELCOME TO THE ATM SYSTEM         \n");
    printf("=========================================\n");
}

// 2. displayAmount: accepts a withdrawal amount, returns nothing, displays the amount
void displayAmount(float amount) {
    printf("Requested Withdrawal Amount: Rs. %.2f\n", amount);
}

// 3. getWithdrawalLimit: takes no arguments and returns the predefined maximum limit
float getWithdrawalLimit() {
    return 50000.00;
}

// 4. calculateBalance: accepts current balance and withdrawal amount, returns remaining balance
float calculateBalance(float currentBalance, float withdrawalAmount) {
    return currentBalance - withdrawalAmount;
}

// 5. checkWithdrawal: validates the transaction based on the given rules
int checkWithdrawal(float currentBalance, float withdrawalAmount, float maxLimit) {
    if (withdrawalAmount > 0 && withdrawalAmount <= currentBalance && withdrawalAmount <= maxLimit) {
        return 1; // Valid withdrawal
    }
    return 0; // Invalid withdrawal
}
