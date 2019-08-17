#include "cstdio"
#include "cmath"
using namespace std;
const int maxn = 11;
int a[100];
int n = 8, P[maxn], hashTable[maxn] = {false};
int count = 0;
int result = 0;
void generateP(int index)
{
    if (index == n + 1) //递归边界，生成一个排列
    {
        bool flag = true;            //flag为true表示当前排列为一个合法方案，
        for (int i = 1; i <= n; i++) //遍历任意两个皇后
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (abs(i - j) == abs(P[i] - P[j])) //如果x方向和y方向的距离相等，说明在一条对角线上
                {
                    flag = false;
                }
            }
            result = result * 10 + P[i];
        }
        if (flag == true)
        {
            a[++count] = result;
            result = 0;
        }
        result = 0;
        return;
    }
    for (int x = 1; x <= n; x++)
    {
        if (hashTable[x] == false)
        {
            P[index] = x;
            hashTable[x] = true;
            generateP(index + 1);
            hashTable[x] = false;
        }
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    generateP(1);
    while (N--)
    {
        int b;
        scanf("%d", &b);
        printf("%d\n", a[b]);
    }
    return 0;
}
