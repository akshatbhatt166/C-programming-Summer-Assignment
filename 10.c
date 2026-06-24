#include <stdio.h>

int main()
{
    int start, end, i, j, flag;

    printf("Enter starting and ending numbers: ");
    scanf("%d%d", &start, &end);

    printf("Prime Numbers are:\n");

    for(i = start; i <= end; i++)
    {
        if(i <= 1)
            continue;

        flag = 0;

        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%d ", i);
    }

    return 0;
}