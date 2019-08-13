#include "cstdio"
struct student
{
    int xuehao;
    char name[20];
    int a;
    int b;
    int c;
} stu[5];
void input()
{
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %s %d %d %d", &stu[i].xuehao, &stu[i].name, &stu[i].a, &stu[i].b, &stu[i].c);
    }
}
void print()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d %s %d %d %d\n", stu[i].xuehao, stu[i].name, stu[i].a, stu[i].b, stu[i].c);
    }
}
int main()
{
    input();
    print();
    return 0;
}
