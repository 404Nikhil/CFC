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
  int count = 0;
  int n=1;
  cin>>n;
  while(n--){
  int a,b;
  cin>>a>>b;
  if(a>b){
   count++;
  }
  }
  cout<<count<<endl;
 }
 return 0;
}