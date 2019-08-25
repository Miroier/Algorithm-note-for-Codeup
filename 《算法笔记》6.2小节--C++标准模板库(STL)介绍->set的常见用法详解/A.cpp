#include "cstdio"
#include "set"
using namespace std;
int main()
{
    int N;
    scanf("%d", &N);
    set<int> a[N + 1];
    set<int>::iterator it;
    for (int i = 1; i <= N; i++)
    {
        int M;
        scanf("%d", &M);
        for (int j = 0; j < M; j++)
        {
            int m;
            scanf("%d", &m);
            a[i].insert(m);
        }
    }
    int K;
    scanf("%d", &K);
    for (int i = 0; i < K; i++)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        set<int> b;
        for (set<int>::iterator it = a[m].begin(); it != a[m].end(); it++)
            b.insert(*it);
        for (set<int>::iterator it = a[n].begin(); it != a[n].end(); it++)
            b.insert(*it);
        //容斥原理
        printf("%.1lf%\n", (a[m].size() + a[n].size() - b.size()) * 100.0 / b.size());
    }
}
