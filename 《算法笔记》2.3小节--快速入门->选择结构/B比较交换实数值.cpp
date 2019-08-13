#include <cstdio>
int main()
{
    double a1, a2;
    scanf("%lf%lf", &a1, &a2);
    if (a1 < a2)
        printf("%.2lf %.2lf\n", a1, a2);
    else
        printf("%.2lf %.2lf\n", a2, a1);
    return 0;
}
