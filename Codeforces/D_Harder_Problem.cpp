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
#define forout(v) for (const auto& y : (v)) { cout << y << ' '; };
#define value_sort(v) sort(all(v), [](const auto &l, const auto &r) { return l.second < r.second; });

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    ll n;cin>>n;
    vll vec1,ans;forin(n,vec1);
    set<ll> unused,s1;
    rep(i,1,n+1)unused.insert(i);
    rep(i,0,n){
        int prev_size=s1.size();
        s1.insert(vec1[i]);
        int new_size=s1.size();
        if(prev_size+1==new_size)ans.push_back(vec1[i]);
    }
    rep(i,0,ans.size()) unused.erase(ans[i]); // Remove used elements
    forout(ans);
    int remaining=n-ans.size();
    for(auto x:unused){
        if(remaining==0)break;
        cout<<x<<" ";
        remaining--;
    }
    cout<<endl;
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


