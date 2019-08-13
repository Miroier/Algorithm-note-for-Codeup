#include "cstdio"
char max(int a[])
{
    int maxIndex = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] >= a[maxIndex]) //这里>=就可以保证输出字典序最小的解，因为JCB刚好是逆序
            maxIndex = i;
    }
    if (maxIndex == 0)
        return 'J';
    if (maxIndex == 1)
        return 'C';
    if (maxIndex == 2)
        return 'B';
}
int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    char A, B;
    int w = 0, p = 0; //只记录A
    int AS[3] = {}, BS[3] = {};
    for (int i = 0; i < N; i++)
    {
        scanf("%c %c", &A, &B);
        if (i < N - 1)
            getchar();
        if (A == B)
            p++;
        else if (A == 'J' && B == 'B')
        {
            w++;
            AS[0]++;
        }
        else if (A == 'C' && B == 'J')
        {
            w++;
            AS[1]++;
        }
        else if (A == 'B' && B == 'C')
        {
            w++;
            AS[2]++;
        }
        else if (B == 'J' && A == 'B')
        {
            BS[0]++;
        }
        else if (B == 'C' && A == 'J')
        {
            BS[1]++;
        }
        else if (B == 'B' && A == 'C')
        {
            BS[2]++;
        }
    }
    printf("%d %d %d\n", w, p, N - w - p);
    printf("%d %d %d\n", N - w - p, p, w);
    printf("%c %c", max(AS), max(BS));
    return 0;
}
