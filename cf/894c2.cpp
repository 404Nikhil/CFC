/*choco dipped nick*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define endl "\n"
#define int long long
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;
    ordered_set setX, setY;
    setY.insert(arr[0]);
    for (int i = 1; i < n; i++) {
        int w = setX.order_of_key(arr[i]);
        int w1 = setY.order_of_key(arr[i]);
        if (w == 0 && w1 != 0) {
            setX.insert(arr[i]);
            count++;
        }
        setY.insert(arr[i]);
    }
    cout << count << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
