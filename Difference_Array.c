#include <stdio.h>


int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        int b[n];
        for (int j = 0; j < n; j++)
        {
            b[j] = a[j];
        }

        for (int j = 0; j < n - 1; j++)
        {
            for (int k = 0; k < n - j - 1; k++)
            {
                if (b[k] > b[k + 1])
                {
                    int temp = b[k];
                    b[k] = b[k + 1];
                    b[k + 1] = temp;
                }
            }
        }
        int c[n];
        for (int j = 0; j < n; j++)
        {
            c[j] = abs(a[j] - b[j]);
        }
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[j]);
        }
        printf("\n");
    }
    return 0;
}