#include "cstdio"
int main()
{
    int tar;
    int A[] = {50, 20, 10, 5, 1};
    while (scanf("%d", &tar) != EOF)
    {
        int cnt[5] = {};
        int i, index; //index最后一个非0数位置
        for (i = 0; tar > 0; i++)
        {
            cnt[i] = tar / A[i];
            tar %= A[i];
            if (cnt[i] != 0)
                index = i;
        }
        for (int j = 0; j <= i; j++)
        {
            if (cnt[j] != 0)
                printf("%d*%d", A[j], cnt[j]);
            if (cnt[j] != 0 && j < index)
                printf("+");
        }
        printf("\n");
    }
    return 0;
}
