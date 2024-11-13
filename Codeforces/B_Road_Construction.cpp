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
    int n,x;cin>>n>>x;
    vector<pair<int,int>>vec1;
    vector<ll>temp(n+1,1);
    rep(i,0,x){
        int a,b;cin>>a>>b;
        temp[a]=0;
        temp[b]=0;
        vec1.push_back({a,b});
    }
    int mid=0;
    for(int i=1;i<temp.size();i++){
        if(temp[i])mid=i;
    }
    cout<<n-1<<endl;
    rep(i,0,n){
        if(mid!=i+1){
            cout<<mid<<" "<<i+1<<endl;
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