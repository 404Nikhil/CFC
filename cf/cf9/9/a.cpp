#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
int main() {
 int n;
    cin >> n;
    vector<long long> xi(n);
    
    for (int i = 0; i < n; i++) {
        cin >> xi[i];
    }
    
    if (xi.empty()) {
        cout << endl;
        return 1;
    }

    long long minElement = abs(xi[0]);

    for (long long element : xi) {
        long long absValue = abs(element);
        if (absValue < minElement) {
            minElement = absValue;
        }
    }
    
    cout << minElement << endl;
    return 0;
}