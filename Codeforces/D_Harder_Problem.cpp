#include <bits/stdc++.h>
using namespace std;

#define vll vector<long long int>
#define ll long long
#define pb push_back
const ll M = 1e9 + 7;
const ll N = 1e5 + 5;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)

void solve() {
    ll n; cin >> n;
    vll vec1;
    set<ll> unused;
    map<ll, bool> m1;

    for (int i = 1; i <= n; i++)  unused.insert(i);

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec1.pb(x);
        m1[x] = false;
        unused.erase(x); // Remove already-present element from unused
    }

    for (int i = 0; i < n; i++) {
        if (m1[vec1[i]] == false) {
            cout << vec1[i] << ' ';
            m1[vec1[i]] = true;
        } else {
            auto it = unused.begin(); // Get the smallest unused element
            cout << *it << ' ';
            unused.erase(it); // Remove it from the set
        }
    }
    cout << endl;
}

int main() {
    FAST;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
