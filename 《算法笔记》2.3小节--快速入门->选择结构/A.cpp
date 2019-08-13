#include <cmath>
#include <cstdio>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (b * b >= 4 * a * c)
    {
        double r1 = (-b + sqrt(b * b - 4 * a * c)) / 2;
        double r2 = (-b - sqrt(b * b - 4 * a * c)) / 2;
        printf("r1=%7.2lf\nr2=%7.2lf", r1, r2);
    }
    else
    {
        printf("No real roots!");
    }
    return 0;
}
