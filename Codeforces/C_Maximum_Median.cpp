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

// void solve() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> vec1(n);
//     for (auto &v : vec1) cin >> v;
//     sort(all(vec1));
//     int start = n / 2;
//     int curr = vec1[start];
//     int count = 1; 
//     rep(i, start + 1, n) {
//         int diff = vec1[i] - curr;
//         if (x >= count * diff) {
//             x -= count * diff;
//             curr = vec1[i];
//         } else {
//             curr += x / count;
//             cout << curr << endl;
//             return;
//         }
//         count++;
//     }
//     cout << curr + x / count << endl;
// }

void solve() {
    ll n, k;
    cin >> n >> k;
    multiset<ll> s;
    vll a(n);
    for (auto &x : a) {
        cin >> x;
        s.insert(x);
    }
    auto it = next(s.begin(), n / 2);
    ll count = 1; 
    while (next(it) != s.end() && k > 0) {
        auto next_it = next(it);
        ll diff = *next_it - *it;
        if (k >= count * diff) {
            k -= count * diff;
            it = next_it;
        } else {
            cout << *it + k / count << endl;
            return;
        }
        count++;
    }

    cout << *it + k / count << endl;
}


int main(){
    FAST;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}