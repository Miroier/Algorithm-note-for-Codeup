#include "cstdio"
struct student
{
    int num;
    char name[20];
    char sex;
    int age;
};
int main()
{
    int n;
    scanf("%d", &n);
    student stu[n], *p = stu;
    for (int i = 0; i < n; i++, p++)
    {
        scanf("%d %s %c %d", &p->num, &p->name, &p->sex, &p->age);
    }
    p = stu;
    for (int i = 0; i < n; i++, p++)
    {
        printf("%d %s %c %d\n", p->num, p->name, p->sex, p->age);
    }
    return 0;
}
