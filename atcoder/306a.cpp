#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);cin.sync_with_stdio(0);
 cout.tie(0);cout.sync_with_stdio(0);
 int n;
 cin>>n;
 string s;
 cin>>s;
 string output;
 for(int i=0; i<n;i++){
  output = output + string(2, s[i]); //  if the current character S[i] is 'a', string(2, S[i]) will create the string 'aa'. Then, we append this 'aa' to the output string using +=.
 }
 cout<<output;
 return 0;
}