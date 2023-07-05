#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    
    int count = 0;
    int score = scores[k-1];
    for (int i = 0; i < n; i++) {
        if (scores[i] >= score && scores[i] > 0) {
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
