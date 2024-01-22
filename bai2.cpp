#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int cnt(int x, int y)
{
    return factorial(x + y) / (factorial(x) * factorial(y));
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        cout << cnt(x, y) << endl;
    }

    return 0;
}
