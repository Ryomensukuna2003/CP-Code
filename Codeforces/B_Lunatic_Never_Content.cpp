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


// Intiution
// Take 2 elements from start and end and get their difference
// Why diffrence?
// What number i should divide from both elements to get same x [Modulo]
// Beacuse if we take mod with diffrence both elements will aggree on same x.
// Move forward and check if they are aggred on same x or not
// If not take gcd of new diffrence and previous gcd
// Continue till end

void solve()
{
    ll n;cin>>n;
    vll vec1;forin(n,vec1);
    ll ans=0;
    rep(i,0,n) ans= __gcd(ans,abs(vec1[i]-vec1[n-i-1]));
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