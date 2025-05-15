#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool is_jadu_matrix = true;

    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j || i + j == n - 1)
                {
                    if (a[i][j] != 1)
                    {
                        is_jadu_matrix = false;
                        break;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_jadu_matrix = false;
                        break;
                    }
                }
            }
            if (!is_jadu_matrix)
            {
                break;
            }
        }
    }
    else
    {
        printf("NO");
        return 0;
    }

    if (is_jadu_matrix)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}