#include "cstdio"
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int odd = 0;
        int even = 0;
        while (n--)
        {
            int a;
            scanf("%d", &a);
            if (a % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even > odd)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
