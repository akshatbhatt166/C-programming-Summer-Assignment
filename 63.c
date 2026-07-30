#include <stdio.h>

int main() {
    int n, i, j, sum, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] + a[j] == sum) {
                printf("Pair: %d %d\n", a[i], a[j]);
                found = 1;
            }
        }
    }

    if(!found)
        printf("No pair found.");

    return 0;
}