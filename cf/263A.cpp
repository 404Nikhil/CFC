#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int matrix[5][5];

    // Read the input matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    // Find the position of the number one
    int row, col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                row = i;
                col = j;
                break;
            }
        }
    }

    // Calculate the number of moves needed to make the matrix beautiful
    /*
    In a 5x5 matrix, the center row index is 2 and the center column index is also 2. By subtracting 2 from the current row and column indices, we can measure the distance between the current position and the center position.

Let's consider an example:

Suppose the number one is located at row 3 and column 4. To move it to the center, we need to determine how many row and column moves are required.

For the row position: row - 2 = 3 - 2 = 1. We need to move the number one one row down to reach the center row.
For the column position: col - 2 = 4 - 2 = 2. We don't need to move the number one horizontally as it is already in the center column.
*/
    int moves = abs(row - 2) + abs(col - 2);

    // Output the result
    cout << moves << endl;

    return 0;
}