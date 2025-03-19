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

// diff-1
// same-0

void solve()
{
    int n;cin>>n;
    string s1,s2;cin>>s1>>s2;
    int count1=count(all(s1),'1');
    rep(i,0,n-1){
        if(s1[i]!=s2[i]){
            if(s2[i]=='1' && count1)s1[i]='1';
        }
    }
    rep(i,0,n){
        if(s1[i]!=s2[i]){
            if(s2[i]=='0')s1[i]='0';
        }
    }
    if(s1==s2) {
        yes;
    } else {
        no;
    }
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    // cout<<endl;
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}