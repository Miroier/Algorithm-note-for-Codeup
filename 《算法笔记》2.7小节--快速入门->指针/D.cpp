//没出来
#include "cstdio"
#include "cstring"
void swap(char a[], char b[])
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    char a[100];
    char b[100];
    char c[100];
    char *ap = a, *bp = b, *cp = c, *p;
    gets(a);
    gets(b);
    gets(c);
    if (strcmp(ap, bp) > 0)
    {
        p = ap;
        ap = bp;
        bp = p;
    }
    if (strcmp(ap, cp) > 0)
    {
        p = ap;
        ap = cp;
        cp = p;
    }
    if (strcmp(bp, cp) > 0)
    {
        p = bp;
        bp = cp;
        cp = p;
    }
    printf("%s\n%s\n%s\n", ap, bp, cp);
    return 0;
}
