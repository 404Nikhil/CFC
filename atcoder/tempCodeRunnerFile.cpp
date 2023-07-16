 #include <bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 int main()
 {
  cin.tie(0);cin.sync_with_stdio(0);
  cout.tie(0);cout.sync_with_stdio(0);
  int t = 1;
  cin >> t;
  while (t--)
  {
   long long N,K;
   cin>>N>>K;
   if(N%3 !=0 && K>N/3){
    cout<<"YES\n";
   }
   else{
    cout<<"NO\n";
   }
  }
  return 0;
 }