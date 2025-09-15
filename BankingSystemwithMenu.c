#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0, amount;

    do {
        printf("\n----- Simple Banking System -----\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Balance Inquiry\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: Rs ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid deposit amount.\n");
                } else {
                    balance += amount;
                    printf("Deposited successfully. New balance: Rs %.2f\n", balance);
                }
                break;

            case 2:
                printf("Enter amount to withdraw: Rs ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid withdrawal amount.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance. Current balance: Rs %.2f\n", balance);
                } else {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: Rs %.2f\n", balance);
                }
                break;

            case 3:
                printf("Current balance: Rs %.2f\n", balance);
                break;

            case 4:
                printf("Exiting... Thank you for using our banking system.\n");
                break;

            default:
                printf("Invalid choice. Please select an option between 1 and 4.\n");
        }

    } while(choice != 4);

    return 0;
}
