#include <bits/stdc++.h>
using namespace std;

//                                「本 物 の 柔 術 を 見 せ て や る」

using ll = long long;
using vll = vector<ll>;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl "\n"

constexpr ll M = 1e9 + 7;
constexpr ll N = 1e5 + 5;
constexpr ll inf = 2e18;

#define FAST ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i, l, r) for (ll i = (l); i < (r); i++)
#define rev(i, r, l) for (ll i = (r); i >= (l); i--)
#define forin(n, v) for (ll i = 0; i < (n); i++) { ll x; cin >> x; v.pb(x); }
#define forout(v) for (const auto& y : (v)) { cout << y << ' '; } cout << '\n';
#define value_sort(v) sort(all(v), [](const auto &l, const auto &r) { return l.second < r.second; });

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int target;
    cin >> target;
    vll ans(32, 0);
    bool foundmax = false;
    for (int i = 31; i >= 0; i--) {
        ll current = 1LL << i;
        if (current <= target) {
            if (!foundmax) {
                ans[i] = 1;
                foundmax = true;
            } else {
                ans[i] = -1;
                // Ensure there is a gap between non-zero elements
                if (i > 0) {
                    ans[i - 1] = 0;
                    i--;
                }
            }
            target -= current;
        }
    }
    int n = 32;
    while (n > 0 && ans[n - 1] == 0) {
        n--;
    }
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}