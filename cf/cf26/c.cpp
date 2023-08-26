/*choco dipped nick*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define endl '\n'

int main() {
    int t;
    cin >> t;
    int a,b;
    while (t--) {
       cin>>a;

       vector<int> arr;
        arr.pb(a);
       if(a%2 ==1){
            a--;
            arr.pb(a);
       }
       while(a!=2){
             b =1;
            while(a%(b*2)==0){
            b *= 2;
                    }
            if(b == a){
                b /= 2;
                        }
             a -= b;
             arr.pb(a);
                   }
                   
       arr.pb(1);
       cout<<arr.size()<<'\n';
       for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
       }
       cout<<'\n';  
    }

    return 0;
}
