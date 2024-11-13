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
    vll vec1;
    forin(n,vec1);
    ll sum=0;
    rep(i,0,m){
        ll choice;cin>>choice;
        if(choice==1){
            ll v,x;cin>>v>>x;
            vec1[v-1]=(x-sum);
        }
        else if(choice==2){
            ll y;cin>>y;
            sum+=y;
        }
        else {
            ll q;cin>>q;
            cout<<vec1[q-1]+sum<<endl;
        }
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