#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    long long a,b,k;
    cin>>a>>b>>k;
    if(a%k==0 && b%k==0){
        cout<<"Both"<<endl;
    }
    else if(a%k==0){
        cout<< "Memo"<<endl;
    }
    else if(b%k==0){
        cout<< "Momo"<< endl;
    }
    else{
        cout<< "No One"<<endl;
    }
    return 0;
}