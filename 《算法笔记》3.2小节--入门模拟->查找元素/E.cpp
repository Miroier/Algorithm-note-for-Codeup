#include "cstdio"
#include "cstring"
const int maxN = 100;
struct student
{
    char id[100];
    char name[100];
    char gender[100]; //汉字是双字节，需要用%s输入输出
    int age;
} stu[maxN];
int main()
{
    int m;
    while (scanf("%d", &m) != EOF)
    {
        stu[maxN] = {};
        while (m--)
        {
            int n;
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                scanf("%s %s %s %d\n", stu[i].id, stu[i].name, stu[i].gender, &stu[i].age);
            }
            char id[100] = {};
            scanf("%s", id);
            int j;
            for (j = 0; j < n; j++)
            {
                if (strcmp(stu[j].id, id) == 0)
                {
                    printf("%s %s %s %d\n", stu[j].id, stu[j].name, stu[j].gender, stu[j].age);
                    break;
                }
            }
        }
    }
    return 0;
}
