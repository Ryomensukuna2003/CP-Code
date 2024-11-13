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

void solve()
{
    ll n,m;cin>>n>>m;
    vector<pair<ll,ll>>vec1;
    rep(i,0,n){
        ll x;cin>>x;
        vec1.push_back({i+1,x});
    }
    vector<pair<ll,ll>>graph;
    rep(i,0,m){
        ll x,y;cin>>x>>y;
        graph.push_back({vec1[x-1].second,vec1[y-1].second});
    }
    ll ans=0;
    rep(i,0,m){
        ans+=min(graph[i].first,graph[i].second);
        // cout<<graph[i].first<<" "<<graph[i].second<<endl;
    }
    cout<<ans<<endl;
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