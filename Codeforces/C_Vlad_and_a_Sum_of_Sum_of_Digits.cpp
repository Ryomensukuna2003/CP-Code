// Here time limit is bitch so precompute uptill 2*N and just sum uptill given n
// Time - nlogn
// Space - 2*N

// Made mistake of storing sum of digits but it should have sumofdigits with prefix sum avoiding extra steps


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


vll vec1(200000);

ll sumOfDigits(ll x){
    ll sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}

void precompute(vll &vec1){
    for(int i=1;i<=200000;i++){
        vec1[i]=(sumOfDigits(i));
    }
    // optimisation 
    for(int i=2;i<=200000;i++){
        vec1[i]=vec1[i-1]+vec1[i];
    }
}

void solve()
{
    int n;cin>>n;
    cout<<vec1[n]<<endl;
}

int main() {
    FAST;
    precompute(vec1);
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}