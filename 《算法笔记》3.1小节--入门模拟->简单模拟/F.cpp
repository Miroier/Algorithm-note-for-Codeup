#include "cstdio"
int main()
{
    long long A, B, C;
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%lld %lld %lld", &A, &B, &C);
        printf("Case #%d: %s\n", i, (A + B > C) ? "true" : "false");
    }
    return 0;
}
