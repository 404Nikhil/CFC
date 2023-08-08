/*choco dipped nick*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &x: a) cin>>x;
        int sum=0;
        for(int i=0; i<n ; ++i){
            sum += a[i];
        }
        if(sum%2 ==0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }


    }
    return 0;
}