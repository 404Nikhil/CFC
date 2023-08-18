/*choco dipped nick*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll a[n];
    map<ll , ll> m;
    vector<ll>b,c;
    for(int i=0; i<n;++i){
        cin>>a[i];
        m[a[i]]++;
    }
    if(m.size()==1){
        cout<<-1 <<endl;continue;}
        ll p=*max_element(a,a+n);
        for(int i=0; i<n;++i){
            if(p==a[i]){
                c.push_back(p);
            }
            else{
                b.push_back(a[i]);
            }
        }
        cout<<b.size()<< " "<< c.size()<<endl;
        for(auto x: b){
            cout << x<< " ";
        }
        cout<<endl;
        for(auto x : c){
            cout << x << " ";
        }
        cout<< endl;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}