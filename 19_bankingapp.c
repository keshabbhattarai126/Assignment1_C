/*
19: Simple Banking Application

Description: Create a banking application in C that provides the following functionalities:

Withdraw: The user should be able to withdraw money from their account if they have sufficient balance.

Deposit: The user can deposit money into their account.

Check Balance: The user can check their current account balance.

Specifications:

Start with an initial balance of 10,000.
If the user tries to withdraw more than their balance, print "Insufficient funds."
If the deposit or add funds amount is less than or equal to 0, print "Invalid amount."
*/

#include<stdio.h>

int main()
{
    int balance = 10000;
    int amount;
    int choice;

    printf("Welcome to XYZ Bank\n");
    printf("Choose option (1 to 3)\n");
    printf("1. Deposit amount \n2. Withdraw amount \n3. Check Balance\n");
    
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter amount to deposit\n");
        scanf("%d", &amount);
        if(amount <= 0) {
            printf("Invalid amount. Please enter a valid amount\n");
        } else {
            balance += amount;
            printf("Your new balance is %d\n", balance);
        }

    } else if(choice == 2) {
        printf("Enter amount to withdraw\n");
        scanf("%d", &amount);
        if(amount <= 0) {
            printf("Invalid amount. Please enter a valid amount\n");
        } else if(amount > balance) {
            printf("Insufficient funds\n");
        } else {
            balance -= amount;
            printf("Your new balance is %d\n", balance);
        }

    } else if(choice == 3) {
        printf("Your current balance is %d\n", balance);

    } else {
        printf("Invalid choice. Please select a valid option\n");
    }

    return 0;
}
