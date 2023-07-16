/*
choco dipped nick
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define TEST \
 int t;      \
 cin >> t;   \
 for (int test_case = 1; test_case <= t; ++test_case)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define endl "\n"
#define pii pair<int, int>
#define vi vector<int>
using namespace std;
char checkWinner(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '.') {
            return board[i][0];
        }
    }
    for (int j = 0; j < 3; ++j) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != '.') {
            return board[0][j];
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '.') {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '.') {
        return board[0][2];
    }

    return 'D';
}

void solve() {
    int t;
    cin >> t; 

    for (int i = 0; i < t; ++i) {
        vector<vector<char>> board(3, vector<char>(3));
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                cin >> board[j][k];
            }
        }

        char result = checkWinner(board);
        if (result == 'X' || result == 'O' || result == '+') {
            cout << result << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}