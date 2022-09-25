#include <iostream>
#include <stack>
using namespace std;

int priority(char a, char b)
{

    if (a == '^')
    {

        if (b == '^')
        {
            return 0;
        }
        else
            return 1;
    }

    else if (a == '*')
    {

        if (b == '/' || b == '^' || b == '*')
        {
            return 0;
        }
        else
            return 1;
    }

    else if (a == '/')
    {

        if (b == '*' || b == '^' || b == '/')
        {
            return 0;
        }
        else
            return 1;
    }

    else if (a == '+')
    {

        if (b == '*' || b == '^' || b == '/' || b == '-' || b == '+')
        {
            return 0;
        }
        else
            return 1;
    }

    else if (a == '-')
    {

        if (b == '*' || b == '^' || b == '/' || b == '+' || b == '-')
        {
            return 0;
        }
        else
            return 1;
    }

    return 1;
}

int main()
{

    stack<char> s;

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '^' || str[i] == '*' || str[i] == '/' || str[i] == '+' || str[i] == '-')
        {

            if (s.empty() || priority(str[i], s.top()))
            {

                s.push(str[i]);
            }
            else
            {

                while (s.empty() != 1 && !priority(str[i], s.top()))
                {
                    cout << s.top();
                    s.pop();
                }

                s.push(str[i]);
            }
        }

        else if (str[i] == ')')
        {

            while (s.top() != '(' && s.size() != 0)
            {
                cout << s.top();
                s.pop();
            }

            s.pop();
        }

        else if (str[i] == '(')
        {

            s.push(str[i]);
        }

        else
        {

            cout << str[i];
        }
    }

    while (s.size() != 0)
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}