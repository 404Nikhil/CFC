#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
 cout.tie(0);
 cout.sync_with_stdio(0);
 int n, i=0, c = 0;
 cin >> n;
 int a[100000];
 for (i = 0; i < n; i++)
		cin >> a[i];

 for (i = 0; i < n; i++)
 {
		if (a[i] != a[i + 1])
			c++;
 }
 cout << c << endl;
 return 0;
}