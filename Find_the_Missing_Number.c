#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        if (a * b * c == 0)
        {
            if (m == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else if (m % (a * b * c) == 0)
        {
            printf("%lld\n", m / (a * b * c));
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}