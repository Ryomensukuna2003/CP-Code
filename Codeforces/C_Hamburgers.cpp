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
    string s1;cin>>s1;
    ll b,s,c;cin>>b>>s>>c;
    ll price_b,price_s,price_c;cin>>price_b>>price_s>>price_c;
    ll x;cin>>x;
    ll amount_has=b+c+s;
    
    int need_b,need_s,need_c;
    for(auto x:s1){
        if(x=='B')need_b++;
        if(x=='S')need_s++;
        if(x=='C')need_c++;
    }
    ll amount_neededforbread =need_b+need_c+need_s;
    ll ans=0;
    if((amount_neededforbread%amount_has)<=x){
        x-=amount_neededforbread%amount_has;
        ans+=ceil(amount_neededforbread*1.0/amount_has);
    }
    ans+=x/amount_neededforbread;
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