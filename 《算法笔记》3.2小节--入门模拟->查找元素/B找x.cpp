#include "cstdio"
const int maxn = 210;
int a[maxn];
int main()
{
    int n, x;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        scanf("%d", &x);
        int i;
        for (i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                printf("%d\n", i);
                break;
            }
        }
        if (i == n)
        {
            printf("-1\n");
        }
    }
    return 0;
}
