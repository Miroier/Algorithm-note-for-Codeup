#include <cstdio>
int main()
{
    int sum = 0, i;
    for (i = 1;; i++)
    {
        sum += i;
        if (sum > 1000)
            break;
    }
    printf("%d\n", i);
    return 0;
}
