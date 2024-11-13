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
    int n,x;cin>>n>>x;
    vll vec1,vec2,vec3;
    forin(n,vec1);
    forin(n,vec2);
    int a_count=0;
    rep(i,0,n){
        if(vec2[i]>=vec1[i]) vec3.push_back((vec2[i]-vec1[i])+1);
        else a_count++;
    }
    sort(all(vec3));
    rep(i,0,vec3.size()){
        if((x-vec3[i])<0) break;
        else{
            x-=vec3[i];
            a_count++;
        }
    }
    if(a_count>(n/2))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    // cout<<"Acount "<<a_count<<endl;
    // forout(vec3);
    // cout<<endl;
    // cout<<endl;
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