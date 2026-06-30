#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, rem;

    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    printf("%d", decimal);

    return 0;
}