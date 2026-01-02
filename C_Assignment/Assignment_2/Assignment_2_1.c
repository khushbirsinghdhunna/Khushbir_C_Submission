#include <stdio.h>

int main() {
    char name[50];
    float basic, hra, da, gross, tax, net;

    printf("Enter Employee Name: ");
    scanf("%s", name);
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;
    tax = gross * 0.05;
    net = gross - tax;

    printf("\nName: %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross);
    printf("Income Tax: %.2f\n", tax);
    printf("Net Salary: %.2f\n", net);

    return 0;
}