#include <stdio.h>

int main() {
    int n, i, j, count, maxCount = 0, element;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j])
                count++;
        }
        if(count > maxCount) {
            maxCount = count;
            element = a[i];
        }
    }

    printf("Element with maximum frequency = %d", element);

    return 0;
}