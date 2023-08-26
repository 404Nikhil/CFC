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
        int l=0,r=n-1;
        bool ok= false;
        while(r>=l){
            int mid=(l+r)/2;
            if(a[mid] == x){
                ok = true;
                break;
            }
            else if(a[mid]< x){
                l=mid+1;
            }
            else if(a[mid]>x){
                r=mid-1;
            }
        }
        if(ok){
            cout<< "YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}