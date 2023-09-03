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
        xi[i] = abs(xi[i]);
    }
    
    sort(xi.begin(), xi.end());
    long long minElement = xi[0];

    cout << minElement << endl;
    return 0;
}