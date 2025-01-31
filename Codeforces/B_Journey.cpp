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
    ll n,a,b,c;cin>>n>>a>>b>>c;
    ll ans=0,sum=a+b+c;
    if(n<=sum){
        if(n<=a)cout<<1<<endl;
        else if(n<=a+b)cout<<2<<endl;
        else cout<<3<<endl;
    }
    else{
        ans+=(n/sum)*3;
        n=n%sum;
        if(n==0)cout<<ans<<endl;
        else if(n<=a)cout<<ans+1<<endl;
        else if(n<=a+b)cout<<ans+2<<endl;
        else cout<<ans+3<<endl;
    }
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