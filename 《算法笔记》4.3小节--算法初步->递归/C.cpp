#include "cstdio"
const int maxn = 20;
int a[maxn];
int g(int size, int index)
{
    //size==0，空间用完，算一种情况
    if (size == 0)
        return 1;
    //index<0，说明所有物品都已经遍历且不满足size==0，则放入失败
    if (index < 0)
        return 0;
    //仅两种情况，一种不放入，一种将a[index]放入。不管怎样，index移到前一件物品上
    return g(size, index - 1) + g(size - a[index], index - 1);
}
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        printf("%d\n", g(40, n));
    }
    return 0;
}
