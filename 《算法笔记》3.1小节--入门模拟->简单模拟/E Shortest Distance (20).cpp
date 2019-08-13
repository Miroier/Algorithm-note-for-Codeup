#include "cstdio"
int main()
{
    int N;
    scanf("%d", &N);
    int dis[N + 10];
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &dis[i]);
    }
    int M;
    scanf("%d", &M);
    while (M--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int m = 0, n = 0; //m是a向前走到b,n是a向后走到b
        int flag = 0;     //用来帮助判断
        if (a < b)
        {
            for (int i = a - 1; (i >= b && flag == 1) || (i < a && flag == 0); i--)
            {
                if (i == 0)
                {
                    i = N;
                    flag = 1;
                }
                m += dis[i];
            }
            for (int i = a; i < b; i++)
            {
                n += dis[i];
            }
        }
        else
        {
            for (int i = a - 1; i >= b; i--)
            {
                m += dis[i];
            }
            for (int i = a; (i < b && flag == 1) || (i >= a && flag == 0); i++)
            {
                if (i == N)
                {
                    i = 1;
                    flag = 1;
                }
                n += dis[i];
            }
        }
        printf("%d\n", (m > n) ? n : m);
    }
    return 0;
}
