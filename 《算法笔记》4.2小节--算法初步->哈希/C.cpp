#include "cstdio"
int a[100010], b[100010];
int main()
{
    int N;
    while (scanf("%d", &N) != EOF)
    {
        int flag = 0;
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
            b[a[i]]++;
        }
        for (int i = 0; i < N; i++)
        {
            if (b[a[i]] == 1)
            {
                printf("%d\n", a[i]);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("None\n");
    }
    return 0;
}
