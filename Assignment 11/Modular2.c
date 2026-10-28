#include <stdio.h>

extern void deposit(float);
extern void withdraw(float);
extern float getBalance();

int main() {
    printf("Initial Balance = %.2f\n", getBalance());

    deposit(500);
    printf("After Deposit = %.2f\n", getBalance());

    withdraw(300);
    printf("After Withdrawal = %.2f\n", getBalance());

    return 0;
}