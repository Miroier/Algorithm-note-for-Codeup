#include "cstdio"
int main()
{
    int a = 1, b = 1;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 2; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    printf("%d", b);
    return 0;
}
