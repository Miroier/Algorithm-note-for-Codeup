#include "cstdio"
int main()
{
    int L, M;
    while (scanf("%d %d", &L, &M), L || M)
    {
        int tree[10010] = {};
        while (M--)
        {
            int start, end;
            scanf("%d %d", &start, &end);
            for (int i = start; i <= end; i++)
            {
                tree[i] = 1;
            }
        }
        int cnt = 0;
        for (int i = 0; i <= L; i++)
        {
            if (tree[i] == 0)
                cnt++;
        }
        printf("%d\n", cnt);
    }
}
