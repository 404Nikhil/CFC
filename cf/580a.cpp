#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 int n, i, count = 0, r = 1;
 cin >> n;
 int array[n];
 for (i = 0; i < n; i++)
 {
  cin >> array[i];
  if (array[i] >= array[i - 1])
  {
   count++;
   r = max(r, count);
  }
  else
  {
   count = 1;
  }
 }
 cout << r << endl;
}