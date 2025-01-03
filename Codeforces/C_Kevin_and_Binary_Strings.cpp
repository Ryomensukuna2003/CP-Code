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
    string s;cin >> s;
    ll n = s.size();
    ll p1 = 0;
    while(p1 < n && s[p1] == '1') {
        p1++;
    }
    if(p1 == n) {
        cout << "1 " << n << " 1 1\n";
        return;
    }
    ll len = n-p1;
    vector<pair<string,pair<ll,ll>>> v;
    for(ll i = 0; i < p1; i++) {
        string ans;
        for(ll j = 0; j < len; j++) {
            if(s[j + p1] == s[j+i]) {
                ans += '0';
            }
            else{
                ans += '1';
            }
        }
        v.push_back(make_pair(ans,make_pair(i,i+len-1)));
    }
    auto it = *max_element(v.begin(), v.end());
    cout << "1 " << n << ' ' << it.second.first +1 << ' ' << it.second.second +1 << '\n';
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