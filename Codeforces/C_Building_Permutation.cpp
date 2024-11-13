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
    ll n;cin>>n;
    vll vec1;
    ll ans=0;
    rep(i,0,n){
        ll x;cin>>x;
        if(x<0){
            ans+=abs(x)+1;
            vec1.push_back(1);
        }
        else vec1.push_back(x);
    }
    sort(all(vec1));
    reverse(all(vec1));
    ll starting=n;
    rep(i,0,n){
        if(vec1[i]!=starting){
            ans+=abs(starting-vec1[i]);
        }
        starting--;
    }
    // cout<<endl;
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