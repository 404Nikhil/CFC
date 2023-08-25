#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
int main() {
int t;
cin >> t;
while (t--) {
 long long n;
 cin >> n;
     long long x = sqrt(2 * n) -3;
        while (x *(x + 1)/2 <= n)
                        x++;
 cout << n+ x*(3 - x)/2 << endl;
}
return 0;
}