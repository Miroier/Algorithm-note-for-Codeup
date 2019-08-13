#include "cstdio"
int a[110];
int main()
{
    int n, m;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        scanf("%d", &m);
        while (m--)
        {
            int x;
            scanf("%d", &x);
            int i;
            for (i = 0; i < n; i++)
            {
                if (a[i] == x)
                {
                    printf("YES\n");
                    break;
                }
            }
            if (i == n)
                printf("NO\n");
        }
    }
    return 0;
}
