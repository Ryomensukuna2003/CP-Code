#include <bits/stdc++.h>
using namespace std;

int recur(int i, vector<int>& s, vector<int>& dp, int n) {
    if (dp[i] != -1) return dp[i];
    int take = 1;
    for (int j = 2 * i; j <= n; j += i) {
        if (s[j - 1] > s[i - 1]) {
            take = max(take, 1 + recur(j, s, dp, n));
        }
    }
    return dp[i] = take;
}

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int &x : s) cin >> x;
    vector<int> dp(n + 1, -1);
    int ans = 1;
    for (int i = 1; i <= n; ++i) {
        ans = max(ans, recur(i, s, dp, n));
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}