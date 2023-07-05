#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
 long long n;
 cin >> n;
 cout << n << " ";

 while (n > 1)
 {
  if (n & 1)
   n = (3 * n) + 1;
  else
   n >>= 1;
  cout << n << " ";
 }

 return 0;
}