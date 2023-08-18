/*
choco dippd nick*/

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
    long long a,b,c;
    cin>>a>>b>>c;
    a+= c-c/2;
    b += c/2;
    if(a>b)
    {
        cout<<"First"<<endl;
    }else
    {
        cout<<"Second"<<endl;
    }
    }
    return 0;
}