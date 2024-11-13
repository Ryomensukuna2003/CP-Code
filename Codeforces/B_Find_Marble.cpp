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
    ll n,initial,final;cin>>n>>initial>>final;
    vll vec1;
    forin(n,vec1);
    vll vis(n+1,0);
    ll count=0;
    if(initial==final){
        cout<<0<<endl;
        return;
    }
    while(n--){
        count++;
        if(vec1[initial-1]==final && !vis[initial-1]){
            cout<<count<<endl;
            return;
        }
        else{
            vis[initial-1]=1;
            initial=vec1[initial-1];

        }
    }
    cout<<"-1"<<endl;
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