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
    ll n,x,k;cin>>n>>x>>k;
    string s;cin>>s;
    ll ans=0;    
    // check first n steps if we ever hit 0
    ll pos = x;
    ll firstOccurrence = -1;
    rep(i,0,n) {
        if(s[i] == 'L')pos--;
        else pos++;
        if (pos==0){
            firstOccurrence=i+1;
            ans++;
            break;
        }
    }
    
    // If we never hit 0
    if (firstOccurrence==-1){
        cout<<0<<endl;
        return;
    }
    
    // How many complete sequences can we fit in k seconds
    ll remainingSeconds=k-firstOccurrence;
    if (remainingSeconds<=0){
        cout<<ans<<endl;
        return;
    }
    // Find cycle: after hitting 0, how many moves until we hit 0 again
    ll cycleLength=0;
    pos=0;
    rep(i,0,n) {
        if(s[i]=='L')pos--;
        else pos++;
        if (pos==0){
            cycleLength=i+1;
            break;
        }
    }
    // If there's a cycle, calculate additional occurrences
    if(cycleLength>0)ans+=remainingSeconds/cycleLength;
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