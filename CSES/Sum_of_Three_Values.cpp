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
    int n,target;cin>>n>>target;
    vector<pair<int,int>>vec1;
    rep(i,0,n){
        int x;cin>>x;
        vec1.push_back({x,i+1});
    }
    sort(all(vec1));
    rep(i,0,n){
        rep(j,i+1,n){
            int sum=vec1[i].first+vec1[j].first;
            ll extra=target-sum;
            auto it=lower_bound(vec1.begin()+j+1,vec1.end(), make_pair(extra, 0), [](const pair<int, int>& a, const pair<int, int>& b) {
                return a.first < b.first;
            });
            if(it!=vec1.end() && it->first==extra){
                vll temp={vec1[i].second,vec1[j].second,it->second};
                sort(all(temp));
                forout(temp);
                return;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
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