#include <bits/stdc++.h>
using namespace std;

#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
const ll M = 1e9 + 7;
const ll N = 1e5 + 5;
const ll inf = 2e18;
#define all(x)   (x).begin(), (x).end()
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

int level;

int dp[1000];

int rec(int n) {
    // Base case
    if(n > level) return 0;
    if(n == level) return 1;
    
    // Choices
    int ans = 0;
    rep(i, 0, 3) {
        // Check
        if(n + i + 1 <= level) {
            if(dp[n + i + 1] == -1) {
                dp[n + i + 1] = rec(n + i + 1);
            }
            ans += dp[n + i + 1];
        }
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    level = n;
    cout << rec(0);
}

int main() {
    FAST;
    ll t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}