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
    vll vec1(n+1,0),vec2(n+1,0),pos(n+1,0);
    rep(i,1,n+1){
        ll x;cin>>x;
        vec1[i]=x;
        pos[vec1[i]]=i;
    }
    // Here Pos array is used to store pos of elements of vec1 for O(1) Lookup instead of O(n);
    // ex - for this vec1 - 1 3 2 4 and vec2 - 4 2 3 1
    //                      Pos[1]=1;
    //                      Pos[3]=2;
    //                      Pos[2]=3;
    //                      Pos[4]=4;
    // and lets say we have to find pos of 2 then we can pos[2] which will give 3
    // Now the pos is sorted we can focus on offset part. We can calculate offset of every element and taking max of most frequent offset is ans
    rep(i,1,n+1){
        ll x;cin>>x;
        vec2[i]=x;
    }
    map<ll,ll>m1;
    rep(i,1,n+1){
        ll offset=pos[vec2[i]]-i;
        if(offset < 0) offset += n;
        m1[offset]++;
    }
    ll ans=0;
    for(auto x:m1){
        ans = max(ans, x.second);
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