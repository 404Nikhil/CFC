#include <bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238462
#define set(x) setprecision(x)
#define mp make_pair
#define f first
#define s second
#define pb push_back
const long long mod = (1e9 + 7);
const long long inf = (1e18);
typedef long long ll;

ll mul(ll x, ll y) {
    ll res = x * y;
    return (res >= mod ? res % mod : res);
}

ll power(ll x, ll y) {
    if (y < 0) return 1;
    ll res = 1;
    x %= mod;
    while (y) {
        if (y & 1) res = mul(res, x);
        y >>= 1;
        x = mul(x, x);
    }
    return res;
}

void solve() {
    ll a, b, c, i, la, ans = 0, minAns = inf, minAnsCount = 0, ans2 = inf, tmp;
    cin >> a >> b >> c;
    ll d[b];
    for (i = 0; i < b; i++) {
        cin >> d[i];
    }
    ans = 1;
    la = 1;
    for (i = 0; i < b; i++) {
        if (d[i] == 1) {
            continue;
        }
        tmp = (d[i] - la);
        if (tmp % c == 0) {
            ans += (tmp / c);
        } else {
            ans += (tmp / c);
            ans++;
        }
        la = d[i];
    }
    if (d[b - 1] != a) {
        tmp = (a - la);
        if (tmp % c == 0) {
            ans += (tmp / c);
        } else {
            ans += (tmp / c);
        }
    }
    la = 1;
    minAns = inf;
    ll tmpAns;
    for (i = 0; i < b; i++) {
        tmpAns = ans;
        if (d[i] == 1) {
            continue;
        }
        if (i == (b - 1)) {
            if (d[b - 1] != a) {
                tmp = (d[i] - la);
                if (tmp % c == 0) {
                    tmpAns -= (tmp / c);
                } else {
                    tmpAns -= (tmp / c);
                    tmpAns--;
                }
                tmp = (a - d[i]);
                if (tmp % c == 0) {
                    tmpAns -= (tmp / c);
                } else {
                    tmpAns -= (tmp / c);
                }
                tmp = (a - la);
                if (tmp % c == 0) {
                    tmpAns += (tmp / c);
                } else {
                    tmpAns += (tmp / c);
                }
                minAns = min(minAns, tmpAns);
                la = d[i];
                continue;
            }
            minAns = min(minAns, tmpAns - 1);
            la = d[i];
            continue;
        }
        tmp = (d[i] - la);
        if (tmp % c == 0) {
            tmpAns -= (tmp / c);
        } else {
            tmpAns -= (tmp / c);
            tmpAns--;
        }
        tmp = (d[i + 1] - d[i]);
        if (tmp % c == 0) {
            tmpAns -= (tmp / c);
        } else {
            tmpAns -= (tmp / c);
            tmpAns--;
        }
        tmp = (d[i + 1] - la);
        if (tmp % c == 0) {
            tmpAns += (tmp / c);
        } else {
            tmpAns += (tmp / c);
            tmpAns++;
        }
        minAns = min(minAns, tmpAns);
        la = d[i];
    }
    la = 1;
    minAnsCount = 0;
    ans2 = inf;
    for (i = 0; i < b; i++) {
        tmpAns = ans;
        if (d[i] == 1) {
            continue;
        }
        if (i == (b - 1)) {
            if (d[b - 1] != a) {
                tmp = (d[i] - la);
                if (tmp % c == 0) {
                    tmpAns -= (tmp / c);
                } else {
                    tmpAns -= (tmp / c);
                    tmpAns--;
                }
                tmp = (a - d[i]);
                if (tmp % c == 0) {
                    tmpAns -= (tmp / c);
                } else {
                    tmpAns -= (tmp / c);
                }
                tmp = (a - la);
                if (tmp % c == 0) {
                    tmpAns += (tmp / c);
                } else {
                    tmpAns += (tmp / c);
                }
                if (minAns == tmpAns) {
                    minAnsCount++;
                }
                la = d[i];
                continue;
            }
            if ((tmpAns - 1) == minAns) {
                minAnsCount++;
            }
            la = d[i];
            continue;
        }
        tmp = (d[i] - la);
        if (tmp % c == 0) {
            tmpAns -= (tmp / c);
        } else {
            tmpAns -= (tmp / c);
            tmpAns--;
        }
        tmp = (d[i + 1] - d[i]);
        if (tmp % c == 0) {
            tmpAns -= (tmp / c);
        } else {
            tmpAns -= (tmp / c);
            tmpAns--;
        }
        tmp = (d[i + 1] - la);
        if (tmp % c == 0) {
            tmpAns += (tmp / c);
        } else {
            tmpAns += (tmp / c);
            tmpAns++;
        }
        if (tmpAns == minAns) {
            minAnsCount++;
        }
        la = d[i];
    }
    cout << minAns << " " << minAnsCount << endl;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
}