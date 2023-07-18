/*
choco dipped nick
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int stop=1;
    cin>>str;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i=i+2;
            if(!stop)
                cout<<" ";
            continue;
        }else{
            stop=0;
            cout<<str[i];
        }
        
    }
    return 0;
}
