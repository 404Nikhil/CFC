#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int n;
    cin>>n;
    int fn;
    int count;
    for(int i=0; i<=n; i++){
        if(count%2==0){
            fn=fn-count;
        }
        else{
            fn=fn+count;
        }
        count++;
        
    }
    cout<<fn;
        
    return 0;
}