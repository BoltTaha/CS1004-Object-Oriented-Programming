#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int countIncreasingPaths(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    
    vector<vector<int>> dp(m, vector<int>(n, 0));
    
    // Initialize the base case for paths of length 1
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            dp[i][j] = 1;
        }
    }
    
    // DP to count paths for each cell
    for (int len = 2; len <= m * n; ++len) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int dx = -1; dx <= 1; ++dx) {
                    for (int dy = -1; dy <= 1; ++dy) {
                        if (dx == 0 && dy == 0) continue; // skip the same cell
                        int x = i + dx;
                        int y = j + dy;
                        if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] < grid[i][j]) {
                            dp[i][j] = (dp[i][j] + dp[x][y]) % MOD;
                        }
                    }
                }
            }
        }
    }
    
    // Sum up the counts for all cells
    int totalPaths = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            totalPaths = (totalPaths + dp[i][j]) % MOD;
        }
    }
    
    return totalPaths;
}

int main() {
    vector<vector<int>> grid1 = {{1, 1}, {3, 4}};
    vector<vector<int>> grid2 = {{1}, {2}};
    
    int result1 = countIncreasingPaths(grid1);
    int result2 = countIncreasingPaths(grid2);
    
    cout << "Result 1: " << result1 << endl; // Output: 8
    cout << "Result 2: " << result2 << endl; // Output: 3
    
    return 0;
}