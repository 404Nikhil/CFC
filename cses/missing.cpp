#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 cin.tie(0);cin.sync_with_stdio(0);
 cout.tie(0);cout.sync_with_stdio(0);
 long long int n, sum=0,input;
 cin>>n;
 for(int i=0; i<n-1; i++){
  cin >> input;
  sum = sum + input;
 }
 cout << n*(n+1)/2 - sum;
 return 0;
}