#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<ll, bool>> vec1(n + 1, {0, false}); // Reset vector for each test case
    vector<int> a(m), q(k);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> q[i];
    }
    for (int i = 0; i < m; i++) {
        vec1[a[i] - 1] = {a[i], false};
    }
    for (int i = 0; i < k; i++) {
        vec1[q[i] - 1].second = true;
    }
    if (k < n - 1) {
        for (int i = 0; i < m; i++) {
            cout << 0;
        }
        cout << endl;
        return;
    }

    if (m == k) {
        rep(i, 0, n) cout << 1;
        cout << endl;
        return;
    }

    if (k == m - 1) {
        for (int i = 0; i < m; i++) {
            if (vec1[a[i] - 1].second == false) {
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
        return;
    }

    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
