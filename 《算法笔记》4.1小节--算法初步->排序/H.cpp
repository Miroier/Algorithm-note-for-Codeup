#include "cstdio"
#include "algorithm"
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int a[10], b[10], c[10];
    while (scanf("%d", &a[0]) != EOF)
    {
        for (int i = 1; i < 10; i++)
        {
            scanf("%d", &a[i]);
        }
        int cntb = 0, cntc = 0;
        for (int i = 0; i < 10; i++)
        {
            if (a[i] % 2 == 0)
                b[cntb++] = a[i];

            if (a[i] % 2 == 1)
                c[cntc++] = a[i];
        }
        sort(b, b + cntb);
        sort(c, c + cntc, cmp);
        for (int i = 0; i < cntc; i++)
        {
            printf("%d ", c[i]);
        }
        for (int i = 0; i < cntb; i++)
        {
            printf("%d ", b[i]);
        }
        printf("\n");
    }
    return 0;
}
