#include "cstdio"
int g(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return g(n - 1) + g(n - 2);
}
int main()
{
    int N;
    while (scanf("%d", &N) != EOF)
        printf("%d\n", g(N));
    return 0;
}
