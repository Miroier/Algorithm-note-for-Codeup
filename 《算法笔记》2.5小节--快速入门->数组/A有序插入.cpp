#include <cstdio>
int main()
{
    int a[10] = {};
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }
    int m;
    scanf("%d", &m);
    for (int i = 8; i >= 0; i--)
    {
        if (m > a[i])
        {
            a[i + 1] = m;
            break;
        }
        a[i + 1] = a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
