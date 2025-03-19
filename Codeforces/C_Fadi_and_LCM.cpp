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

ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}

void solve()
{
    ll n;cin>>n;
    ll limit=sqrt(n);
    pair<ll,ll>p1={1,n};
    ll max1=INT_MAX;
    for(ll i=1;i<=limit;i++){
        if(n % i == 0 && lcm(i, n / i) == n){
            p1={i,n/i};
        }
    }
    cout<<p1.first<<" "<<p1.second<<endl;
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