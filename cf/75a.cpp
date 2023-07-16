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
   long long a,b;
cin >> a >> b;
long long c= a+b;
string aStr = to_string(a);
string bStr = to_string(b);
string cStr = to_string(c);
string resultA = "";
string resultB = "";
string resultC = "";
    for (char ch : aStr) {
        if (ch != '0') {
            resultA += ch;
        }
    }
    for (char ch : bStr) {
        if (ch != '0') {
            resultB += ch;
        }
    }
 for (char ch : cStr) {
        if (ch != '0') {
            resultC += ch;
        }
    }
    int A = stoi(resultA);
    int B = stoi(resultB);
    int C = stoi(resultC); 
    if(A+B==C){
     cout<<"YES";
    }
    else{
     cout<<"NO";
    }
}
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
    solve();
    return 0;
}
