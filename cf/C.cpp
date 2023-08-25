#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    string C;
    cin>>C;
    int c = C[0];
    char res = c+1;
    if(C[0]== 'z'){
        cout << "a" << endl;
    }
    else{

        cout << res << endl;
    }
    return 0;
}