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
    int n; cin >> n;
    vector<pair<ll, int>> vec;
    vll a(n);
    rep(i,0,n) {
        cin>>a[i];
        vec.push_back({a[i],i+1});
    }
    sort(all(vec));
    vll prefix(n);
    prefix[0] = vec[0].first;

    // Prefix
    rep(i,1,n) {
        prefix[i]=prefix[i-1]+vec[i].first;
    }
    int idx=n-1;
    while (idx>0 && prefix[idx-1]>=vec[idx].first) {
        idx--;
    }
    rep(i,0,n){
        cout<<vec[i].first<<" ";
    }
    cout<<endl;
    forout(prefix);
    // Output
    vll result;
    for (int i = idx; i < n; i++) {
        result.push_back(vec[i].second);
    }
    sort(result.begin(), result.end());
    cout << result.size() << "\n";
    for (int x : result) cout << x << " ";
    cout << "\n";
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}