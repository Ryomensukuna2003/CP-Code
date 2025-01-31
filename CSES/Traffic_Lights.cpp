#include <bits/stdc++.h>
using namespace std;

#define vll vector<long long int>
#define ll long long
#define pb push_back
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)

void solve() {
    int x, n;
    cin >> x >> n;
    vll vec1(n);
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    set<int> positions;
    multiset<int> distances;
    positions.insert(0);
    positions.insert(x);
    distances.insert(x); 

    for (int i = 0; i < n; i++) {
        int pos = vec1[i];
        // Find neighbors
        auto it = positions.upper_bound(pos);
        int right = *it;
        int left = *prev(it);

        // Remove the old gap
        distances.erase(distances.find(right - left));

        // Add the new gaps
        distances.insert(pos - left);
        distances.insert(right - pos);

        // Insert the new light position
        positions.insert(pos);

        // Output the maximum gap
        cout << *distances.rbegin() << " ";
    }

    cout << endl;
}

int main() {
    FAST;
    solve();
    return 0;
}
