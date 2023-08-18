#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define pb push_back
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll p, q, r, s;
        cin >> p >> q >> r >> s;

 if (p < r) {
            cout << 0 << endl;
        } else if (q * s == p) {
            cout << 0 << endl;
        }           else {
                    ll answer = ceil((double)(p - r) / q);
                        if (answer * q > p) answer--;

            ll diff = (r >= (p - (answer) * q)) ? 0 : (p - (answer) * q) - r;
            cout << (answer <= s ? diff : answer - s + diff) << endl;
        }
    }

    return 0;
}