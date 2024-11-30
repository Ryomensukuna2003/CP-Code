#include <bits/stdc++.h>
using namespace std;

//                                「本 物 の 柔 術 を 見 せ て や る」

#ifndef ONLINE_JUDGE
#include "../template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
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

long double dp[3000][3000]; 

long double solveCoins(int index,int head,int n,vector<long double>&vec1){
    if(index == n) return head > (n - head) ? 1 : 0;
    if(dp[index][head] >= 0) return dp[index][head];
    long double sum = 0;
    sum += vec1[index] * solveCoins(index + 1, head + 1, n, vec1);
    sum += (1 - vec1[index]) * solveCoins(index + 1, head, n, vec1);
    return dp[index][head] = sum;
}

void solve()
{
    memset(dp,-1,sizeof(dp));
    cout<<fixed<<setprecision(10);
    int n;cin>>n;
    vector<long double>vec1(n+1);
    rep(i,0,n){
        long double x;cin>>x;
        vec1[i]=x;
    }
    long double ans=solveCoins(0,0,n,vec1);
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