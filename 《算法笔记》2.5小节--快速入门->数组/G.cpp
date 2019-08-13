#include "cstdio"
int main()
{
    int a[100] = {0, 1, 1};
    for (int i = 3; i <= 20; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (int i = 1; i <= 20; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
