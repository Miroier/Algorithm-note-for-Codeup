#include "cstdio"
const int maxn = 10;
int num[maxn + 1][2 * maxn + 1];
int main()
{
    int m;
    scanf("%d", &m);
    while (m--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            num[i][1] = 0, num[i][2] = 1;
        }
        for (int i = 2; i <= n; i++)
        {
            for (int j = 3; j <= 2 * n - 1; j++)
            {
                num[i][j] = num[i - 1][j - 2] + num[i][j - 1];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= 2 * (n - i); j++)
                printf(" ");
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("%d", num[i][j]);
                printf((j < 2 * i - 1) ? " " : "\n");
            }
        }
    }
    return 0;
}
