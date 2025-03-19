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

// If count of negative numbers are odd then we can cancle out all negatives and will be left remaining with 1 negative
// Find smallest number and make it negative.
void solve()
{
    int n;cin>>n;
    vll vec1;
    ll negative=0,sum=0;
    rep(i,0,n){
        int x;cin>>x;
        if(x<0)negative++;
        vec1.push_back(abs(x));
        sum+=abs(x);
    }
    ll mini=*min_element(all(vec1));
    if(negative%2==1)cout<<sum-(2*mini)<<endl;
    else cout<<abs(sum)<<endl;

}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}