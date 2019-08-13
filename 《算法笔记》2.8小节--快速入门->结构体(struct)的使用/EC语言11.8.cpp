#include "cstdio"
struct student
{
    int xuehao;
    char name[20];
    int a;
    int b;
    int c;
    double aver;
} stu[10];
int main()
{
    double aaver = 0, baver = 0, caver = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d %s %d %d %d", &stu[i].xuehao, &stu[i].name, &stu[i].a, &stu[i].b, &stu[i].c);
        stu[i].aver = (stu[i].a + stu[i].b + stu[i].c) / 1.0;
        aaver += stu[i].a;
        baver += stu[i].b;
        caver += stu[i].c;
    }
    aaver /= 10;
    baver /= 10;
    caver /= 10;
    int maxIndex = 0;
    for (int i = 0; i < 10; i++)
    {
        if (stu[i].aver > stu[maxIndex].aver)
            maxIndex = i;
    }
    printf("%.2lf %.2lf %.2lf\n", aaver, baver, caver);
    printf("%d %s %d %d %d", stu[maxIndex].xuehao, stu[maxIndex].name, stu[maxIndex].a, stu[maxIndex].b, stu[maxIndex].c);
    return 0;
}
