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

// We can't change odd to even cause even+odd=odd hence we have to change all odds
// If all even then 0 else sort and start with min evens and update your maxOdd element
// So where i was fucking up with this sol is if maxOdd is less then current even then instead of increasing that current even pick max even and update it
// After that maxOdd will be always max

void solve()
{
    ll n;cin>>n;
    vll vec1,evens;forin(n,vec1);
    ll oddCount=0,evenCount=0,maxOdd=0;
    rep(i,0,n){
        if(vec1[i]%2){
            oddCount++;
            maxOdd=max(maxOdd,vec1[i]);}
        else{
            evenCount++;
            evens.push_back(vec1[i]);
        }
    }
    if(oddCount==0 || evenCount==0){
        cout<<0<<endl;
        return;
    }
    sort(all(evens));
    ll ans=evens.size();
    rep(i,0,evens.size()){
        if(evens[i]<maxOdd){
            maxOdd+=evens[i];
        }
        else{
            ans++;
            break;
        }
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