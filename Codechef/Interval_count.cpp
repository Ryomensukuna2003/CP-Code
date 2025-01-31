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

bool prime(int val){
    if(val==1){
        return false;
    }
    for(int i=2;i*i<=val;i++){
        if(val%i==0){
            return false;
        }
    }
    return true;
}

void solve()
{
    int n,l,r;cin>>n>>l>>r;
    vll vec1;forin(n,vec1);
    int count=0;
    rep(i,l,r+1){
        if(prime(i)){
            count++;
        }
    }
    cout<<count<<endl;
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