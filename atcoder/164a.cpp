 #include <bits/stdc++.h>
 using namespace std;
 typedef long long ll;
bool is_possible(int n, int k) {
    int base3_digits[32];
    int i = 0;
    while (n > 0) {
        base3_digits[i] = n % 3;
        n /= 3;
        i++;
    }

    for (int j = 0; j < i; j++) {
        if (base3_digits[j] > 2)
            return false;
    }

    if (i == 0)
        return true;

    int sum = 0;
    for (int j = 0; j < i; j++) {
        sum += base3_digits[j];
    }

    return sum <= k;
}

int main() {
    int n, k;
    int t=1;
    cin>>t;
    while(t--){
    cin >> n;
    cin >> k;
       if (is_possible(n, k))
        cout << "YES\n" << endl;
    else
        cout << "NO\n" << endl;
    }


    return 0;
}
