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
    // east -> (x + 1, y).
    // west -> (x - 1, y).
    // north -> (x, y + 1). 
    // south -> (x, y - 1).
    ll n,x1,x2,y1,y2;cin>>n>>x1>>x2>>y1>>y2;
    string s;cin>>s;
    ll count=0;
    rep(i,0,n){
        count++;
        if(s[i]=='E' && abs(y1-(x1+1))<abs(y1-x1)) x1++;
        if(s[i]=='W' && abs(y1-(x1-1))<abs(y1-x1)) x1--;
        if(s[i]=='N' && abs(y2-(x2+1))<abs(y2-x2)) x2++;
        if(s[i]=='S' && abs(y2-(x2-1))<abs(y2-x2)) x2--;
        if(x1==y1 && x2==y2){
            cout<<count<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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