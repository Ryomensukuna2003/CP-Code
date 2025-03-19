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


// Find length of max distinct elements

void solve()
{
    int n;cin>>n;
    vll vec1;
    map<int,int>m1;
    rep(i,0,n){
        int x;cin>>x;
        vec1.push_back(x);
        m1[x]++;
    }
    int max_cnt=0,cnt=0,l=0,r=0;
    rep(i,0,n){
        if(m1[vec1[i]]==1)cnt++;
        else cnt=0;
        if(max_cnt<cnt){
            r=i;
            l=i-cnt+1;
            max_cnt=max(cnt,max_cnt);
        }
    }
    if(max_cnt==0)cout<<0<<endl;
    else cout<<l+1<<" "<<r+1<<endl;
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}