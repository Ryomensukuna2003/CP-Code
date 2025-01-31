#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll M = 1e9 + 7;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    
    for (char c : s) {
        if (c == 'w' || c == 'm') {
            cout << 0 << endl;
            return;
        }
    }

    vector<ll> dp(n + 1, 1);
    if (n > 1) dp[1] = 1;
    
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1] && (s[i] == 'u' || s[i] == 'n'))
            dp[i + 1] = (dp[i] + dp[i - 1]) % M;
        else
            dp[i + 1] = dp[i];
    }
    
    cout << dp[n] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
