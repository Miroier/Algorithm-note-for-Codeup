#include "cstdio"
int main()
{
    int h;
    //我佛了，有多组测试数据题目您倒是说一声啊
    while (scanf("%d", &h) != EOF)
    {
        int w = 2 * (h - 1);
        int H = h;
        for (int i = 0; i < h; i++, w -= 2, H += 2)
        {
            for (int j = 0; j < w; j++)
                printf(" ");
            for (int j = 0; j < H; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
