#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   cin.tie(0);
   cin.sync_with_stdio(0);
   cout.tie(0);
   cout.sync_with_stdio(0);
   int t = 1;
   cin >> t;
   int a = 0;
   int d = 0;
   int i = 0;
   while (t--)
   {
      string str;
      cin >> str;
      char ch1 = 'A';
      char ch2 = 'D';
      for(int i=0; i<str.length();i++){
      if (str[i] == ch1)
      {
         a++;
      }
      else
      {
         d++;
      }
   }
}
if (a > d)
{
   cout << "Anton";
}
else if (d > a)
{
   cout << "Danik";
}
else
{
   cout << "Friendship";
}
return 0;
}