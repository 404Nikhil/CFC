/*choco dipped nick*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
int main() {
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(b>a)
    {
    swap(a,b);
    }      
    int moves=0;
    while(a>b)
    {
    a = a - c;
    b = b + c;
    moves++;
    }
    cout<<moves<<endl;
    }
    return 0;
}