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


// Calculate every line of slope and insert it into set ensuring unique slopes only. 
void solve()
{
    int n,x0,y0;
    cin>>n>>x0>>y0;
    set<double>s;
    rep(i,0,n){
        int x,y;
        cin>>x>>y;
        if(x==x0){
            s.insert(1e9);
        }
        else{
            s.insert((y-y0)*1.0/(x-x0));
        }
    }
    cout<<s.size()<<endl;

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