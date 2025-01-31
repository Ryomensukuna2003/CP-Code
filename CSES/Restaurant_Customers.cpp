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
    vll incoming,outgoing;
    rep(i,0,n){
        int x,y;cin>>x>>y;
        incoming.push_back(x);
        outgoing.push_back(y);
    }
    sort(all(incoming));
    sort(all(outgoing));
    int customers=0,max_customers=0;
    int i=0,j=0;
    while(i<n && j<n){
        if(i<n && incoming[i]<=outgoing[j]){
            customers++;
            i++;
        }
        else if(j<n && incoming[i]>outgoing[j]){
            customers--;
            j++;
        }
        max_customers=max(customers,max_customers);
    }cout<<max_customers<<endl;
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