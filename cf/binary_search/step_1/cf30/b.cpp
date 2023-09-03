/*choco dipped nick*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
int main() {
int t;
    cin >> t;
        while (t--) {
        int n;
        cin>>n;
        vector<int> xi(n+1);
        for(int i=0; i<n; ++i){
            int x;
            cin>>x;
            xi[x]++;
        }

        int ops= 0;
        for(int i=1; i<n;++i)
        {
            if(xi[i+1]<xi[i]){
                ops++;
            }
        }
        cout<<ops<<endl;
    }

    return 0;
}