#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

bool isClosingBracket(char c)
{
    return c == ')' || c == ']' || c == '}';
}

char getOpeningBracket(char c)
{
    return c == ')' ? '(' : c == ']' ? '['
                                     : '{';
}

bool checkBalance(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (isClosingBracket(c))
        {
            if (st.empty())
                return false;
            char opening = getOpeningBracket(c);
            if (st.top() != opening)
                return false;
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    return st.empty();
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        cout << (checkBalance(s) ? "true\n" : "false\n");
    }
    return 0;
}