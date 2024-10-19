#include <stdio.h>

#define NUM_ACCOUNTS 3

typedef struct {
    float balance;
} Account;

void deposit(Account *account) {
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f", &amount);
    account->balance += amount;
    printf("Deposited %.2f. New balance: %.2f\n", amount, account->balance);
}

void withdraw(Account *account) {
    float amount;
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);
    if (amount > account->balance) {
        printf("Insufficient funds! Current balance: %.2f\n", account->balance);
    } else {
        account->balance -= amount;
        printf("Withdrawn %.2f. New balance: %.2f\n", amount, account->balance);
    }
}

void checkBalance(Account *account) {
    printf("Current balance: %.2f\n", account->balance);
}

int main() {
    Account accounts[NUM_ACCOUNTS] = { {0}, {0}, {0} };
    int choice, accountNumber;

    do {
        printf("\nMenu:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            printf("Select account (1-%d): ", NUM_ACCOUNTS);
            scanf("%d", &accountNumber);
            if (accountNumber < 1 || accountNumber > NUM_ACCOUNTS) {
                printf("Invalid account number! Please choose between 1 and %d.\n", NUM_ACCOUNTS);
                continue;
            }
            accountNumber--;

            switch (choice) {
                case 1:
                    deposit(&accounts[accountNumber]);
                    break;
                case 2:
                    withdraw(&accounts[accountNumber]);
                    break;
                case 3:
                    checkBalance(&accounts[accountNumber]);
                    break;
            }
        } else if (choice != 4) {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    printf("Thank you for using our banking system!\n");
    return 0;
}
