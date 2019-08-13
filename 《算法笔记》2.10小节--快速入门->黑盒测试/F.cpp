#include "cstdio"
int main()
{
    int M;
    while (scanf("%d", &M) != EOF)
    {
        int a, sum = 0;
        while (M--)
        {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }
    return 0;
}
