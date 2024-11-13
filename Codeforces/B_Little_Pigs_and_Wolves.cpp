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
    int n,m;cin>>n>>m;
    vector<vector<char>> grid(n+2, vector<char>(m+2, 0));
    rep(i,1,n+1){
        rep(j,1,m+1){
            char c;cin>>c;
            grid[i][j]=c;
        }
    }
    ll ans=0;
    rep(i,1,n+1){
        rep(j,1,m+1){
            if(grid[i][j]=='W'){
                if(grid[i+1][j]=='P' || grid[i-1][j]=='P' || grid[i][j+1]=='P' || grid[i][j-1]=='P') ans++;
            }
        }
        cout<<endl;
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