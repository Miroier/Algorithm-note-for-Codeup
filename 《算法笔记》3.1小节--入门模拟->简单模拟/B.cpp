#include "cstdio"
#include "cstring"
int main()
{
    char s1[20], s2[20];
    while (scanf("%s %s", &s1, &s2) != EOF)
    {
        int n1 = 0, n2 = 0;
        int len1 = strlen(s1);
        int len2 = strlen(s2);
        for (int i = 0; i < len1; i++)
        {
            if (s1[i] >= '0' && s1[i] <= '9')
                n1 = n1 * 10 + s1[i] - '0';
        }
        if (s1[0] == '-')
            n1 = -n1;
        for (int i = 0; i < len2; i++)
        {
            if (s2[i] >= '0' && s2[i] <= '9')
                n2 = n2 * 10 + s2[i] - '0';
        }
        if (s2[0] == '-')
            n2 = -n2;
        printf("%d\n", n1 + n2);
    }
    return 0;
}
