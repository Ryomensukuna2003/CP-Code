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

void solve()
{
    int n,m;cin>>n>>m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long b_val;
    cin >> b_val;
    long long opt0 = a[0];
    long long opt1 = b_val - a[0];
    long long dp = min(opt0, opt1);

    bool possible = true;
    for (int i = 1; i < n; i++){
        long long candidate = LLONG_MAX;
        if(a[i] >= dp)
            candidate = min(candidate, a[i]);
        long long flipped = b_val - a[i];
        if(flipped >= dp)
            candidate = min(candidate, flipped);
        if(candidate == LLONG_MAX){
            possible = false;
            break;
        }
        dp = candidate;
    }
    cout << (possible ? "YES" : "NO") << "\n";
}


int main()
{
    FAST;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}