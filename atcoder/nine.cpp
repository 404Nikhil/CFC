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
   int a,b;
   cin>>a>>b;
   if(abs(a-b)>3){
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

    solve();
   
    return 0;
}
