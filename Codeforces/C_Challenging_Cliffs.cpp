// Here main observation is to find mountains with min abs diff.
// After that you have to make sure that mountains are increasing and if done optimally as in sol there will be only one drop
// Example 1 4 7 9 13 17  -  7 and 9 have samllest min diff
// ans - 7 13 17 1 4 9
//               ^
//              drop



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
    int n;cin>>n;
    vll vec1;forin(n,vec1);

    sort(all(vec1));
    if(n==2){
        cout<<vec1[0]<<" "<<vec1[1]<<"\n";
        return;
    }
    int smallest_diff=INT_MAX,smallest_diff_pos=0;
    rep(i,0,n-1){
        if(abs(vec1[i]-vec1[i+1])<smallest_diff){
            smallest_diff=abs(vec1[i]-vec1[i+1]);
            smallest_diff_pos=i;
        }
    }

    vll big,small;

    rep(i,smallest_diff_pos+2,n){
        big.push_back(vec1[i]);
    }
    rep(i,0,smallest_diff_pos){
        small.push_back(vec1[i]);
    }
    
    cout<<vec1[smallest_diff_pos]<<" ";
    for(auto x:big)cout<<x<<" ";
    for(auto x:small)cout<<x<<" ";
    cout<<vec1[smallest_diff_pos+1]<<endl;
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}