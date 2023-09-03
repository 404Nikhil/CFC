/*choco dipped nick*/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
 int main(){
     int t;
    cin >> t;
    while (t--) {
        string l, r;
        cin >> l >> r;
        int L = l.size();
        int R = r.size();
        if (l[0] != r[0] && l[L - 1] != r[R - 1]) {
            cout << "NO" << endl;
            continue;
        }
        
        if (l[0] == l[L - 1] && r[0] == r[L - 1] && l[0] == r[0]) {
            cout << "YES" << endl;
            continue;
        }
            int flag = 0;
         for (int i = 0; i < L - 1; i++) {
            if (l[i] == l[0] && r[i] == l[0] && l[i + 1] == r[i + 1] && l[i + 1] == l[L - 1]) {
                flag = 1;
            }
        }
        cout << (flag == 0 ? "NO" : "YES") << endl;
    }
    return 0;
  }
