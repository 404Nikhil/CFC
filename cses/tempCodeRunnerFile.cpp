#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
 int n;
 cin >> n;
 while (n = 0)
 {
		if (n % 10 == 4 || n % 10 == 7)
		{
			cout << "YES";
		}
		else
		{
			return n;
		}
 }
 if (n % 4 == 0 || n / 7 == 0)
 {
		cout << "YES";
 }
 else
 {
		cout << "NO";
 }

 return 0;
}