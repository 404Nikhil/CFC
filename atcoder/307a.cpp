#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int Sum = 0;
        
        for (int j = 0; j < 7; j++) {
            int a;
            cin >> a;
            Sum += a;
        }
        
        cout << Sum << " ";
    }
    
    return 0;
}