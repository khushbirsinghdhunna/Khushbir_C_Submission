#include <stdio.h>

int main() {
    int x = 5, y;

    y = x++; 
    printf("Post-increment (y = x++): y = %d, x = %d\n", y, x);

    x = 5;
    y = ++x;
    printf("Pre-increment (y = ++x): y = %d, x = %d\n", y, x);

    return 0;
}