/*choco dipped nick*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        
        vector<vector<ll>> a(n);
        vector<ll> b, c;
        
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            for (int j = 0; j < x; ++j) {
                int y;
                cin >> y;
                a[i].push_back(y);
            }
            sort(a[i].begin(), a[i].end());
            b.push_back(a[i][x - 1]);
            c.push_back(a[i][0]);    
        }
        
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        
        ll sum = c[0];
        for (int i = 0; i < n; ++i) {
            sum += b[i];
        }
        
        cout << sum << endl;
    }
    
    return 0;
}