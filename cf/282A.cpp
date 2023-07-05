#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  cin.tie(0);cin.sync_with_stdio(0);
  cout.tie(0);cout.sync_with_stdio(0);
  int t = 1;
  cin >> t;
  int x =0;
  while (t--)
  {
      string statement;
        cin >> statement;
        
        if (statement == "++X" || statement == "X++") {
            x++;
        } else if (statement == "--X" || statement == "X--") {
            x--;
        }
  }
  cout << x << endl;
  return 0;
}