#include <stdio.h>

int main() {
    int i = 10;
    float f = 5.5;
    char c = 'A';
    double d = 99.99;

    printf("Type: int    | Value: %d     | Size: %lu bytes\n", i, sizeof(i));
    printf("Type: float  | Value: %.2f   | Size: %lu bytes\n", f, sizeof(f));
    printf("Type: char   | Value: %c     | Size: %lu bytes\n", c, sizeof(c));
    printf("Type: double | Value: %.2lf  | Size: %lu bytes\n", d, sizeof(d));

    return 0;
}