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
    ll n,m;cin>>n>>m;
    vector<pair<string,ll>>vec1;
    rep(i,0,n){
        string s;cin>>s;
        vec1.pb({s,0});
    }
    rep(i,0,n){
        rep(j,i+1,n){
            string temp = vec1[j].first;
            reverse(all(temp));
            if(vec1[i].first==temp){ // Reverse found
                vec1[i].second=1;
                break;
            }
        }
    }
    string ans="";
    for(auto x:vec1){
        if(x.second)ans+=x.first;
    }
    for(auto x:vec1){
        string temp=x.first;
        reverse(all(temp));
        if(!x.second && temp==x.first){
            ans+=x.first;
            break;
        }
    }
    ll vec1Size=vec1.size();
    for(ll i=vec1Size-1;i>=0;i--){
        if(vec1[i].second){
            string temp=vec1[i].first;
            reverse(all(temp));
            ans+=temp;
        }
    }
    cout<<ans.size()<<endl;
    cout<<ans<<endl;
}

int main() {
    FAST;
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}