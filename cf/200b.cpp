#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;

int main()
{
    int n;
    double sum = 0;
    double ans;
    cin >> n;
    double arr[n];
    n = (double)n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum / n << endl;
    return 0;
}