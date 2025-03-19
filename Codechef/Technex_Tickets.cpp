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

vll vec1(2000, 0);

void precompute(vll &vec1){
    vec1[1]=1;
    vec1[3]=1;
    int second=2;
    for(int i=2;i<=2000;i++){
        if(vec1[i]==0){
            vec1[i]=second;
            if(i+3 <= 2000) {
                vec1[i+3]=second;
            }
            second++;
        }
    }
}

void solve()
{
    int n;cin>>n;
    cout<<vec1[n]<<endl;
}

int main() {
    FAST;
    ll t = 1;
    precompute(vec1);
    cin >> t;
    while (t--) {
        solve();
    }
}