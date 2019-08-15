#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int max;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		sort(a, a + n);
		printf("%d\n", a[n - 1]);
		if (n == 1)
		{
			printf("-1");
		}
		else
		{
			for (int i = 0; i < n - 1; i++)
			{
				printf("%d ", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
