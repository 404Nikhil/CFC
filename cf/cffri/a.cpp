#include <bits/stdc++.h>
using namespace std;
bool check(const vector<string> &c)
{
    int n = c.size();
    int m = c[0].size();

    for (int col1 = 0; col1 < m; ++col1)
    {
        for (int col2 = col1 + 1; col2 < m; ++col2)
        {
            for (int col3 = col2 + 1; col3 < m; ++col3)
            {
                for (int col4 = col3 + 1; col4 < m; ++col4)
                {
                    bool v = false, i = false, k = false, a = false;
                    for (int row = 0; row < n; ++row)
                    {
                        if (c[row][col1] == 'v')
                            v = true;
                        if (c[row][col2] == 'i')
                            i = true;
                        if (c[row][col3] == 'k')
                            k = true;
                        if (c[row][col4] == 'a')
                            a = true;
                    }
                    if (v && i && k && a)
                    {
                        return true;
                    }
                }
            }
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> c(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> c[i];
        }
        bool result = check(c);
        cout << (result ? "YES" : "NO") << endl;
    }

    return 0;
}