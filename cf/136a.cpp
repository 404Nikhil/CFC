#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
 int n;
 cin >> n;

 vector<int> giftTo(n);
 for (int i = 0; i < n; i++)
 {
		cin >> giftTo[i];
 }

 vector<int> giftFrom(n);
 for (int i = 0; i < n; i++)
 {
		giftFrom[giftTo[i] - 1] = i + 1;
 }

 for (int i = 0; i < n; i++)
 {
		cout << giftFrom[i] << " ";
 }
 cout << endl;
 return 0;
}