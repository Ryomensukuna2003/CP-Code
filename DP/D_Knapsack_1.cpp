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
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

vector<vector<ll>> dp;

ll solve(ll index, ll weight, vector<pair<ll,ll>>&vec1){
    // base
    if(weight==0 || index==vec1.size()) return 0;
    if(dp[index][weight]!=-1)return dp[index][weight];
    ll nt = solve(index + 1,weight,vec1);
    ll cur_wt = vec1[index].first,cur_val = vec1[index].second,tk = 0;
    if(weight >= cur_wt){
        tk = cur_val + solve(index+1,weight - cur_wt,vec1);
    }
    return dp[index][weight]=max(tk,nt);
}

void solve()
{
    ll n,x;cin>>n>>x;
    dp.resize(n + 1, vector<ll>(x + 1, -1));
    vector<pair<ll,ll>>vec1;
    rep(i,0,n){
        ll x,y;cin>>x>>y;
        vec1.pb({x,y});
    }
    ll ans =  solve(0,x,vec1);
    cout << ans << endl;

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