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
   int n;
   cin>>n;
  if(n%2==0 && (long long)sqrt(n/2) * (long long)sqrt(n/2) == n/2 || n==2){
  cout<<"YES"<<endl;
  }
   else if(n%4==0 && (long long)sqrt(n/4) * (long long)sqrt(n/4) == n/4){
    cout<<"YES"<<endl;
}
else{
 cout<<"NO"<<endl;
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
