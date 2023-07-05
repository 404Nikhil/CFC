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
  long long a,b;
  cin>>a>>b;
  if(b==1){
   cout<<"NO"<<endl;
  }
  else{
   cout<<"YES"<<endl;
     cout << a << ' ' << a * b << ' ' << a * (b + 1) << endl;
  }
 }
 return 0;
}