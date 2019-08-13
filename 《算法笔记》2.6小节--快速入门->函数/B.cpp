#include "cstdio"
#include "cstring"
void vowels(char s1[], char s2[])
{
    int p = 0;
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'A')
        {
            s2[p] = s1[i];
            p++;
        }
        if (s1[i] == 'e' || s1[i] == 'E')
        {
            s2[p] = s1[i];
            p++;
        }
        if (s1[i] == 'i' || s1[i] == 'I')
        {
            s2[p] = s1[i];
            p++;
        }
        if (s1[i] == 'o' || s1[i] == 'O')
        {
            s2[p] = s1[i];
            p++;
        }
        if (s1[i] == 'u' || s1[i] == 'U')
        {
            s2[p] = s1[i];
            p++;
        }
    }
}
int main()
{
    char s1[100] = {}, s2[100] = {};
    gets(s1);
    vowels(s1, s2);
    for (int i = 0; i < strlen(s2); i++)
    {
        printf("%c", s2[i]);
    }
}
