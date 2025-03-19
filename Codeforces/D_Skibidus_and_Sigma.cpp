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

void prefix_sum(vll &vec) {
    for (size_t i = 1; i < vec.size(); i++) {
        vec[i] += vec[i - 1];
    }
}

void solve()
{
    int n,m;cin>>n>>m;
    vector<pair<ll,vll>>vec1;
    for (int i = 0; i < n; i++){
        vll vec2;
        for (int j = 0; j < m; j++){
            ll x;cin>>x;
            vec2.pb(x);
        }
        prefix_sum(vec2);
        prefix_sum(vec2);
        vec1.pb({0,vec2});
    }

    for (auto& x : vec1) {
        ll sum=0;
        for(auto y:x.second){
            sum+=y;
        }
        x.first=sum;
    }
    sort(all(vec1));
    reverse(all(vec1));
    ll ans=0;
    for (const auto& x : vec1) {
        cout<<x.first<<" - ";
        for(const auto& y:x.second){
            ans+=y;
            cout<<y<<" ";
        }
        cout<<endl;
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