#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
     cin >> n;
     vector<int> xi(n);
     for (int i = 0; i < n; ++i)
      {
         cin >> xi[i];
     }
        if (*max_element(xi.begin(), xi.end()) > n)
        {
            cout << "NO" << endl;
            continue;
        }
          vector<int> yi(n + 1, 0);
          for (int i = 0; i < n; ++i)
          {
            yi[0]++;
            yi[xi[i]]--;
        }
          int s = 0;
           for (int i = 0; i < n; ++i)
          {
            s += yi[i];
            yi[i] = s;
        }
          bool check = true;
           for (int i = 0; i < n; ++i)
          {
            if (yi[i] != xi[i])
            {
                check = false;
                break;
            }
        }
        cout << (check ? "YES" : "NO") << endl;
    }
    return 0;
}