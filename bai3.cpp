#include <iostream>

using namespace std;

int goldNeeded(int m, int d, int k, int c)
{
    int r = d;
    int g = 0;
    for (int i = 0; i < m; ++i)
    {
        if (d <= 0)
            return -1;
        d -= k;

        if (d - k <= 0)
        {
            int rm = m - i - 1;
            if (d <= rm)
            {
                g += c;
                d = r;
            }
        }
    }
    return g;
}

int main()
{
    int m, d, k, c;
    cin >> m >> d >> k >> c;
    cout << goldNeeded(m, d, k, c);
    return 0;
}