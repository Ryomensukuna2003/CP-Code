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
    ll n,m;cin>>n>>m;
    string s;cin>>s;
    vector<vector<ll>>vec1;
    rep(i,0,n){
        vll temp;
        rep(j,0,m){
            ll x;cin>>x;
            temp.pb(x);
        }
        vec1.push_back(temp);
    }
    ll pos=0,x=0,y=0;
    for(auto c : s){
        ll sum=0;
        if(c=='D'){
            rep(j,0,m){
                sum+=vec1[x][j];
            }
            vec1[x][y]=(-sum);
            x++;
        }
        else{
            rep(i,0,n){
                sum+=vec1[i][y];
            }
            vec1[x][y]=(-sum);
            y++;
        }
    }
    rep(i, 0, n - 1) vec1[n - 1][m - 1] -= vec1[i][m - 1];
    
    for(auto x:vec1){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
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