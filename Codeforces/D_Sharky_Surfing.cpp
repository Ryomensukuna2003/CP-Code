#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<pair<int, int>> hurdle, power;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        hurdle.push_back({x, y});
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        power.push_back({x, y});
    }

    sort(hurdle.begin(), hurdle.end());
    sort(power.begin(), power.end());

    priority_queue<int> pq;
    int count = 0;
    int pos = 0;

    for (int i = 0; i < n; i++) {
        while (pos < m && power[pos].first < hurdle[i].first) {
            pq.push(power[pos].second);
            pos++;
        }

        int hurdle_len = (hurdle[i].second - hurdle[i].first) + 1;

        while (!pq.empty() && hurdle_len > 0) {
            int top_power = pq.top();
            pq.pop();

            if (top_power >= hurdle_len) {
                top_power -= hurdle_len;
                hurdle_len = 0;
                if (top_power > 0) pq.push(top_power);
                count++;
            } else {
                hurdle_len -= top_power;
                count++;
            }
        }

        if (hurdle_len > 0) {
            cout << -1 << endl;
            return;
        }
    }

    cout << count << endl;
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
