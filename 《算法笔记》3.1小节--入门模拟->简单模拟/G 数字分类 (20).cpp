#include "cstdio"
int N;
void A1(int a[])
{
    int flag = 0;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] % 5 == 0 && a[i] % 2 == 0)
        {
            sum += a[i];
            flag = 1;
        }
    }
    if (flag == 0)
        printf("N ");
    else
        printf("%d ", sum);
}
void A2(int a[])
{
    int flag = 0, cnt = 0;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] % 5 == 1)
        {
            flag = 1;
            cnt++;
            if (cnt % 2 == 1)
                sum += a[i];
            else
                sum -= a[i];
        }
    }
    if (flag == 0)
        printf("N ");
    else
        printf("%d ", sum);
}
void A3(int a[])
{
    int flag = 0, cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] % 5 == 2)
        {
            flag = 1;
            cnt++;
        }
    }
    if (flag == 0)
        printf("N ");
    else
        printf("%d ", cnt);
}
void A4(int a[])
{
    int flag = 0, sum = 0, cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] % 5 == 3)
        {
            sum += a[i];
            cnt++;
            flag = 1;
        }
    }
    if (flag == 0)
        printf("N ");
    else
        printf("%.1lf ", sum * 1.0 / cnt);
}
void A5(int a[])
{
    int flag = 0, max = a[0];
    for (int i = 0; i < N; i++)
    {
        if (a[i] % 5 == 4)
        {
            if (max < a[i])
                max = a[i];
            flag = 1;
        }
    }
    if (flag == 0)
        printf("N");
    else
        printf("%d", max);
}
int main()
{
    while (scanf("%d", &N) != EOF)
    {
        int a[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
        }
        A1(a);
        A2(a);
        A3(a);
        A4(a);
        A5(a);
        printf("\n");
    }
    return 0;
}
