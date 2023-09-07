/*choco dipped nick*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int n = 10000000;
int prime[10000001];
// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }
int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= n; i++)
        prime[i] = i;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == i)
            for (int j = i * i; j <= n; j += i)
                prime[j] = i;
    }
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (r < 4)
        {
            cout << -1 << endl;
            continue;
        }
        if (l == r)
        {
            if (prime[l] == l)
            {
                cout << -1 << endl;
                continue;
            }
            else
            {
                cout << prime[l] << ' ' << l - prime[l] << endl;
                continue;
            }
        }
        if (r % 2 == 0)
            cout << 2 << ' ' << r - 2;
        else
            cout << 2 << ' ' << r - 3;
        cout << endl;
    }
    return 0;
}
