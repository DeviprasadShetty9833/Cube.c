#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    int range = 2 * n - 1;
    int d = 0;

    for (int i = 1; i <= range; i++)
    {
        for (int j = 1; j <= range; j++)
        {
            // For upper half, Cut from the right
            if (i <= n && j > n + d)
                break;

            // For lower half, Cut from the left
            if (i > n && j < n - d)
                printf("  ");
            else
                printf("$ ");
        }

        printf("\n");

        // Increase width till middle row, then decrease
        if(i < n)
            d = d + 1;
        else
            d = d - 1;
    }

    return 0;
}
