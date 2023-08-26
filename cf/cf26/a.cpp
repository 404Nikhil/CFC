/*choco dipped nick*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int t; cin>>t;
    while(t--){
    int x,y,n; 
    int cnt =1;
    cin>>x>>y>>n;

     vector<int> xi;
         for(int i=0 ; i < n; i++){
              xi.pb(y);
                 y -= cnt;
                 cnt++;
        }
        if(xi[xi.size()-1] < x) 
                 cout<<-1<<endl;
        else{
            cout<<x<<" ";
               for(int i = xi.size() - 2; i >= 0; i--)
                      cout<<xi[i] <<" \n"
                      [i==0];
                      /*cout<<xi[i]<<endl;*/
        }
    
}
    return 0;
}