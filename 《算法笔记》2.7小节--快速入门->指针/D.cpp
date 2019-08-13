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
    gets(a);
    gets(b);
    gets(c);
    if (strcmp(a, b) > 0)
    {
        swap(a, b);
    }
    if (strcmp(a, c) > 0)
    {
        swap(a, c);
    }
    if (strcmp(b, c) > 0)
    {
        swap(b, c);
    }
    printf("%s\n%s\n%s\n", a, b, c);
    return 0;
}
