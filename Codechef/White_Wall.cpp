#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<vector<char>> permutations = {
        {'R', 'G', 'B'},
        {'R', 'B', 'G'},
        {'G', 'R', 'B'},
        {'G', 'B', 'R'},
        {'B', 'R', 'G'},
        {'B', 'G', 'R'}
    };
    int ans = INT_MAX;
    for (auto &perm : permutations) {
        int changes = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] != perm[i % 3]) {
                ++changes;
            }
        }
        ans = min(ans, changes);
    }
    cout << ans << endl;
}

int main() {
    FAST;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
