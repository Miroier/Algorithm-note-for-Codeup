#include "cstdio"
const int maxM = 210;
int main()
{
    int N, M;
    while (scanf("%d %d", &N, &M) != EOF)
    {
        int reader[N];
        int book[maxM] = {};
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &reader[i]);
            book[reader[i]]++;
        }
        for (int i = 0; i < N; i++)
        {
            if (book[reader[i]] == 1)
                printf("BeiJu\n");
            else
                printf("%d\n", book[reader[i]] - 1);
        }
    }
    return 0;
}
