#include "cstdio"
int main()
{
    int A, DA, B, DB;
    while (scanf("%d %d %d %d", &A, &DA, &B, &DB) != EOF)
    {
        int m = 0, n = 0;
        int cnt = 0;
        while (A > 0)
        {
            if (A % 10 == DA)
            {
                cnt++;
            }
            A /= 10;
        }
        while (cnt--)
        {
            m = m * 10 + DA;
        }
        cnt = 0;
        while (B > 0)
        {
            if (B % 10 == DB)
            {
                cnt++;
            }
            B /= 10;
        }
        while (cnt--)
        {
            n = n * 10 + DB;
        }
        printf("%d\n", m + n);
    }
    return 0;
}
