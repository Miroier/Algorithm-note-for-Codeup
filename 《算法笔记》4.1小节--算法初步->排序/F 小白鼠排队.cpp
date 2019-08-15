#include "algorithm"
#include "cstdio"
using namespace std;
struct mouse
{
    int w;
    char c[10];
};
bool cmp(mouse a, mouse b)
{
    return a.w > b.w;
}
int main()
{
    int N;
    while (scanf("%d", &N) != EOF)
    {
        mouse mice[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d %s", &mice[i].w, mice[i].c);
        }
        sort(mice, mice + N, cmp);
        for (int i = 0; i < N; i++)
        {
            printf("%s\n", mice[i].c);
        }
    }
    return 0;
}
