#include "cstdio"
int main()
{
    int a, b, N;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
