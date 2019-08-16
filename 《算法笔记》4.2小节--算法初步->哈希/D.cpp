#include "cstdio"
#include "cstring"
char s1[10010], s2[10010];
int main()
{
    while (gets(s1) != NULL)
    {
        gets(s2);
        for (int i = 0; i < strlen(s1); i++)
        {
            int j;
            for (j = 0; j < strlen(s2); j++)
            {
                if (s1[i] == s2[j])
                    break;
            }
            if (j == strlen(s2))
            {
                printf("%c", s1[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
