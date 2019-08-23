#include "cstdio"
//值得注意的是(WA了2发后)，这题不能用二分法，因为二分法要求有序，而排序会打乱下标
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int x;
        scanf("%d", &x);
        int i;
        for (i = 0; i < n; i++)
            if (a[i] == x)
            {
                printf("%d\n", i);
                break;
            }
        if (i == n)
            printf("-1\n");
    }
    return 0;
}
