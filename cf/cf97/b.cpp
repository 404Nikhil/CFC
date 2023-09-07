/*choco dipped nick*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> xi(n);
        for (int i = 0; i < n; i++) {
            cin >> xi[i].first >> xi[i].second;
        }
        int ans = 1e9;
        for (int i = 0; i < n; i++) {
            if (xi[i].second % 2 == 0) {
                int res = (xi[i].second - 2) / 2;
                ans = min(ans, res + xi[i].first);
            } else {
                int res1 = xi[i].second / 2;
                ans = min(ans, res1 + xi[i].first);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
