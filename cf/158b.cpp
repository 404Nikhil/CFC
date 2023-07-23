/*
choco dipped nick
*/
#include <bits/stdc++.h>
using namespace std;
// int main() {
//     int n;
//     cin >> n;
 
//     vector<int> groups(n);
//     for (int i = 0; i < n; i++) {
//         cin >> groups[i];
//     }
 
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += groups[i];
//     }
 
//     int taxis = ceil((sum + 3) / 4); 
//     cout << taxis << endl;
 
//     return 0;
// }
int main()
{
int n;
 int o=0;
 int t=0;
 int th=0;
 int f=0;
cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
            o++;
        if(x==2)
            t++;
        if(x==3)
            th++;
        if(x==4)
            f++;
    }
    cout<<f+th+(t*2+max(0,o-th)+3)/4<<endl;
    return 0;
}