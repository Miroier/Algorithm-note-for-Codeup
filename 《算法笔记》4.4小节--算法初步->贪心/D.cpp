#include "cstdio"
#include "algorithm"
using namespace std;
typedef long long LL;
LL A[600], L, N;
bool cmp(LL a, LL b)
{
    return a > b;
}
int main()
{
    while (scanf("%lld%lld", &L, &N) != EOF)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%lld", &A[i]);
        }
        sort(A, A + N, cmp);
        LL sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += A[i];
            if (sum >= L)
            {
                printf("%lld\n", i + 1);
                break;
            }
        }
        if (sum < L)
            printf("impossible");
    }
    return 0;
}
