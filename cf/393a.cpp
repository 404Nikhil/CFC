#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
 string s;
 cin >> s;
 int counts[4] = {0};
 for (char c : s)
 {
		if (c >= '1' && c <= '3')
		{
			counts[c - '0']++;
		}
 }
 bool first = true;
 for (int i = 1; i <= 3; i++)
 {
		while (counts[i] > 0)
		{
			if (!first)
			{
				cout << "+";
			}
			cout << i;
			counts[i]--;
			first = false;
		}
 }
 cout << endl;
 return 0;
}