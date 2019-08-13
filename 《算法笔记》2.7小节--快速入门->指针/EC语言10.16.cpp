#include "cstdio"
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int minIndex = 0, maxIndex = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[minIndex] > a[i])
            minIndex = i;
        if (a[maxIndex] < a[i])
            maxIndex = i;
    }
    swap(a, a + minIndex);
    swap(a + 9, a + maxIndex);
    for (int i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
        if (i < 9)
            printf(" ");
    }
    printf("\n");
    return 0;
}
