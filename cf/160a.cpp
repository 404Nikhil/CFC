#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
 int n;
 cin >> n;

 vector<int> coins(n);
 for (int i = 0; i < n; ++i)
 {
		std::cin >> coins[i];
 }

 sort(coins.rbegin(), coins.rend());

 int sum = 0;
 int count = 0;
 for (int i = 0; i < n; ++i)
 {
		sum += coins[i];
		count++;
		if (sum > accumulate(coins.begin() + i + 1, coins.end(), 0))
		{
			break;
		}
 }

 cout << count << endl;

 return 0;
}