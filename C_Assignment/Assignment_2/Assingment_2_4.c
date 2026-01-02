#include <stdio.h>

int main() {
    float balance;
    float interest = 100.00;
    float charge = 50.00;
    float bonusFactor = 1.05;

    printf("Enter Initial Account Balance: ");
    scanf("%f", &balance);

    balance += interest;
    printf("After adding interest: %.2f\n", balance);

    balance -= charge;
    printf("After deducting charge: %.2f\n", balance);

    balance *= bonusFactor;
    printf("After bonus: %.2f\n", balance);

    balance /= 2;
    printf("After splitting: %.2f\n", balance);

    return 0;
}