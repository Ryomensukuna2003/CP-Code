

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

string convertToString(vll& arr) {
    string res = "";
    for(auto x : arr) {
        // Add leading zeros 20 characters long
        string num = to_string(x);
        string padding(20 - num.length(), '0');
        res += padding + num;
    }
    return res;
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    vll a(n), b(m);
    rep(i,0,n) cin >> a[i];
    rep(i,0,m) cin >> b[i];
    
    // Find minimum rotation of B using string comparison
    string min_b_str = convertToString(b);
    vll min_b = b;
    for(int i = 0; i < m; i++) {
        rotate(b.begin(), b.begin() + 1, b.end());
        string curr_b_str = convertToString(b);
        if(curr_b_str < min_b_str) {
            min_b_str = curr_b_str;
            min_b = b;
        }
    }
    
    bool changed;
    do {
        changed = false;
        for(int i = 0; i <= n - m; i++) {
            // Convert current subarray to string
            vll curr_sub(a.begin() + i, a.begin() + i + m);
            string curr_sub_str = convertToString(curr_sub);
            
            if(curr_sub_str > min_b_str) {
                // Replace the subarray with min_b
                copy(min_b.begin(), min_b.end(), a.begin() + i);
                changed = true;
                break;
            }
        }
    } while(changed);
    
    // Output result
    forout(a);
}

int main() {
    FAST;
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

