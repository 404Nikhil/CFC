#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
 int s;
 cin >> s;
 for (int i = 1; i <= s; i++)
 {
		if (i % 2 == 1)
			cout << "I hate ";
		else if (i % 2 == 0)
			cout << "I love ";

		if (i == s)
			cout << "it";
		else
			cout << "that ";
 }
 return 0;
}