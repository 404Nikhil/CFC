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
        int count=0;
        set <int> a;
        for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        a.insert(x);
    }        
            while(!a.empty()){
            int b = *a.rbegin();
            a.erase(b);
            if(b%2==0){
                count++;
                a.insert(b/2);
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}