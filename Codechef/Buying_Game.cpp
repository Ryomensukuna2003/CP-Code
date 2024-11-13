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
    int n;cin>>n;
    vll regular,promo;
    forin(n,regular);
    forin(n,promo);
    vll possibilites;
    rep(i,0,n){
        if(promo[i]<=regular[i]){
            possibilites.pb(regular[i]);
        }
    }
    forout(possibilites);
    int ans=0;
    rep(i,0,n){
        if(promo[i]>regular[i]){
            if(possibilites.size()>0){
                ans+=possibilites[possibilites.size()-1];
                possibilites.pop_back();
            }
        }
        else{
            ans+=promo[i];
        }
    }
    rep(i,0,possibilites.size()-1){
        ans+=possibilites[i];
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