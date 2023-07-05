#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  cin.tie(0);cin.sync_with_stdio(0);
  cout.tie(0);cout.sync_with_stdio(0);
  int t = 1;
  cin >> t;
  int count=0;
  int i=0;
  while (t--)
  {
  int a,b,c;
  cin>>a>>b>>c;
  int total= a+b+c;
  if(total>=2){
    count++;
  }
  }
     cout << count;

  return 0;
}