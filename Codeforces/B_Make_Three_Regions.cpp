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
#define forin(n, v) for (ll i = 0; i < (n); i++) { char x; cin >> x; v.pb(x); }
#define forout(v) for (const auto& y : (v)) { cout << y << ' '; } cout << '\n';
#define value_sort(v) sort(all(v), [](const auto &l, const auto &r) { return l.second < r.second; });

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

// Pattern Based Question

void solve()
{
    int n;cin>>n;
    vector<vector<char>>vec1;
    rep(i,0,2){
        vector<char> temp;forin(n,temp);
        vec1.push_back(temp);
    }
    ll ans=0;
    // Upper row
    rep(i,1,n-1){
        if((vec1[0][i-1]!='x' && vec1[0][i]=='.' && vec1[0][i+1]!='x') && // for upper validation
            vec1[1][i-1]=='x' && vec1[1][i]=='.' && vec1[1][i+1]=='x') ans++; // for lower validation
        if((vec1[1][i-1]!='x' && vec1[1][i]=='.' && vec1[1][i+1]!='x') &&
            vec1[0][i-1]=='x' && vec1[0][i]=='.' &&vec1[0][i+1]=='x') ans++;
    }
    cout<<ans<<endl;

}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}