#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    int a, b, c(0), m(0);
    while (t--)
    {
    cin>>a>>b;
        c = c - a;
        c = c + b;
        if (c > m)
        {
            m = c;
        }
    }

    cout<<m;
        
    return 0;
}