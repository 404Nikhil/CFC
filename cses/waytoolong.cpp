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
    string N;
    cin>> N;
    if (N.length() > 10){
    cout<< N[0] << N.length()-2 << N[N.length()-1]<<endl;
    }
    else{
      cout<< N<<endl;
    }

  }
  return 0;
}