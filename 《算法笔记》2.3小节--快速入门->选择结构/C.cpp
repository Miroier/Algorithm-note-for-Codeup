#include <cstdio>
int main()
{
    double a1, a2, a3, t;
    scanf("%lf%lf%lf", &a1, &a2, &a3);
    if (a1 > a2)
    {
        t = a1;
        a1 = a2;
        a2 = t;
    }
    if (a1 > a3)
    {
        t = a1;
        a1 = a3;
        a3 = t;
    }
    if (a2 > a3)
    {
        t = a2;
        a2 = a3;
        a3 = t;
    }
    printf("%.2lf %.2lf %.2lf\n", a1, a2, a3);
}
