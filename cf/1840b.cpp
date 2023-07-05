#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (n == 1 && k == 1)
        {
            cout << 2 << endl;
            continue; // Used continue to proceed to the next test case
        }

        if (log2(n) < k)
        {
            cout << n + 1 << endl;
        }
        else
        {
            cout << (int)pow(2, k) << endl;
        }
    }

    return 0;
}