#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  cin.tie(0);cin.sync_with_stdio(0);
  cout.tie(0);cout.sync_with_stdio(0);
  int t = 1;
  cin >> t;
  int a,b,c,x,y,z;
  a=b=c=0;
  while (t--)
  {
    cin >> x >> y >> z;
        a=a+x;
        b=b+y;
        c=c+z;
    }
    if ((a==0)&&(b==0)&&(c==0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
  return 0;
}