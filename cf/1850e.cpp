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
#define ll     long long
#define endl "\n" 
#define pii pair<int,int>
#define vi vector<int>
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define          sz(a)               (int)a.size()
using namespace std;
void solve(){
  ll n, c;
        cin>>n>>c;
 
        vector<ll> s(n);
        for(auto &e: s)     cin>>e;
 
        __int128 low=0, high=1e9;
 
        while(low <= high)
        {
            __int128 mid = (low + high)/2;
 
            __int128 val = 0;
 
            for(auto e: s)
                val += (e+mid*2ll)*1ll*(e+mid*2ll);
 
            if(val == c)
            {
                cout<<(ll)mid<<"\n";
                break;
            }
            else if(val < c)
                low = mid+1;
            else
                high = mid-1;
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