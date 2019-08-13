#include "cstdio"
#include "cstring"
int main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] != b[i])
            printf("%d", a[i] - b[i]);
    }
    return 0;
}
