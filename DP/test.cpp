#include <bits/stdc++.h>
using namespace std;

//                                「本 物 の 柔 術 を 見 せ て や る」

#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
const ll M = 1e9 + 7;
const ll N = 1e5 + 4;
const ll inf = 2e18;
#define all(x)   (x).begin(), (x).end()
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define forin(x,y) for(auto i=0;i<x;i++){int x;cin>>x;y.pb(x);}
#define forout(x)  for(auto y:x){cout<<y<<' ';}
#define value_sort(v) sort(all(v),[](auto &l,auto &r){return l.second<r.second;});
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

int dp[101][N];

ll solve_recursive(vector<ll>&vec1, ll sum_left, int index){
    // check
    if(sum_left == 0) return 1;
    // base
    if(index >= vec1.size() || sum_left <0) return 0;
    // Memo
    if(dp[index][sum_left]!=-1) return dp[index][sum_left];
    // choice
    return dp[index][sum_left]= (solve_recursive(vec1, sum_left - vec1[index], index + 1) || solve_recursive(vec1, sum_left, index + 1));
}

void solve()
{
    memset(dp,-1,sizeof(dp));
    ll n,q;cin>>n>>q;
    vll vec1,target;
    forin(n,vec1);
    forin(q,target);
    for(auto x:target){
        solve_recursive(vec1, x, 0)==0? cout<<-1<<endl : cout<<1<<endl; 
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