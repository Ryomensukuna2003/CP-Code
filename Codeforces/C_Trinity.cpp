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
    int n;cin>>n;
    vector<pair<int,int>>vec1;
    rep(i,0,n){
        int x;cin>>x;
        vec1.push_back({x,0});
    }
    sort(all(vec1));
    map<int,int>m1;
    rep(i,0,n){
        m1[vec1[i].first]++;
    }
    int pos=0;
    
    int maxi=vec1[n-1].first;
    rep(i,0,n-1){
        if(vec1[i].first==vec1[i+1].first){
            vec1[i].second=true;
            vec1[i+1].second=true;
        }
    }
    int ans=0;
    rep(i,0,n-1){
        if(m1[vec1[i].first]>1 && (vec1[i].first*2)<=maxi){
            ans++;
            m1[vec1[i].first]--;
        }
        else if(m1[vec1[i].first]<=1 && vec1[i].first+vec1[i+1].first<=maxi) ans++;
    }
    cout<<ans<<endl;
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