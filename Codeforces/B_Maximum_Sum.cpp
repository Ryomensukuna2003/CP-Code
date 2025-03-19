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

// k=2
// 15 22 12 10 13 11
// 10 11 12 13 15 22 <-- sorted
// 10 21 33 46 61 83 <-- prefix sum

vector<vector<ll>> dp;

ll maxisum(ll front,ll end,ll k,vll vec1){
    if(k==0)return 0;
    if(dp[front][end]!=-1)return dp[front][end];
    ll twomini=((vec1[front]+vec1[front+1]));
    ll onemaxi=(vec1[end]);
    return dp[front][end]=min(twomini+maxisum(front+2,end,k-1,vec1),onemaxi+maxisum(front,end-1,k-1,vec1));
}

void solve()
{
    ll n,x;cin>>n>>x;
    vll vec1;
    forin(n,vec1);
    dp.assign(n+1, vector<ll>(n+1, -1));
    sort(all(vec1));
    ll sum=accumulate(all(vec1),(ll)0);
    cout<<sum-maxisum(0,n-1,x,vec1)<<endl;
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}