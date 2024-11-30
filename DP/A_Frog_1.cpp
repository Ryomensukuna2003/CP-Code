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
//     int n;cin>>n;
//     vll vec1;
//     forin(n,vec1);
//     vll dp(n,0);
//     dp[0]=0; // First stone is 0
//     dp[1]=abs(vec1[1]-vec1[0]); // Second stone hardcode
//     rep(i,2,n){
//         int first_step=abs(vec1[i]-vec1[i-1])+dp[i-1];
//         int second_step=abs(vec1[i]-vec1[i-2])+dp[i-2];
//         dp[i]=min(first_step,second_step);
//     }
//     cout<<dp[n-1]<<endl;

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

// Recursive approach

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

ll solve_recursive(int index, vll& vec1, vector<ll>& dp) {
    if(index == 0) return 0;
    if(index == 1) return abs(vec1[1] - vec1[0]);
    if(dp[index] != -1) return dp[index];

    ll first_step = abs(vec1[index] - vec1[index-1]) + solve_recursive(index-1, vec1, dp);    
    ll second_step = abs(vec1[index] - vec1[index-2]) + solve_recursive(index-2, vec1, dp);
    return dp[index] = min(first_step, second_step);
}

void solve() {
    int n;
    cin >> n;
    vll vec1(n);
    for(int i = 0; i < n; i++) cin >> vec1[i];
    vector<ll> dp(n, -1);
    cout << solve_recursive(n-1, vec1, dp) << endl;
    for(auto x:dp) cout<<x<<" ";
    cout<<endl;
}

int main(){
    FAST;
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}