#include <cmath>
#include <cstdio>
int main() {
  double a, b, c;
  scanf("%lf%lf%lf", &a, &b, &c);
  double r1, r2;
  r1 = (-b + sqrt(b * b - 4 * a * c)) / 2;
  r2 = (-b - sqrt(b * b - 4 * a * c)) / 2;
  printf("r1=%7.2lf\nr2=%7.2lf", r1, r2);
  return 0;
}
