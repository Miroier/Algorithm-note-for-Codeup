#include "cstdio"
#include "cstring"
void p(char a[])
{
    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
}
int main()
{
    char s[100] = {};
    gets(s);
    p(s);
    return 0;
}
