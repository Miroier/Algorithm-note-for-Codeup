#include "cstdio"
int main()
{
    int N;
    while (scanf("%d", &N), N)
    {
        int a[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
        }
        int m, cnt = 0;
        scanf("%d", &m);
        for (int i = 0; i < N; i++)
        {
            if (a[i] == m)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
