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

vector<int> dp;
vector<bool> visited;

int dfs(int node, vector<vector<int>>& adj) {
    if (visited[node]) return dp[node];
    visited[node] = true;
    int max_length = 0;
    for (int neighbor : adj[node]) {
        max_length = max(max_length, dfs(neighbor, adj) + 1);
    }
    return dp[node] = max_length;
}

void solve()
{
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    rep(i, 0, m){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }
    dp.assign(n + 1, 0);
    visited.assign(n + 1, false);
    int longest_path = 0;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            longest_path = max(longest_path, dfs(i, adj));
        }
    }
    cout << longest_path << endl;
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