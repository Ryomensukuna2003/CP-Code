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
    int n,k;cin>>n>>k;
    vll heights;forin(n,heights);
    vll dp(n,inf);
    dp[0]=0; // Hardcoding inital val
    
    // Running loop for every stone
    for(int i=1;i<n;i++){
        int min_cost=inf;
        // Caluculating every K possible moves 
        for(int j=1;j<=k;j++){
            // Checking if index is not going negative
            if(i-j>=0){
                int cost=abs(heights[i]-heights[i-j])+dp[i-j];
                min_cost=min(min_cost,cost);
            }
        }
        dp[i]=min_cost;
    }
    cout<<dp[n-1]<<endl;
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