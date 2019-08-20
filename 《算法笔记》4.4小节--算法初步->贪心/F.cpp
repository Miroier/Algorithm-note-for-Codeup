#include "cstdio"
#include "algorithm"
using namespace std;
bool cmp(double a, double b)
{
    return a < b;
}
int main()
{
    int C;
    scanf("%d", &C);
    while (C--)
    {
        int n, V, W;
        scanf("%d %d %d", &n, &V, &W);
        double P[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &P[i]);
        }
        sort(P, P + n, cmp);
        double sum = 0, res;
        double density;
        int i;
        for (i = 0; i < n; i++)
        {
            sum += P[i];
            density = sum / (i + 1);
            if (density > W)
                break;
            res = density;
        }
        if (i == 0)
            printf("0 0.00\n");
        else
            printf("%d %.2lf\n", i * V, res / 100);
    }
    return 0;
}
