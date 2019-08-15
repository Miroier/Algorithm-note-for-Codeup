#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	char a[200];
	while (gets(a) != NULL)
	{
		sort(a, a + strlen(a));
		puts(a);
	}
	return 0;
}
