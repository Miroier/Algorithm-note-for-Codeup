#include "cstdio"
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            int k;
            scanf("%d", &k);
            int a[k], b[k], index = 0;
            for (int j = 0; j < k; j++)
            {
                scanf("%d", &a[j]);
            }
            for (int j = 0; j < k; j++)
            {
                if (j == 0)
                {
                    if (a[j] != a[j + 1])
                        b[index++] = j;
                }
                else if (j == k - 1)
                {
                    if (a[j] != a[j - 1])
                        b[index++] = j;
                }
                else
                {
                    if ((a[j] < a[j - 1] && a[j] < a[j + 1]) || (a[j] > a[j - 1] && a[j] > a[j + 1]))
                        b[index++] = j;
                }
            }
            for (int j = 0; j < index; j++)
            {
                printf("%d%c", b[j], (j < index - 1) ? ' ' : '\n');
            }
        }
    }
    return 0;
}
