#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3","unroll-loops")
#pragma GCC optimize("inline","-ffast-math")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define int long long
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
void solve(){
 int n;cin>>n;
 int a[n];
 for(int i = 0;i<n;i++)cin>>a[i];
 int ans = 0;
 pbds A;pbds B;
 B.insert(a[0]);
 for(int i = 1;i<n;i++){
 int w = A.order_of_key(a[i]);
 int w1 = B.order_of_key(a[i]);
 if(w==0 && w1!=0){
 A.insert(a[i]);ans++;
 }
 B.insert(a[i]);
 }
 cout<<ans<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int testcase=1;
 cin>>testcase;
 while(testcase--){
 solve();
 }
 return 0;
}