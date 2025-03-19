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
    int n, k;
    cin >> n >> k;
    vll a(n), w(k);
    for (auto &x : a) cin >> x;
    for (auto &x : w) cin >> x;

    sort(all(a), greater<ll>());
    sort(all(w));

    ll sum = 0;
    int l = 0, r = n - 1;

// At first we are adding max and also handling case where w=1 as max is equals to min 
    for (int i = 0; i < k; i++) {
        sum += a[l];
        if (w[i] == 1) sum += a[l];  
        l++;
    }

// Handling min case
    for (int i = k - 1; i >= 0; i--) {
        if (w[i] == 1) break;
        sum += a[r];
        r -= w[i] - 1;
    }
    cout << sum << endl;
}


int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}