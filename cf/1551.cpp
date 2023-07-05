#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);cin.sync_with_stdio(0);
 cout.tie(0);cout.sync_with_stdio(0);
  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    int c1,c2;
    if(n%3 == 0){
      cout<<n/3<<" "<<n/3<<endl;
      continue;
    }
    if(n%3 == 1){
      cout<<(n/3 + 1)<<" "<<n/3<<endl;
      continue;
    }
    cout<<(n/3)<<" "<<(n/3 + 1)<<endl;
  }
}