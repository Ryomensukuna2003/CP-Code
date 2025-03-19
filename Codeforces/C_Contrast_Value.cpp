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


// Look a,a,a,a,a we can remove such subsarrays and preserve one 
// (a-1 - a) + (a - a+1) can be re written as (a-1 - a+1)

void solve()
{
    ll n;cin>>n;
    vll vec1;
    forin(n,vec1);
    n = unique(vec1.begin(), vec1.end()) - vec1.begin();
    int ans = n;
    for (int i = 0; i + 2 < n; ++i) {
      ans -= (vec1[i] < vec1[i + 1] && vec1[i + 1] < vec1[i + 2]);
      ans -= (vec1[i] > vec1[i + 1] && vec1[i + 1] > vec1[i + 2]);
    }
    cout<<ans<<endl;
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}