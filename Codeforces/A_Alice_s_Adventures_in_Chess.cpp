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
    ll n,a,b;cin>>n>>a>>b;
    string s;cin>>s;
    ll x_dir=0,y_dir=0;
    ll sum=0;
    while((x_dir < a && x_dir >= 0) || (y_dir < b && y_dir >= 0) || (x_dir > a && x_dir <= 0) || (y_dir > b && y_dir <= 0)){
        rep(i,0,n){
            if(s[i]=='E')x_dir++;
            if(s[i]=='W')x_dir--;
            if(s[i]=='N')y_dir++;
            if(s[i]=='S')y_dir--;
            if(x_dir==a && y_dir==b){
                cout<<"YES"<<endl;
                return;
            }   
            if(!(x_dir < a && x_dir >= 0) || (y_dir < b && y_dir >= 0) || (x_dir > a && x_dir <= 0) || (y_dir > b && y_dir <= 0)){
                cout<<"NO"<<endl;
                return;
            }
        }
        if((x_dir==0 && y_dir==0)){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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