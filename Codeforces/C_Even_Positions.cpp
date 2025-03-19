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

int calculateCost(string s){
    stack<pair<char,int>>s1;
    ll ans=0;
    rep(i,0,s.size()){
        if(s[i]=='(') s1.push({s[i],i+1});
        else if(!s1.empty()){
            ans+=(i+1)-s1.top().second;
            s1.pop();
        }
    }
    return ans;
}

// Calculate remaining left and right brackets
// We have to fill at even places then start with left and if prev index is x then curr index will be counter part of it
// Calculate sum with stack<pair<char,int>>

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int left=(n/2)-count(all(s),'(');
    int right=(n/2)-count(all(s),')');
    s[0]='(';
    left--;
    rep(i,1,n){
        if(s[i]=='_'){
            if(s[i-1]=='(')s[i]=')';
            else s[i]='(';
        }
    }
    cout<<calculateCost(s)<<endl;
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
