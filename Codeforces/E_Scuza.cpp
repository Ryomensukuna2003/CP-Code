// Here make a staricase with given input and for brute force you can find it but it will give tle
// Make a max_height array where every height is larger then previous hance making it monotonic
// 1 2 1 5 will be converted into 1 2 2 5 



#include <bits/stdc++.h>
#include <numeric>
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


// 1 2 1 5
// 1 3 4 9 prefix

// 1 2 4 9 10
// 1 4 4 9 9

void solve() {
    ll n, q;cin >> n >> q;
    vll heights, given;
    forin(n, heights);
    forin(q, given);

    vll prefix(n), prefmax(n);
    prefix[0] = heights[0];
    prefmax[0] = heights[0];

    rep(i, 1, n) {
        prefix[i] = prefix[i - 1] + heights[i];
        prefmax[i] = max(prefmax[i - 1], heights[i]);
    }

    rep(i, 0, q) {
        auto it = upper_bound(all(prefmax), given[i]);
        if (it == prefmax.begin()) cout << "0 ";
        else cout << prefix[it - prefmax.begin() - 1] << " ";
    }
    cout <<endl;
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}