#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   cin.tie(0);cin.sync_with_stdio(0);
   cout.tie(0);cout.sync_with_stdio(0);
   string s, h = "hello";
    cin >> s;
    int i = 0;
    for (int j = 0; j < (int)s.size(); j++) {
        if (s[j] == h[i]) {
            i++;
            if (i == h.size()) 
            break;
        }
    }
    if(i == h.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;

}