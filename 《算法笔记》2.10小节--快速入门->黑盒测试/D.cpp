#include "cstdio"
int main()
{
    int N;
    while (scanf("%d", &N), N)
    {
        int a, sum = 0;
        while (N--)
        {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }
    return 0;
}
