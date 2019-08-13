#include "cstdio"
#include "cstring"
const int maxN = 1010;
struct student
{
    char id[100];
    char name[100];
    char gender[100]; //汉字是双字节，需要用%s输入输出
    int age;
} stu[maxN];
int main()
{
    int N, M;
    //多组测试数据
    while (scanf("%d", &N) != EOF)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%s %s %s %d\n", stu[i].id, stu[i].name, stu[i].gender, &stu[i].age);
        }
        scanf("%d", &M);
        for (int i = 0; i < M; i++)
        {
            char id[100] = {};
            scanf("%s", id);
            int j;
            for (j = 0; j < N; j++)
            {
                if (strcmp(stu[j].id, id) == 0)
                {
                    printf("%s %s %s %d\n", stu[j].id, stu[j].name, stu[j].gender, stu[j].age);
                    break;
                }
            }
            if (j == N)
                printf("No Answer!\n");
        }
    }
    return 0;
}
