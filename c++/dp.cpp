// #include <iostream>
// #include <vector>

// using namespace std;

// int uniquePaths(int m, int n) {
//     // Create a DP table to store the number of paths to reach each cell
//     vector<vector<int>> dp(m, vector<int>(n, 0));

//     // Base case: there is only one way to reach the first row and column
//     for (int i = 0; i < m; ++i) {
//         dp[i][0] = 1;
//     }
//     for (int j = 0; j < n; ++j) {
//         dp[0][j] = 1;
//     }

//     // Fill the DP table
//     for (int i = 1; i < m; ++i) {
//         for (int j = 1; j < n; ++j) {
//             dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//         }
//     }

//     // The number of paths to reach the bottom-right cell is stored in dp[m-1][n-1]
//     return dp[m - 1][n - 1];
// }

// int main() {
//     int m;
//     int n;
//     cin>>m>>n;
//     cout << "Number of unique paths: " << uniquePaths(m, n) << endl;
//     return 0;
// }



#include <iostream>

using namespace std;

int countPaths(int rows, int cols, int current_row, int current_col) {
    // Base case: If we've reached the end of the matrix
    if (current_row == rows - 1 && current_col == cols - 1) {
        return 1;
    }
    // Base case: If we've gone out of bounds
    if (current_row >= rows || current_col >= cols) {
        return 0;
    }

    // Recursive step: Explore both possible moves (right and down)
    return countPaths(rows, cols, current_row + 1, current_col) +
           countPaths(rows, cols, current_row, current_col + 1);
}

int main() {
    int rows, cols;

    // Input the dimensions of the matrix
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Calculate and print the number of ways
    int total_ways = countPaths(rows, cols, 0, 0);
    cout << "Total number of ways to reach the end: " << total_ways << endl;

    return 0;
}