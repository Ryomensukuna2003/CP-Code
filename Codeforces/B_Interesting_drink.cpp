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

// 3 6 8 10 11

void solve()
{
    ll n;cin>>n;
    vll vec1;forin(n,vec1);
    sort(all(vec1));
    ll q;cin>>q;
    while(q--){
        ll x;cin>>x;
        auto it=lower_bound(all(vec1),x);
        if(*it!=x) it--;
        cout<<it-vec1.begin()+1<<endl;
    }
}

void solve()
{
    ll n;cin>>n;
    vll vec1;forin(n,vec1);
    sort(all(vec1));
    ll q;cin>>q;
    while(q--){
        ll x;cin>>x;
        auto it=upper_bound(all(vec1),x);
        cout<<distance(vec1.begin(),it)<<endl;
    }
}

int main() {
    FAST;
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}