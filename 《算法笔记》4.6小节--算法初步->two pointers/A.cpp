//运行错误80%，看讨论版说是测试用例有问题
#include "cstdio"
const int maxn = 100010;
void merge(int A[], int L1, int R1, int L2, int R2)
{
    int i = L1, j = L2;
    int temp[maxn], index = 0;
    while (i <= R1 && j <= R2)
    {
        if (A[i] <= A[j])
            temp[index++] = A[i++];
        else
            temp[index++] = A[j++];
    }
    while (i <= R1)
        temp[index++] = A[i++];
    while (j <= R2)
        temp[index++] = A[j++];
    for (int k = 0; k < index; k++)
        A[L1 + k] = temp[k];
}
void mergesort(int A[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergesort(A, left, mid);
        mergesort(A, mid + 1, right);
        merge(A, left, mid, mid + 1, right);
    }
}
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        mergesort(a, 0, n - 1);
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}
