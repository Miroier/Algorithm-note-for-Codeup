#include "cstdio"
void swap(int *a, int *b)
{
    if (*a < *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    swap(&a, &b);
    swap(&a, &c);
    swap(&b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
