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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int count1s1=count(all(s1),'1');
    int count0s1=count(all(s1),'0');
    
    int count1s2=count(all(s2),'1');
    int count0s2=count(all(s2),'0');

    int count1s3=count(all(s3),'1');
    int count0s3=count(all(s3),'0');
    if(count1s1+count1s2+count1s3==0 || count0s1+count0s2+count0s3==0){
        cout<<0<<endl;
        return;
    }
    // Ans should be in 2:1 format
    ll totalcount1=count1s1+count1s2+count1s3;
    ll totalcount0=count0s1+count0s2+count0s3;
    // Check ratio
    if(totalcount1*2==totalcount0 || totalcount0*2==totalcount1){
        if(totalcount1<totalcount0){
            cout<<n-max({count1s1,count1s2,count1s3})<<endl;
        }
        else{
            cout<<n-max({count0s1,count0s2,count0s3})<<endl;
        }
    }
    else{
        cout<<-1<<endl;
        return;
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