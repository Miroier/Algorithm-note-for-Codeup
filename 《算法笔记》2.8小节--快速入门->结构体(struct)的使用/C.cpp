#include "cstdio"
struct data
{
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int classes;
        char position[10];
    } category;
};
int main()
{
    int n;
    scanf("%d", &n);
    data d[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %c %c", &d[i].num, &d[i].name, &d[i].sex, &d[i].job);
        if (d[i].job == 's')
            scanf("%d", &d[i].category.classes);
        if (d[i].job == 't')
            scanf("%s", &d[i].category.position);
    }
    for (int i = 0; i < n; i++)
    {
        if (d[i].job == 's')
            printf("%d %s %c %c %d\n", d[i].num, d[i].name, d[i].sex, d[i].job, d[i].category.classes);
        if (d[i].job == 't')
            printf("%d %s %c %c %s\n", d[i].num, d[i].name, d[i].sex, d[i].job, d[i].category.position);
    }
    return 0;
}
