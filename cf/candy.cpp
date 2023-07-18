//using multiset
/*
choco dipped nick
*/
#include <bits/stdc++.h>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--){
 int n, k;
 cin>>n>>k;
 multiset<long long> bags;
 for(int i=0; i<n; i++){
 long long candy;
 cin>>candy;
 bags.insert(candy);
 }
 long long  total = 0;
 for(int i=0; i<k; ++i){
 auto last_it = (--bags.end());  // max element in string wiht duplicates
 long long candy = *last_it;
 total += candy;
 bags.erase(last_it);
 bags.insert(candy/2);
 }
 cout<< total << endl;
 }
 }