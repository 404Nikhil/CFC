#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
 int n;
	cin>>n;
	string s;
	cin>>s;
	int count;
	for(int i=0; i<s.length(); i++){
		if(s[i]==s[i+1]){
			count++;
		}
	}
	cout<<count;
 return 0;
}