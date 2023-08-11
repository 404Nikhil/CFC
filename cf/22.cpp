#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
 int n;
    cin >> n;
    vector<int> a;  
    int flag=0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n-1 ; ++i) { 
        if (a[i + 1] > a[i]) {
            cout << a[i + 1];
            flag=1;
            break;
    }
    }
    if (flag==0){
        cout<<"NO";
    }

    return 0;
}