#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    set<int> multiples;
    int sum = 0;

   for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            sum++;
        }
    }

    cout<<sum;
    return 0;
}