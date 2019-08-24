#include "algorithm"
#include "cmath"
#include "cstdio"
#include "cstdlib"
#include "ctime"
using namespace std;
const int maxn = 1000010;
int A[maxn], n;
//随机选取主元，对区间[left, right]进行划分
int randPartition(int A[], int left, int right)
{
    //生成[left, right]内的随机数p
    int p = round(1.0 * rand() / RAND_MAX * (right - left) + left);
    //交换A[p]与A[left]
    swap(A[p], A[left]);
    //以下为不随机选择基准时的划分过程，不需要改变
    //将A[left]存放至临时变量temp
    int temp = A[left];
    //只要left与right不相遇
    while (left < right)
    {
        while (left < right && A[right] > temp)
            right--;        //反复左移right
        A[left] = A[right]; //将A[right]挪到A[left]
        while (left < right && A[left] <= temp)
            left++;         //反复右移left
        A[right] = A[left]; //将A[left]挪到A[right]
    }
    //把temp放到left和right相遇的地方
    A[left] = temp;
    //返回相遇的下标
    return left;
}
//随机选择算法，从A[left, right]中找到第K大的数，进行划分
int randSelect(int A[], int left, int right, int K)
{
    if (left == right) //边界
        return A[left];
    //划分后主元的位置为p
    int p = randPartition(A, left, right);
    //A[p]是A[left, right]中的第M大
    int M = p - left + 1;
    //找到第K大的数
    if (K == M) //找到第K大的数
        return A[p];
    if (K < M) //第K大数在主元左侧
        return randSelect(A, left, p - 1, K);
    else //第K大数在主元右侧
        return randSelect(A, p + 1, right, K - M);
}
int main()
{
    int m, n;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        //如果直接填m-1的话找的是第K小的数字
        printf("%d\n", randSelect(A, 0, n - 1, n - m + 1));
    }
    return 0;
}
