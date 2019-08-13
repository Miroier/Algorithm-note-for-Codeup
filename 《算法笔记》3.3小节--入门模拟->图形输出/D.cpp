#include "cstdio"
int main()
{
    int n;
    scanf("%d", &n);
    int a = n, b = 0; //a每行*个数，b每行开头空格个数
    for (int i = 0; i < n; i++, a--, b++)
    {
        for (int j = 0; j < b; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < a; j++)
        {
            printf("*");
            if (j < a - 1)
                printf(" ");
        }
        printf("\n");
    }
    b -= 2;
    a += 2;
    for (int i = 1; i < n; i++, a++, b--)
    {
        for (int j = 0; j < b; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < a; j++)
        {
            printf("*");
            if (j < a - 1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
