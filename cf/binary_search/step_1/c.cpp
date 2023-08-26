#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for(int i=0; i<k; ++i){
        int x;
        cin>>x;
         int l=-1; // a[l] < x
         int r=n; // a[r] => x
         while(r>l+1){
             int mid=(l+r)/2;
             if(a[mid]< x){
                 l=mid;
             }
             else{
                 r=mid;
             }
         }
            cout << r+1 << endl;
    }
    return 0;
}