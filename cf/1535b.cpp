#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
    cin >> n;
    vector<int> a(n);
    for (int j = 0; j < n; j++){
      cin >> a[j];
    }
    vector<int> b;
    for (int j = 0; j < n; j++){
      if (a[j] % 2 == 0){
        b.push_back(a[j]);
      }
    }
    for (int j = 0; j < n; j++){
      if (a[j] % 2 == 1){
        b.push_back(a[j]);
      }
    }
    int ans = 0;
    for (int j = 0; j < n; j++){
      for (int k = j + 1; k < n; k++){
        if (gcd(b[j], b[k] * 2) > 1){
          ans++;
        }
      }
    }
    cout << ans << endl;

    }
    return 0;
}       