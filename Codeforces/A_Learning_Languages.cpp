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

vector<vector<ll>>vec1;
vector<bool> visited(N+1,0);
 
void dfs(int vertex, vector<vector<ll>>& graph){
    visited[vertex]=true;
    // cout<<vertex<<" ";
    for(auto child:graph[vertex]){
        if(!visited[child]){
            dfs(child,graph);
        }
    }
}

void solve()
{
    int n,m;cin>>n>>m;
    bool allempty=true;
    rep(i,0,n){
        int x;cin>>x;
        if(x)allempty=false;
        vll temp;
        forin(x,temp);
        vec1.pb(temp);
    }
    vector<vector<ll>> graph(n+1);
    rep(i, 0, n) {
        for (int j = 0; j < vec1[i].size(); j++) {
            int value = vec1[i][j];
            rep(k, 0, n) {
                if (i != k && find(all(vec1[k]), value) != vec1[k].end()) {
                    graph[i+1].push_back(k+1);
                }
            }
        }
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i,graph);
            count++;
        }
    }
    if(allempty)cout<<n<<endl;
    else cout<<count-1<<endl;
    
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