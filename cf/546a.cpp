#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
 int b,k,w,n;
	cin>>k>>n>>w;
	int sum=0;
	for(int i=1;i<=w;i++){
  sum += i;
	}
	b = (k*sum)-n;
 if(b<0){
		cout << 0;
	}
	else{
		cout<<b;
	}
 return 0;
}