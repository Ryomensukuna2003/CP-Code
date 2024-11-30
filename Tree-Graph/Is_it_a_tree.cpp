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

vector<vector<ll>>vec1(N+1);
vector<bool>vis(N+1);

void dfs(int node){
    vis[node]=true;
    for(auto child:vec1[node]){
        if(!vis[child]){
            dfs(child);
        }
    }
}

void solve()
{
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        vec1[x].push_back(y);
        vec1[y].push_back(x);
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            count++;
        }
    }
    (count==1 && n-1==m)?cout<<"YES":cout<<"NO";
    cout<<endl;
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