#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> board(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }
    
    int maxSum = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = 0;
            
            // Top-left to bottom-right diagonal
            for (int r = i, c = j; r < n && c < m; r++, c++) {
                sum += board[r][c];
            }
            for (int r = i - 1, c = j - 1; r >= 0 && c >= 0; r--, c--) {
                sum += board[r][c];
            }
            
            // Top-right to bottom-left diagonal
            for (int r = i, c = j; r < n && c >= 0; r++, c--) {
                sum += board[r][c];
            }
            for (int r = i - 1, c = j + 1; r >= 0 && c < m; r--, c++) {
                sum += board[r][c];
            }
            
            // Subtract the center cell as it's counted twice
            sum -= board[i][j];
            
            maxSum = max(maxSum, sum);
        }
    }
    
    return maxSum;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        cout << solve() << endl;
    }
    
    return 0;
}