#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int a,b;
cin>>a>>b;
int year=0;
while (a<=b){
  a=a*3;
  b=b*2;
  year++;
}
cout<<year;
}