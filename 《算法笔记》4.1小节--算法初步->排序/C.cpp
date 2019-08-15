#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct student
{
	char id[10];
	char name[10];
	int score;
} stu[100000];
bool cmp1(student a, student b)
{
	return strcmp(a.id, b.id) < 0;
}
bool cmp2(student a, student b)
{
	if (strcmp(a.name, b.name) != 0)
		return strcmp(a.name, b.name) <= 0;
	else
		return strcmp(a.id, b.id) < 0;
}
bool cmp3(student a, student b)
{
	if (a.score != b.score)
		return a.score <= b.score;
	else
		return strcmp(a.id, b.id) < 0;
}
int main()
{
	int N, C, cnt = 0;
	while (scanf("%d %d", &N, &C), cnt++, N)
	{
		for (int i = 0; i < N; i++)
		{
			scanf("%s %s %d", stu[i].id, stu[i].name, &stu[i].score);
		}
		switch (C)
		{

		case 1:
			printf("Case %d:\n", cnt);
			sort(stu, stu + N, cmp1);
			for (int i = 0; i < N; i++)
			{
				printf("%s %s %d\n", stu[i].id, stu[i].name, stu[i].score);
			}
			break;
		case 2:
			printf("Case %d:\n", cnt);
			sort(stu, stu + N, cmp2);
			for (int i = 0; i < N; i++)
			{
				printf("%s %s %d\n", stu[i].id, stu[i].name, stu[i].score);
			}
			break;
		case 3:
			printf("Case %d:\n", cnt);
			sort(stu, stu + N, cmp3);
			for (int i = 0; i < N; i++)
			{
				printf("%s %s %d\n", stu[i].id, stu[i].name, stu[i].score);
			}
			break;
		}
	}
	return 0;
}
