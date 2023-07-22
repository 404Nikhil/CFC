/*
choco dipped nick
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
 
    vector<int> groups(n);
    for (int i = 0; i < n; i++) {
        cin >> groups[i];
    }
 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += groups[i];
    }
 
    int taxis = ceil((sum + 3) / 4); 
    cout << taxis << endl;
 
    return 0;
}