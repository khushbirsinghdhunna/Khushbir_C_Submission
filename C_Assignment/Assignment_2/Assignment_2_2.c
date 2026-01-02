#include <stdio.h>

int main() {
    float bal1, bal2;

    printf("Enter Balance 1: ");
    scanf("%f", &bal1);
    printf("Enter Balance 2: ");
    scanf("%f", &bal2);

    printf("Are both balances equal? %d\n", bal1 == bal2);
    printf("Is Balance 1 greater? %d\n", bal1 > bal2);
    printf("Is Balance 2 greater? %d\n", bal2 > bal1);

    return 0;
}