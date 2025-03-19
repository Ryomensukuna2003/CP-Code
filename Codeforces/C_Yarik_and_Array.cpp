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

ll maxSubarraySum(vll arr) {
    ll res = arr[0];
    ll maxEnding = arr[0];
    for (ll i = 1; i < arr.size(); i++) {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}


void solve()
{
    ll n;cin>>n;
    vll vec1;forin(n,vec1);
    vector<vll>segments;
    vll temp;
    rep(i,0,n){
        if(i>0 && abs(vec1[i]%2)==abs(vec1[i-1]%2)){
            segments.push_back(temp);
            temp={};
        }
        temp.push_back(vec1[i]);
    }
    segments.push_back(temp);
    ll ans=-inf;
    for(auto x:segments){
        ans=max(ans,maxSubarraySum(x));
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