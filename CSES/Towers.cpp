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
    vll vec1;
    forin(n,vec1);
    multiset<int>s1;
    int count=0;
    rep(i,0,n){
        // Find the largest tower
        auto it = s1.upper_bound(vec1[i]);
        // If NOT found then count++;
        if(it == s1.end()){
            count++;
        } else {
            s1.erase(it); // Update the new height
        }
        s1.insert(vec1[i]);
    }
    cout<<count<<endl;
}

int main(){
    FAST;
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}