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
    ll n,k;cin>>n>>k;
    map<ll,ll>m1;
    rep(i,0,k){
        ll a,b;cin>>a>>b;
        m1[a]+=b;
    }
    vector<pair<ll,ll>>vec1;

    for(auto x:m1){
        vec1.push_back({x.first,x.second});
    }
    value_sort(vec1);
    reverse(all(vec1));
    ll ans=0;
    rep(i,0,vec1.size()){
        if(n==0)break;
        ans+=vec1[i].second;
        n--;
    }
    cout<<ans<<endl;
}

int main(){
    FAST;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}