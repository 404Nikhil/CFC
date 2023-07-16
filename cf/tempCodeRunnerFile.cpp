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
   long long a,b;
   string X = str(a);
   string Y = str(b);
   cin>>a>>b;
   if(X[-1]+Y[-1]>= 10){
    cout<<"NO";
   }
   else{
    cout<<"YES";
   }
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
