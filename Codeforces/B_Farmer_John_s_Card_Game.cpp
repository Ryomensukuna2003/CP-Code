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
    vector<pair<vector<ll>,int>>vec1;
    rep(i,0,n){
        vll temp;
        rep(j,0,m){
            int x;cin>>x;
            temp.pb(x);
        }
        sort(all(temp));
        vec1.pb({temp,i+1});
    }
    sort(all(vec1));
    bool exist=true;
    rep(i,0,m){
        vll temp;
        rep(j,0,n){
            temp.push_back(vec1[j].first[i]);
        }
        if(!is_sorted(all(temp))){
            exist=false;
            break;
        }
    }
    if(exist){
        for(auto x:vec1){
            cout<<x.second<<" ";
        }
        cout<<endl;
    }
    else cout<<-1<<endl;
}

int main(){
    FAST;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}