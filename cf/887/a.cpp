#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
    ll n;
    cin>>n;
    ll arr[n];
    ll ans = INT_MAX;
    for(ll i=0; i<n; ++i){
        cin>> arr[i];
        if(i!=0){
            ll diff= arr[i]- arr[i-1];
            if(diff<0){
                ans=0;
            }
            else{
                ans=min(ans,(diff/2+1));
            }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}