#include "cstdio"
#include "iostream"
#include "stack"
#include "string"
using namespace std;
stack<char> s;
string str;
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        while (!s.empty())
            s.pop();
        int flag = 0;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '[' || str[i] == '(' || str[i] == '{')
                s.push(str[i]);
            if (str[i] == ']' || str[i] == ')' || str[i] == '}')
            {
                if (!s.empty())
                {
                    if (str[i] == ']' && s.top() == '[')
                    {
                        s.pop();
                    }
                    else if (str[i] == ')' && s.top() == '(')
                    {
                        s.pop();
                    }
                    else if (str[i] == '}' && s.top() == '{')
                    {
                        s.pop();
                    }
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1 || !s.empty())
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}
