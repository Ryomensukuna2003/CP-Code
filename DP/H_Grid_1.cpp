#include <bits/stdc++.h>
using namespace std;

#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
const ll M = 1e9 + 7;
const ll N = 1e5 + 5;

int dp[1000][1000];

int solve(int x, int y, int n, int m, vector<vector<char>>& vec1) {
    // Base cases
    if (x < 0 || x >= n || y < 0 || y >= m || vec1[x][y] == '#') return 0;
    if (x == n-1 && y == m-1) return 1;
    // Memo
    if (dp[x][y] != -1) return dp[x][y];
    return dp[x][y] = (solve(x+1, y, n, m, vec1) + solve(x, y+1, n, m, vec1)) % M;
}

void solve() {
    memset(dp, -1, sizeof(dp));
    int n, m;cin >> n >> m;
    vector<vector<char>> vec1(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec1[i][j];
        }
    }
    cout << solve(0, 0, n, m, vec1) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}