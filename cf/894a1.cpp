/*choco dipped nick*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while (t--) {
        /*TYPE CODE HERE*/
        string s;
        cin >> s;
        int n = s.length();

        string x = string(n, '(') + string(n, ')');
        string z = "";
        int y = n;
        /*
        if (n == 2) {
        if (!hasPair) {
            cout << "YES" << endl;
            string out = "()";
            while (n--)
                cout << out;

            cout << endl;
            return;
        } else {
            cout << "NO" << endl;
            return;
        }
    }*/

        while (y--)
            z += "()";

        if (x.find(s) == string::npos) {
            cout << "YES" << endl;
            cout << x << endl;
        } else if (z.find(s) == string::npos) {
            cout << "YES" << endl;
            cout << z << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}