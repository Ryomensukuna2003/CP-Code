#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long solve() {
    int n;
    long long m;
    cin >> n >> m;
    
    vector<int> flowers(n);
    for (int i = 0; i < n; i++) {
        cin >> flowers[i];
    }
    
    sort(flowers.begin(), flowers.end());
    
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + flowers[i];
    }
    
    long long max_petals = 0;
    for (int i = 0; i < n; i++) {
        int left = i, right = n;
        while (left < right) {
            int mid = left + (right - left + 1) / 2;
            long long cost = (long long)(mid - i) * flowers[mid - 1] - (prefix_sum[mid] - prefix_sum[i]);
            if (cost <= m) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        max_petals = max(max_petals, (long long)(left - i) * flowers[left - 1]);
    }
    
    return max_petals;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        cout << solve() << '\n';
    }
    
    return 0;
}