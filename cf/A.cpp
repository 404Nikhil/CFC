#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    float X,P,x;
    cin>>X>>P;
    x = float(X*P/(100-X));
    cout << fixed << setprecision(2) << x+P << endl;
    return 0;
}