/*choco dipped nick*/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
 int main(){
 int t;
	cin >> t;
	while (t--) {
	string s;cin>>s;
        int a=-1;
        int b=-1;
        for(int i=0; i<s.length(); i++   )
        {
            if(s[i]=='1')
            a=i;
            if(s[i]=='3')
            b=i;
        };
        if(a>b)
        cout<<31<<endl;
        else
        cout<<13<<endl;
    };
    return 0;
  }
