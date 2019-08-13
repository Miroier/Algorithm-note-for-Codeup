#include "cstdio"
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int t = 1; t <= 5; t++)
        {
            printf("%3d", i * t);
        }
        printf("\n");
    }
    return 0;
}
