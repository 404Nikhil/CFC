#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> columns(n);
    for (int i = 0; i < n; i++)
    {
        cin >> columns[i];
    }
    sort(columns.begin(), columns.end());
    for (int i = 0; i < n; i++)
    {
        cout << columns[i] << " ";
    }
    cout << endl;

    return 0;
}