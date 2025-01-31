#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, target;
    cin >> n >> target;
    vll vec1(n);
    for (int i = 0; i < n; i++) cin >> vec1[i];

    ll sum = 0, count = 0;
    map<ll, ll> prefix_count;
    prefix_count[0] = 1; 

    for (int i = 0; i < n; i++) {
        sum += vec1[i];
        count += prefix_count[sum - target]; 
        prefix_count[sum]++; 
    }

    cout << count << endl;
}

int main() {
    FAST;
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
