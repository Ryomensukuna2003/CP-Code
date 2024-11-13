// Iterative


// #include <bits/stdc++.h>
// using namespace std;

// //                                「本 物 の 柔 術 を 見 せ て や る」

// #define vll      vector<long long int>
// #define ll       long long
// #define pb       push_back
// const ll M = 1e9 + 7;
// const ll N = 1e5 + 5;
// const ll inf = 2e18;
// #define all(x)   (x).begin(), (x).end()
// #define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
// #define forin(x,y) for(auto i=0;i<x;i++){int x;cin>>x;y.pb(x);}
// #define forout(x)  for(auto y:x){cout<<y<<' ';}
// #define value_sort(v) sort(all(v),[](auto &l,auto &r){return l.second<r.second;});
// #define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

// void solve()
// {
//     ll n;cin>>n;
//     vector<vector<ll>>dp(n, vector<ll>(3));
//     rep(i,0,n){
//         int a,b,c;cin>>a>>b>>c;
//         dp[i]={a,b,c};
//     }
//     for(int i=1;i<n;i++){
//         dp[i][0]=max(dp[i-1][1],dp[i-1][2])+dp[i][0];
//         dp[i][1]=max(dp[i-1][2],dp[i-1][0])+dp[i][1];
//         dp[i][2]=max(dp[i-1][0],dp[i-1][1])+dp[i][2];
//     }
//     vll temp=dp[n-1];
//     cout<<*max_element(all(temp));

// }

// int main(){
//     FAST;
//     ll t=1;
//     //cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }



// Recursive

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
    ll n;cin>>n;
    vector<vector<ll>>dp(n, vector<ll>(3));
    rep(i,0,n){
        int a,b,c;cin>>a>>b>>c;
        dp[i]={a,b,c};
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