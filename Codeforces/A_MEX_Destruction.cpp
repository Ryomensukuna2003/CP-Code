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

void solve() {
    ll n;cin >> n;
    vll vec1;forin(n,vec1);
    ll bc = 0;
    bool istrue = false;
    for (ll i = 0; i < n; i++) {
        if (vec1[i] != 0 && !istrue) {
            bc++;
            istrue = true;
        } else if (vec1[i] == 0) istrue = false;
    }
    if (bc == 0) cout << 0 << endl; 
    else if (bc == 1) cout << 1 << endl; 
    else cout << 2 << endl; 
    
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