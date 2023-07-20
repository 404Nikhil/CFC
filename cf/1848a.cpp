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
using namespace std;
void solve(){
   int n,m,k,x,y,a,b,stop = 1;
   cin>>n>>m>>k;
   cin>>x>>y;
   for(int i=0; i<k; ++i){
    cin>>a>>b;
    if((abs(a-x) + abs(b-y)) % 2 == 0)
    stop = 0;
   }
   if (stop)
   cout<< "YES\n";
   else 
   cout << "NO\n";
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
