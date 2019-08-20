#include "cstdio"
#include "algorithm"
using namespace std;
struct tv
{
    int x;
    int y;
} a[100];
bool cmp(tv a, tv b)
{
    if (a.x != b.x)
        return a.x > b.x;
    else
        return a.y < b.y;
}
int main()
{
    int n;
    while (scanf("%d", &n), n)
    {
        for (int i = 0; i < n; i++)
            scanf("%d %d", &a[i].x, &a[i].y);
        sort(a, a + n, cmp);
        int cnt = 1, lastX = a[0].x;
        for (int i = 1; i < n; i++)
        {
            if (a[i].y <= lastX)
            {
                lastX = a[i].x;
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
