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
    vll vec1;forin(n,vec1);
    map<int, int> mp;
    int left = 0, right=0;
    int ans = right-left+1;
    for(int i=0;i<n;i++){
        if(mp.find(vec1[i])!=mp.end()){
            int index = mp[vec1[i]];
            if(index<left){
                mp[vec1[i]]=i;
                right = i;
                ans = max(ans, right-left+1);
            } else {
              left = mp[vec1[i]]+1;
              mp[vec1[i]]=i;
              if(left<right) right=left;
              ans = max(ans, right-left+1);
            }


        }else {
            mp[vec1[i]]=i;
            right = i;
            ans = max(ans, right-left+1);
        }
    }
    cout<<ans<<endl;
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