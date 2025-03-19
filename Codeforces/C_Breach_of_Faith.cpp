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

vector<ll> arrangeNumbers(vector<pair<ll, ll>>& freq_pairs) {
    priority_queue<pair<ll, ll>> pq;
    for (auto& p : freq_pairs) {
        if (p.second > 0) {
            pq.push({p.second, p.first});
        }
    }   
    vector<ll> result;
    pair<ll, ll> prev = {0, 0};
    while (!pq.empty()) {
        pair<ll, ll> curr = pq.top();
        pq.pop();
        result.push_back(curr.second);
        curr.first--;
        if (prev.first > 0) {
            pq.push(prev);
        }
        prev = curr;
    }
    if (prev.first > 0) {
        return {};
    }
    return result;
}


void solve()
{
    ll n;cin>>n;
    n*=2;
    vector<pair<ll,ll>> vec1;
    map<ll,ll>m1;
    rep(i,0,n){
        ll x;cin>>x;
        m1[x]++;
    }
    for(auto x:m1){
        vec1.pb({x.first,x.second});
    }
    reverse(all(vec1));
    vll ans=arrangeNumbers(vec1);
   
    ll l=0,r=1;
    bool plus=true;
    ll missing=0;
    rep(i,0,n){
        if(plus){
            missing+=ans[i];
            plus=false;
        }
        else{
            missing-=ans[i];
            plus=true;
        }
    }
    cout<<missing<<" ";
    forout(ans);
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