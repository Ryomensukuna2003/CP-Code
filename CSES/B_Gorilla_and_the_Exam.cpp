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
    vector<pair<ll,ll>>vec1;
    rep(i,0,n){
        ll x;cin>>x;
        m1[x]++;
    }

    for(auto x:m1){
        vec1.push_back({x.first,x.second});
    }
    value_sort(vec1);
    rep(i,0,n){
        if(k>0 && vec1[i].second > 0){
            ll min_val = min(k, (ll)vec1[i].second);
            vec1[i].second -= min_val;
            k -= min_val;
        }
        else break;
    }
    
    ll count=0;
    for(auto x:vec1){
        if(x.second>0)count++;
        // cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<max((ll)1,count)<<endl;
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