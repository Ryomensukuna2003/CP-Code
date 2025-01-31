#include <bits/stdc++.h>
using namespace std;

class SegmentTree {
private:
    vector<int> treeMax, treeMin;
    int n;

    void buildTree(const vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            treeMax[node] = arr[start];
            treeMin[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            buildTree(arr, 2 * node + 1, start, mid);
            buildTree(arr, 2 * node + 2, mid + 1, end);
            treeMax[node] = max(treeMax[2 * node + 1], treeMax[2 * node + 2]);
            treeMin[node] = min(treeMin[2 * node + 1], treeMin[2 * node + 2]);
        }
    }

    void updateTree(int node, int start, int end, int idx, int value) {
        if (start == end) {
            treeMax[node] = value;
            treeMin[node] = value;
        } else {
            int mid = (start + end) / 2;
            if (start <= idx && idx <= mid) {
                updateTree(2 * node + 1, start, mid, idx, value);
            } else {
                updateTree(2 * node + 2, mid + 1, end, idx, value);
            }
            treeMax[node] = max(treeMax[2 * node + 1], treeMax[2 * node + 2]);
            treeMin[node] = min(treeMin[2 * node + 1], treeMin[2 * node + 2]);
        }
    }

    int queryMax(int node, int start, int end, int L, int R) {
        if (R < start || end < L) {
            return INT_MIN;
        }
        if (L <= start && end <= R) {
            return treeMax[node];
        }
        int mid = (start + end) / 2;
        return max(queryMax(2 * node + 1, start, mid, L, R), queryMax(2 * node + 2, mid + 1, end, L, R));
    }

    int queryMin(int node, int start, int end, int L, int R) {
        if (R < start || end < L) {
            return INT_MAX;
        }
        if (L <= start && end <= R) {
            return treeMin[node];
        }
        int mid = (start + end) / 2;
        return min(queryMin(2 * node + 1, start, mid, L, R), queryMin(2 * node + 2, mid + 1, end, L, R));
    }

public:
    SegmentTree(const vector<int>& arr) {
        n = arr.size();
        treeMax.resize(4 * n);
        treeMin.resize(4 * n);
        buildTree(arr, 0, 0, n - 1);
    }

    void update(int idx, int value) {
        updateTree(0, 0, n - 1, idx, value);
    }

    int getMax(int L, int R) {
        return queryMax(0, 0, n - 1, L, R);
    }

    int getMin(int L, int R) {
        return queryMin(0, 0, n - 1, L, R);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        SegmentTree segTree(a);

        auto getMaxConvenience = [&]() -> int {
            int maxConvenience = INT_MIN;
            for (int l = 0; l < n; ++l) {
                for (int r = l; r < n; ++r) {
                    int maxVal = segTree.getMax(l, r);
                    int minVal = segTree.getMin(l, r);
                    int convenience = maxVal - minVal - (r - l);
                    maxConvenience = max(maxConvenience, convenience);
                }
            }
            return maxConvenience;
        };

        cout << getMaxConvenience() << "\n";

        while (q--) {
            int p, x;
            cin >> p >> x;
            --p;  // Convert to 0-based index
            segTree.update(p, x);
            cout << getMaxConvenience() << "\n";
        }
    }

    return 0;
}
