/*choco dipped nick*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
int main() {
int t;
    cin >> t;
        while (t--) {
        int n,a,q;
        cin>>n>>a>>q;
        int flag=0;
        int count=0;
        int sub=0;
        if(a==n)
        flag=1;
        for(int i=0; i<q; ++i){
            char c;
            cin>>c;
            if(c=='-')
            sub--;
            
            else {
                count++; sub++;
            }
            if(a+sub==n) 
            flag=1;
        }
        if(flag==1)
        cout<<"YES";
        else if(a+ count >= n)
        cout<< "MAYBE";
        else
        cout<<"NO";
        cout<<endl;
    }

    return 0;
}