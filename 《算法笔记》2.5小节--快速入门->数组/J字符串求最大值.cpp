#include "cstdio"
#include "cstring"
int main()
{
    char a[100], b[100], c[100];
    gets(a);
    gets(b);
    gets(c);
    if (strcmp(a, b) > 0)
    {
        if (strcmp(a, c))
            printf("%s", a);
        else
            printf("%s", c);
    }
    else
    {
        if (strcmp(b, c))
            printf("%s", b);
        else
            printf("%s", c);
    }
}
