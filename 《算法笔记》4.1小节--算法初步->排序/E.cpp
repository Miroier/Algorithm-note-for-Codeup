#include <algorithm>
#include <cstdio>
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int m;
	while (scanf("%d", &m) != EOF)
	{
		int a[m][m];
		int b[2 * m + 2], cnt = 0;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &a[i][j]);
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				b[cnt] += a[i][j];
				b[cnt + 1] += a[j][i];
				if (i == j)
					b[2 * m] += a[i][j];
				if (i + j == m - 1)
					b[2 * m + 1] += a[i][j];
			}
			cnt += 2;
		}
		sort(b, b + 2 * m + 2, cmp);
		for (int i = 0; i < 2 * m + 2; i++)
			printf("%d ", b[i]);
		printf("\n");
	}
	return 0;
}
