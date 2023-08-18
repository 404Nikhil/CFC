
/*
choco diped nick
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    // Fast I/O optimization
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);
    int num;
    cin >> num;

    while (num--) {
        int n;
        cin >> n;
        vector<int> result;
        vector<int> f(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            if (!f[i]) {
                for (int j = i; j <= n; j *= 2) {
                    f[j]++;
                    result.push_back(j);
                }
            }
        }
/*
checking for cout<< f[j];
*/        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
