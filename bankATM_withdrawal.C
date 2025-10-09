/*
name:morris kathurima
reg no: CT100/26260/25
Desription:numbers from 100 down to 50 in descending oder
*/


#include <stdio.h>

int main() {
    // Initialize the starting account balance. Using float for currency display.
    float balance = 1000.00;
    float withdrawal_amount;

    printf("Welcome to the Simple ATM Simulator!\n");
    printf("Initial Balance: $%.2f\n\n", balance);

    // The while loop continues executing as long as the account balance is greater than zero.
    while (balance > 0) {
        printf("Current Balance: $%.2f\n", balance);
        printf("Enter amount to withdraw (or 0 to quit): ");

        // Check if input is valid (a number)
        if (scanf("%f", &withdrawal_amount) != 1) {
            printf("\nInvalid input. Please enter a number.\n");
            // Clear the input buffer to prevent an infinite loop on bad input
            while (getchar() != '\n');
            continue;
        }

        // Option to quit the session
        if (withdrawal_amount == 0) {
            printf("\nThank you for using the ATM. Final balance: $%.2f\n", balance);
            break; // Exit the loop
        }

        // --- Withdrawal Logic ---

        // 1. Check for negative or zero withdrawal
        if (withdrawal_amount < 0) {
            printf("\nWithdrawal failed: Amount cannot be negative.\n\n");
        }
        // 2. Check for insufficient funds
        else if (withdrawal_amount > balance) {
            printf("\nWithdrawal failed: Insufficient funds. Available balance: $%.2f.\n\n", balance);
        }
        // 3. Successful withdrawal
        else {
            balance -= withdrawal_amount; // Deduct the amount
            printf("\nTransaction successful! Withdrew $%.2f.\n", withdrawal_amount);
            printf("New Balance: $%.2f\n\n", balance);

            // Check if the new balance is zero or less, and inform the user
            if (balance <= 0) {
                printf("!!! Account balance depleted. The session will now end.\n");
                break; // Terminate the while loop
            }
        }
    }

    printf("ATM session ended. Goodbye!\n");

    return 0;
}

