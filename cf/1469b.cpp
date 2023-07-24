/*
choco dipped nick
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define TEST \
 int t;      \
 cin >> t;   \
 for (int test_case = 1; test_case <= t; ++test_case)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define endl "\n"
#define pii pair<int, int>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(a) (int)a.size()
using namespace std;
void solve()
{
 int n;
 cin >> n;
 vi r(n);
 for (int i = 0; i < n; ++i)
 {
  int x;
  cin >> x;
  r.pb(x);
 }
 int m;
 cin >> m;
 vi s(m);
 for (int i = 0; i < m; ++i)
 {
  int x;
  cin >> x;
  s.pb(x);
 }
 partial_sum(r.begin(), r.end(), r.begin());
 partial_sum(s.begin(), s.end(), s.begin());
 cout << max(0, *max_element(r.begin(), r.end())) + max(0, *max_element(s.begin(), s.end())) << '\n';
}
signed main()
{
 ios::sync_with_stdio(0);
 cin.tie(nullptr);
 cout.tie(nullptr);
 int t = 1;
 cin >> t;
 while (t--)
 {
  solve();
 }
 return 0;
}