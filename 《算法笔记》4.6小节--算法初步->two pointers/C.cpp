#include "cstdio"
int partition(int A[], int left, int right)
{
    int temp = A[left];
    while (left < right)
    {
        while (left < right && A[right] >= temp)
            right--;
        A[left] = A[right];
        while (left < right && A[left] <= temp)
            left++;
        A[right] = A[left];
    }
    A[left] = temp;
    return left;
}
void quicksort(int A[], int left, int right)
{
    if (left < right)
    {
        int pos = partition(A, left, right);
        quicksort(A, left, pos - 1);
        quicksort(A, pos + 1, right);
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
        quicksort(a, 0, n - 1);
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}
