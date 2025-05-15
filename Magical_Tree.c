#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int total_lines = 5 + (n + 1) / 2;
    int max_stars = 2 * (total_lines - 5) + 1;

    for (int i = 1; i <= total_lines; i++)
    {
        int spaces = total_lines - i;
        int stars = 2 * i - 1;

        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        int spaces = total_lines - (n / 2) - 1;

        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}