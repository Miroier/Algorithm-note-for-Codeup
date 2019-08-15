#include "cstdio"
#include "algorithm"
#include "cstring"
using namespace std;

struct student
{
    char id[20];
    int m;
    int q[10] = {};
    int score = 0;
};
bool cmp(student a, student b)
{
    if (a.score != b.score)
        return a.score > b.score;
    else
        return strcmp(a.id, b.id) < 0;
}
int main()
{
    int N, M, G;
    while (scanf("%d", &N), N)
    {
        scanf("%d%d", &M, &G);
        student stu[N];
        int Q[M];
        int line = G;
        for (int i = 0; i < M; i++)
            scanf("%d", &Q[i]);
        for (int i = 0; i < N; i++)
        {
            scanf("%s %d", stu[i].id, &stu[i].m);
            for (int j = 0; j < stu[i].m; j++)
                scanf("%d", &stu[i].q[j]);
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < stu[i].m; j++)
            {
                stu[i].score += Q[stu[i].q[j] - 1];
            }
        }
        int num = 0;
        for (int i = 0; i < N; i++)
            if (stu[i].score >= line)
                num++;
        sort(stu, stu + N, cmp);
        printf("%d\n", num);
        for (int i = 0; i < N && stu[i].score >= line; i++)
        {
            printf("%s %d\n", stu[i].id, stu[i].score);
        }
    }
    return 0;
}
