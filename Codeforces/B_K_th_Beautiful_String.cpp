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
#define rep(i, l, r) for (auto(i) = (l); (i) < (r); (i)++)

void solve()
{
    int n,x;cin>>n>>x;
    int first=1,second=0;
    for(int i=0;i<n && x>1;i++){
        first++;
        x--;
        while(second+1!=first && x>1){
            second++;
            x--;
        }
        if(x>1 && second+1==first)second=0;
    }
    rep(i,0,n){
        if(i==(n-first)-1 || i==(n-second)-1)cout<<'b';
        else cout<<"a";
    }
    cout<<endl;
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