#include <bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0);cin.sync_with_stdio(0);
  cout.tie(0);cout.sync_with_stdio(0);
  long long n;
  cin>>n;
  int count=0;
  while(n!=0){
  if(n%10==4 || n%10==7){
    count++;
  }
  {
     n = n/10; 
        }
  }
  if(count==4 || count==7){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}