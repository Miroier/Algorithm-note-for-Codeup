//这题好像没怎么用哈希表的思维，完全就是按自己（混乱的）思路写的
#include "cstdio"
#include "algorithm"
using namespace std;
const int maxn = 110;
struct st
{
    int number;
    int zu;
} A[100010];
bool cmp(st a, st b)
{
    if (a.zu != b.zu)
        return a.zu < b.zu;
    else
        return a.number < b.number;
}
int main()
{
    int m;
    scanf("%d", &m);
    while (m--)
    {
        int n;
        scanf("%d", &n);
        //num放入去重后的第一行数，cntn-1等于数量
        int num[maxn] = {}, cntn = 1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i].number);
            for (int j = 0; j < cntn; j++)
            {
                if (num[j] == A[i].number)
                    break;
                if (j == cntn - 1)
                {
                    num[j] = A[i].number;
                    cntn++;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i].zu);
        }
        sort(A, A + n, cmp);
        sort(num, num + cntn - 1);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int k;
            for (int j = 0; j < cntn - 1; j++, cnt = 0)
            {
                if (j == 0)
                    printf("%d={", A[i].zu);
                //在这一组里重复找
                //这里之前没添加k<n-1的条件，WA了好多次
                for (k = i; A[k].zu == A[k + 1].zu && k < n - 1; k++)
                {
                    if (A[k].number == num[j])
                        cnt++;
                }
                if (A[k].number == num[j])
                    cnt++;
                printf("%d=%d", num[j], cnt);
                if (j < cntn - 2)
                    printf(",");
                if (j == cntn - 2)
                    printf("}\n");
            }
            i = k;
        }
        //打印出来看看
        // for (int i = 0; i < n; i++)
        //     printf("%d %d\n", A[i].zu, A[i].number);
        // for (int i = 0; i < cntn - 1; i++)
        // {
        //     printf("%d\n", num[i]);
        // }
    }
    return 0;
}
