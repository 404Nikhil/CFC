#include <bits/stdc++.h>
using namespace std;
long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,i,j,k=0;
       string s;
       cin>>n;
       int a[n][n]={0};
       if(n==2) {cout<<-1<<endl;}
       else{
       for(i=0;i<n;i++){
           for(j=0;j<n;j++){
            a[i][j]=(j-i+n)%n * n + i;
           }
       }
        for(i=0;i<n;i++){
           for(j=0;j<n;j++){
                cout<<a[i][j]+1<<" ";
           }
           cout<<endl;
        }
       }

    }
return 0;
}

// a[i][j] = (j - i + n) % n * n + i;
/*
a[0][0] = (0 - 0 + 3) % 3 * 3 + 0 = 0
a[0][1] = (1 - 0 + 3) % 3 * 3 + 0 = 3
a[0][2] = (2 - 0 + 3) % 3 * 3 + 0 = 6

a[1][0] = (0 - 1 + 3) % 3 * 3 + 1 = 4
a[1][1] = (1 - 1 + 3) % 3 * 3 + 1 = 1
a[1][2] = (2 - 1 + 3) % 3 * 3 + 1 = 4

a[2][0] = (0 - 2 + 3) % 3 * 3 + 2 = 8
a[2][1] = (1 - 2 + 3) % 3 * 3 + 2 = 5
a[2][2] = (2 - 2 + 3) % 3 * 3 + 2 = 8

*/