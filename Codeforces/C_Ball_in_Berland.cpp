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

// Bipartite graph sol
// Todo Bitch ass Niggaaa
void solve()
{
    int a,b,k;cin>>a>>b>>k;
    vll temp1,temp2;
    forin(k,temp1);
    forin(k,temp2);
    vector<pair<int,int>>vec1;
    rep(i,0,k){
        vec1.push_back({temp1[i],temp2[i]});
    }
    sort(all(vec1));
    int count=0;
    rep(i,0,k){
        auto iter=lower_bound(all(vec1), make_pair(vec1[i].first + 1, vec1[i].second))-vec1.begin();


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