/*
choco dipped nick
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define TEST int t; cin >> t; for (int test_case = 1; test_case <= t; ++test_case)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define endl "\n" 
#define pii pair<int,int>
#define vi vector<int>
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define          sz(a)               (int)a.size()
using namespace std;
void solve(){
   int n,k;
   cin>>n>>k;
   vector<int> arr(n);
   for(int i=0; i<n; ++i){
    cin>> arr[i];
   }
   sort(all(arr));
   int count =1, ans= 1;
    for(int i=1; i<arr.size(); ++i){
     if(arr[i] - arr[i-1] > k){
      count=1;
     }
     else{
      ++count;
     }
     ans = max(ans, count);
    }
         cout << n - ans << '\n';

}
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
  cin >> t;
  while (t--){
    solve();
   }
    return 0;
}
