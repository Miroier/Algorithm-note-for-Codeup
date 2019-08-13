#include "cstdio"
int main()
{
    int N;
    scanf("%d", &N);
    while (N--)
    {
        int M;
        scanf("%d", &M);
        int a, sum = 0;
        while (M--)
        {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n\n", sum);
    }
    return 0;
}
