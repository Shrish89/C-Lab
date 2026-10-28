#include <stdio.h>

static float balance = 1000;

void deposit(float amount) {
    balance += amount;
}

void withdraw(float amount) {
    if (amount <= balance)
        balance -= amount;
}

float getBalance() {
    return balance;
}