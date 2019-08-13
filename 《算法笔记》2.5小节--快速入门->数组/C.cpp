#include <cstdio>
int main()
{
    int a[10][10] = {{}};
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d", a[i][j]);
            if (j < i)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
