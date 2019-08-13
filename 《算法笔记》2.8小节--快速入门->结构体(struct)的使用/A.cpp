#include "cstdio"
#include "cstring"
struct person
{
    char name[20];
    int count;
} leader[3]{{"Li", 0}, {"Zhang", 0}, {"Fun", 0}};
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char name[20] = {};
        scanf("%s", &name);
        if (strcmp(name, "Li") == 0)
            leader[0].count++;
        if (strcmp(name, "Zhang") == 0)
            leader[1].count++;
        if (strcmp(name, "Fun") == 0)
            leader[2].count++;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s:%d\n", leader[i].name, leader[i].count);
    }
    return 0;
}
