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
    ll n,q,ans=0;cin>>n>>q;
    vll vec1,vec2(n+1);forin(n,vec1);
    rep(i,0,n) vec2[vec1[i]]=i;
    rep(i,0,n){
        cout<<vec1[i]<<" "<<vec2[i]<<endl;
    }
    rep(i,0,n) if (vec2[i + 1] < vec2[i])ans++;    
    while(q--){
        int x,y;cin>>x>>y;
        swap(vec1[x],vec1[y]);
    }
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