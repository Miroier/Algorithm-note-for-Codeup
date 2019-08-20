#include "cstdio"
#include "algorithm"
using namespace std;
int s1(int n)
{
    int ans = 0;
    ans = 18 * (n / 8) + ((n % 8 == 0) ? 0 : ((n % 8 <= 4) ? 10 : 10 + (n % 8 - 4) * 2));
    return ans;
}
double s2(int n)
{
    double ans1 = 0; //在最后不下车
    int ans2 = 0;    //不停打车下车
    ans1 = 18 * (n / 8) + 2.4 * (n % 8);
    ans2 = 18 * (n / 8) + s1(n % 8);
    return (ans1 > ans2) ? ans2 : ans1;
}
int main()
{
    int n;
    while (scanf("%d", &n), n)
    {
        if (n <= 4)
            printf("10\n");
        if (n > 4 && n <= 8)
            printf("%d\n", 10 + (n - 4) * 2);
        if (n > 8)
        {
            if (s2(n) == int(s2(n)))
                printf("%d\n", int(s2(n)));
            else
                printf("%.1lf\n", s2(n));
        }
    }
    return 0;
}
