#include <bits/stdc++.h>
using namespace std;

//                                「本 物 の 柔 術 を 見 せ て や る」

#define vll vector<long long int>
#define ll long long
#define pb push_back
const ll M = 1e9 + 7;
const ll N = 1e5 + 5;
const ll inf = 2e18;
#define all(x) (x).begin(), (x).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL)
#define forin(x, y)              \
    for (auto i = 0; i < x; i++) \
    {                            \
        int x;                   \
        cin >> x;                \
        y.pb(x);                 \
    }
#define forout(x)         \
    for (auto y : x)      \
    {                     \
        cout << y << ' '; \
    }
#define value_sort(v) sort(all(v), [](auto &l, auto &r) { return l.second < r.second; });
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)
const long long INF = 1e18;

void solve()
{
    int n;cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i]; 
    sort(a.begin(), a.end());
    if(n == 1){
        cout << "1" << endl;
        return;
    }
    if(n % 2 == 0){
        long long ans = a[1] - a[0];
        for(int i = 2; i + 1 < n; i += 2){
            ans = max(ans, a[i+1] - a[i]);
        }
        cout << ans << endl;
    } 
    else {
        long long ans = INF;
        for(int i = 0; i < n; i++){
            vector<long long> v;
            for(int j = 0; j < n; j++){
                if(j == i) continue;
                v.push_back(a[j]);
            }
            long long Max=v[1]-v[0];
            for(int j=2;j+1<n-1;j+=2){
                Max=max(Max,v[j+1]-v[j]);
            }
            ans=min(ans, Max);
        }
        cout<<ans<<endl;
    }
}

int main()
{
    FAST;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}