#include "cstring"
#include <cstdio>
int main()
{
    char s[100];
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = 'Z' - (s[i] - 'A');
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = 'z' - (s[i] - 'a');
        }
    }
    puts(s);
    return 0;
}
