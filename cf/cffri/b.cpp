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
vector<int> xi(n+5);
        for (int i = 0; i < n; i++) {
            cin >> xi[i];
        }
        vector<int> ans;
        ans.pb(xi[0]);
        for (int i = 1; i < n; i++) {
            if (xi[i - 1] > xi[i]) {
                ans.pb(1);
                ans.pb(xi[i]);
            } else {
                ans.pb(xi[i]);
            }
        }
        cout << (int)ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}