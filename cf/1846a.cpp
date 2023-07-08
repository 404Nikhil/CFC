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
#define for(i, a, b) for (int i = a; i < b; ++i)
using namespace std;
void solve(){
  int count = 0;
  int n=1;
  cin>>n;
  while(n--){
  int a,b;
  cin>>a>>b;
  if(a>b){
   count++;
  }
  }
  cout<<count<<endl;
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
