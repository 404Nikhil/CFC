/*
choco dipped nick
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
  string s;
  cin>>s;
  s = '0'+ s;
  int n = s.size();
  int k = n;
  for(int i=n-1; i>=0; i--)
  {
      if(s[i] >= '5')
      {
          s[i]='0';
          k = i;
          int j = i-1;
          
          while(s[j] == '9'){
              s[j] = '0';
              j--;
          }
          s[j]++;
  }
}
  for(int i=k; i<n; i++){
  s[i] = '0';
  }
  if(s.front() == '0'){
  s = s.substr(1);
  }
  cout<<s<<endl;
}
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    return 0;
}