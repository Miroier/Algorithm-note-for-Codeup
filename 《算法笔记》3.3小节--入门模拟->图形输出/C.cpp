#include "cstdio"
int main()
{
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        int h;
        scanf("%d", &h);
        int s = h - 1, m = h;
        for (int i = 0; i < h; i++, s--, m += 2)
        {
            for (int j = 0; j < s; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < m; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
