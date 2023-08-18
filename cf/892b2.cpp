#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> mins;
        long long sum = 0;

        for (int i = 0; i < n; ++i) {
            int m;
            cin >> m;

            vector<long long> a(m);
            for (int j = 0; j < m; ++j) {
                cin >> a[j];
            }

            sort(a.begin(), a.end());
            mins.push_back(a[0]);
            sum += a[0];
        }

        sort(mins.begin(), mins.end());
        if (n == 1) {
            cout << sum << "\n";
        } else {
            cout << sum + mins[0] * (n - 2) << "\n";
        }
    }

    return 0;
}