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


bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
}

void solve() {
    string s;cin >> s;
    int q;cin >> q;
    set<int> found;
    if (s.length() >= 4) {
        for (int i=0;i<=s.length()-4;i++) if(s.substr(i,4)=="1100") found.insert(i);
    }
    while(q--) {
        int pos;char val; cin >> pos >> val;
        pos--;
        for (int i=max(0, pos-3);i<=min((int)s.length()-4,pos);i++) {
            if(s.substr(i, 4) == "1100")  found.erase(i);
        }
        s[pos] = val;
        for (int i = max(0,pos-3);i<=min((int)s.length()-4,pos);i++) {
            if(s.substr(i, 4) == "1100")  found.insert(i);
        }
        cout<<(!found.empty() ? "YES\n" : "NO\n");
    }
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