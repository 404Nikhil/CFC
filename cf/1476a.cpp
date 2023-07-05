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
  int n,k;
  cin>>n>>k;
  if(n<=k){
   cout<< (k+n-1)/n<<endl;
  }
  else{
   cout<< 1+ (n%k >0)<<endl;
  }
 }
 return 0;
}