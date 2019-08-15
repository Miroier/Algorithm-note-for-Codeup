#include "cstdio"
#include "algorithm"
using namespace std;
int main()
{
    int N;
    while (scanf("%d", &N), N)
    {
        int a[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a, a + N);
        if (N % 2 == 1)
        {
            printf("%d\n", a[N / 2]);
        }
        if (N % 2 == 0)
        {
            printf("%d\n", (a[N / 2 - 1] + a[N / 2]) / 2);
        }
    }
    return 0;
}
