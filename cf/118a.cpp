#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
 string s;
 cin >> s;
 string output;
 for (int i = 0; i < s.size(); i++)
 {
		char ch = tolower(s[i]);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
		{
			continue;
		}
		else
		{
			cout << "." << ch;
		}
 }
 cout << output;
 return 0;
}