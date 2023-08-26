/*choco dipped nick*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define endl '\n'
int main()
{


    int t;
    cin >> t;
    
    while (t--)
    {
        int n, k; 
        cin >> n >> k; 
        string s;
        cin >> s;

        if (k % 2 == 0)
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else
        {
            string a = "", b = "";
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    b += s[i];
                else
                    a += s[i];
            }

            sort(b.begin(), b.end());
            sort(a.begin(), a.end());

            int i = 0;
            int j = 0;
            while (i < b.size() || j < a.size())
            {
                if (i != b.size())
                {
                    cout << b[i++];
                }
                if (j != a.size())
                {
                    cout << a[j++];
                }
            }
            cout << endl;
        }
    }
    return 0;
}
