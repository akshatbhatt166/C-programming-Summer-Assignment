#include <stdio.h>

int main() {
    int x, n, i;
    long long result = 1;

    scanf("%d%d", &x, &n);

    for (i = 1; i <= n; i++)
        result *= x;

    printf("%lld", result);

    return 0;
}