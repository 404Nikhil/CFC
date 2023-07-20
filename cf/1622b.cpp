/*
choco dipped nick
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define TEST int t; cin >> t; for (int test_case = 1; test_case <= t; ++test_case)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define endl "\n" 
#define pii pair<int,int>
#define vi vector<int>
using namespace std;
void solve(){
   int n;
   cin>>n;
   vi v(n);
   for (int &x : v) cin >> x;
   string s;
   cin>>s;
   	set<int> like, dislike;
for(int i=0; i<n; i++) {
		if (s[i] == '1')
			like.insert(v[i]);
		else
			dislike.insert(v[i]);
	}

	vi rating(n + 1, 0);
	int currRating = 1;

	while (!dislike.empty()) {
		int val = *(dislike.begin());
		dislike.erase(dislike.begin());

		rating[val] = currRating++;
	}

	while (!like.empty()) {
		int val = *(like.begin());
		like.erase(like.begin());

		rating[val] = currRating++;
	}

	for(int i=0; i<n; i++){
		cout << rating[v[i]] << ' ';
	}
}
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
  cin >> t;
  while (t--){
    solve();
    cout<< '\n';
   }
    return 0;
}
