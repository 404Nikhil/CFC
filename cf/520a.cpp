#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int countUniqueAlphabets(const string& str) {
    unordered_set<char> uniqueAlphabets;

    for (char ch : str) {
        if (isalpha(ch)) {
            uniqueAlphabets.insert(tolower(ch)); 
        }
    }

    return uniqueAlphabets.size();
}

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);

    int n;
    cin >> n;
    string s;
    cin.ignore(); 
    getline(cin, s);

    int pangram = countUniqueAlphabets(s);

    if (pangram == 26) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}