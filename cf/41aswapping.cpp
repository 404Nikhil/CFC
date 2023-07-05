#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    string s1,s2;
	cin>>s1>>s2;
	reverse(s1.begin(),s1.begin()+s1.size());
	if(s1==s2)
	cout<<"YES";
	else
	cout<<"NO";
	

    return 0;
}