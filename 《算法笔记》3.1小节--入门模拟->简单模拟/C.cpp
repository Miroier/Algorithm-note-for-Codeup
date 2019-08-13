#include "cstdio"
#include "cstring"
int main()
{
    char a[20], b[20];
    while (scanf("%s %s", &a, &b) != EOF)
    {
        int len1 = strlen(a);
        int len2 = strlen(b);
        int sum = 0;
        for (int i = 0; i < len1; i++)
        {
            int m = a[i] - '0';
            for (int j = 0; j < len2; j++)
            {
                sum += m * (b[j] - '0');
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
