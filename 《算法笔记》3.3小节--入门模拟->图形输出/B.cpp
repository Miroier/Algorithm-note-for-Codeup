#include "cstdio"
#include "cstring"
int main()
{
    char s[1000];
    scanf("%s", s);
    int len = strlen(s);
    int side = (len + 2) / 3;
    int mid = len - side * 2;
    for (int i = 0; i < side; i++)
    {
        printf("%c", s[i]);
        if (i < side - 1)
            for (int j = 0; j < mid; j++)
                printf(" ");
        if (i == side - 1)
        {
            for (int i = side; i < len - side; i++)
            {
                printf("%c", s[i]);
            }
        }
        printf("%c\n", s[len - 1 - i]);
    }

    return 0;
}
