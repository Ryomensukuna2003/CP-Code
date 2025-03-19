#include <bits/stdc++.h>
using namespace std;

//                                「本 物 の 柔 術 を 見 せ て や る」

using ll = long long;
using vll = vector<ll>;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl "\n"

constexpr ll M = 1e9 + 7;
constexpr ll N = 1e5 + 5;
constexpr ll inf = 2e18;

#define FAST ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i, l, r) for (ll i = (l); i < (r); i++)
#define rev(i, r, l) for (ll i = (r); i >= (l); i--)
#define forin(n, v) for (ll i = 0; i < (n); i++) { ll x; cin >> x; v.pb(x); }
#define forout(v) for (const auto& y : (v)) { cout << y << ' '; } cout << '\n';
#define value_sort(v) sort(all(v), [](const auto &l, const auto &r) { return l.second < r.second; });

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve()
{
    string s;cin>>s;
    ll count1s=count(all(s),'1');
    if(count1s==0)cout<<0<<endl;
    else if(count1s==s.size())cout<<count1s*count1s<<endl;
    else{
        s+=s;
        ll oneCount=1,maxOneCount=0;
        rep(i,0,s.size()-1){
            if(s[i]=='1' && s[i+1]=='1')oneCount++;
            else oneCount=1;
            maxOneCount=max(oneCount,maxOneCount);
        }
        ll ans=1;
        rep(i,1,maxOneCount+1){
            ans=max(ans,((maxOneCount+1)-i)*i);
        }
        cout<<ans<<endl;
    }

}


int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}