#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
 int t;
cin>>t;

while(t--) {
    int n;
    cin>>n;

    string s;
    cin>>s;

    string r="";
    int curr = 0;
    int prevLen = 0;
    while(curr < n) {
        r += s[curr];
        ++curr;
        while(s[curr]!=r.back()) {
            curr++;
        }
        ++curr;
    }    
    cout<<r<<endl;
}
return 0;
}