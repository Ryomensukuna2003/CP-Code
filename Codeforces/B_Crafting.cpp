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
    vll vec1,vec2;
    forin(n,vec1);
    forin(n,vec2);
    ll debt=0;
    rep(i,0,n){
        if(vec1[i]<vec2[i]){
            ll diff=vec2[i]-vec1[i];
            debt+=diff;
            vec1[i]+=2*diff;
        }
    }
    rep(i,0,n){
        vec1[i]-=debt;
    }
    bool ans=true;
    rep(i,0,n){
        if(vec1[i]<vec2[i]) {
            ans=false;
            break;
        }
    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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