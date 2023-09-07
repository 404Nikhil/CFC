// /*choco dipped nick*/
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define pb push_back
// long long gcd(long long a, long long b) {
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n, x, y;
//         cin >> n >> x >> y;

//         long long lcm = (x * y) / gcd(x, y);

//         long long nx = n / x - n / lcm;
//         long long ny = n / y - n / lcm;

//         long long max_score = (nx * (nx + 1) / 2) * x - (ny * (ny + 1) / 2) * y;

//         cout << max_score << endl;
//     }

//     return 0;
// }