/*choco dipped nick*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s;
    cin >> s;
    int l = s.length();
    int n = l;
    bool hasPair = false, hasConsecutivePairs = false;
    
    // Check for pairs of parentheses and consecutive pairs
    for (int i = 0; i < l - 1; i++) {
        hasPair |= (s[i] == '(' && s[i + 1] == ')'); // Check for a pair "()"
        hasConsecutivePairs |= (s[i] == '(' && s[i + 1] == '('); // Check for consecutive pairs "(("
    }

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
    }

    if (hasPair && hasConsecutivePairs) {
        // If both types of pairs exist, generate and print a balanced sequence
        cout << "YES" << endl;
        string out = "()";
        while (n--)
            cout << out;

        cout << endl;
    } else if (!hasPair || (hasPair && !hasConsecutivePairs)) {
        // If no valid pairs or only non-consecutive pairs exist, generate and print a balanced sequence
        cout << "YES" << endl;
        cout << string(n, '(') << string(n, ')');
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
