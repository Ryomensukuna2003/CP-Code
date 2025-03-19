#include <bits/stdc++.h>
using namespace std;

//                                「本 物 の 柔 術 を 見 せ て や る」

#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
const ll M = 1e9 + 7;
const ll N = 1e5 + 5;
const ll inf = 2e18;
#define all(x)   (x).begin(), (x).end()
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define forin(x,y) for(auto i=0;i<x;i++){int x;cin>>x;y.pb(x);}
#define forout(x)  for(auto y:x){cout<<y<<' ';}
#define value_sort(v) sort(all(v),[](auto &l,auto &r){return l.second<r.second;});
#define rep(i, l, r) for (ll i = (l); i < (r); i++)

ll solve(size_t pos, vll vec1, vll dp, int k){
    if(pos >= vec1.size() - 1) return 0;
    if(dp[pos] != -1) return dp[pos];
    ll mini = inf;
    rep(i, 1, k + 1){
        if((pos + i) < vec1.size()) mini = min(mini, abs(vec1[pos] - vec1[pos + i]) + solve(pos + i, vec1, dp, k));
    }
    return dp[pos] = mini;
}

void solve()
{
    int n,k;cin>>n>>k;
    vll vec1;forin(n,vec1);
    vll dp(n, -1);
    cout<<solve(0,vec1,dp,k);
}

int main(){
    FAST;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}