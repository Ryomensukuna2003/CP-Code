#include <bits/stdc++.h>
using namespace std;

//                                「本 物 の 柔 術 を 見 せ て や る」

using ll = long long;
using vll = vector<ll>;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define newline cout<<endl;

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
    int n;cin>>n;
    int total = n*n;
    vll ans;
    rep(i,0,total/2){
        ans.push_back(i+1);
        ans.push_back(total-i);
    }
    if(total%2) ans.pb((total/2)+1);
    
    vector<vll> segments;
    vll segment;
    rep(i,0,ans.size()){
        segment.push_back(ans[i]);
        if((i+1)%n==0){
            segments.pb(segment);
            segment={};
        }
    }
    bool reverse=false;
    for(auto x:segments){
        if(!reverse){
            forout(x);
            reverse=true;
        }
        else{
            rev(i,x.size()-1,0){
                cout<<x[i]<<" ";
            }
            newline;
            reverse=false;
        }
        
    }
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}