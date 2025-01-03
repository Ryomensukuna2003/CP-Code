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
    multiset<int>s1;
    vll vec1;
    rep(i,0,n){
        int x;cin>>x;
        s1.insert(x);
    }
    forin(m,vec1);
    rep(i,0,m){
        auto it=s1.upper_bound(vec1[i]);
        if (it == s1.begin()) {
			cout << -1 << "\n";
		} else {
			cout << *(--it) << "\n";
			s1.erase(it);
		}
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