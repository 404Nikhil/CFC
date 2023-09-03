/*choco dipped nick*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
 int main(){
 int t;
 cin>>t;
 while(t--)
 {
    int n,k; 
    cin>>n>>k;
    vector<int> xi(n+1);
    vector<int> yi(n+1,0);
    for(int i=0; i<n ; i++){
       cin>>xi[i];
        yi[xi[i]]++;
    }
    for(int i=0; i<=n; i++){
        if(yi[i]==0)
        xi[n]=i;
    }
      /*  for(int i=0;i<=n;i++){
       cout<<xi[i]<<" ";
     }cout<<endl;*/

    int a = (-k)%(n+1);
    if(a<0){
        a += n+1;
    }
    for(int i=0;i<n;++i){
        cout<<xi[a]<<" ";
        a++;
        a %= n+1;
    }
    cout<<endl;

/* for(int i=1; i<=n ; i++){
         cout<< yi[i] << " ";
            cout<<endl;
  }*/
 }
      return 0;
  }