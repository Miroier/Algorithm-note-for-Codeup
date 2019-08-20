#include "cstdio"
#include "algorithm"
using namespace std;
struct warehouse
{
    double J, F;
    double p;
} wh[1000];
bool cmp(warehouse a, warehouse b)
{
    return a.p > b.p;
}
int main()
{
    int M, N;
    while (scanf("%d%d", &M, &N), M != -1 && N != -1)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%lf%lf", &wh[i].J, &wh[i].F);
            wh[i].p = wh[i].J / wh[i].F;
        }
        sort(wh, wh + N, cmp);
        double sum = 0;
        double remain = M;
        for (int i = 0; i < N; i++)
        {
            if (remain >= wh[i].F)
            {
                remain -= wh[i].F;
                sum += wh[i].J;
            }
            else if (remain > 0)
            {
                sum += remain * wh[i].p;
                remain = 0;
                break;
            }
            else
                break;
        }
        printf("%.3lf\n", sum);
    }
    return 0;
}
