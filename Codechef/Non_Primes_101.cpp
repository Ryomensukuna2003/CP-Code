#include <bits/stdc++.h>
using namespace std;

#define vll vector<long long int>
#define ll long long
#define pb push_back
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)

const int MAX_SUM = 201;  // Since max element is 100, max sum is 200

vector<bool> sieve_of_eratosthenes() {
    vector<bool> is_prime(MAX_SUM, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX_SUM; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX_SUM; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

struct CompareFirst {
    bool operator()(const pair<int,int>& a, const pair<int,int>& b) const {
        return a.first < b.first;
    }
};

void solve(const vector<bool>& is_prime) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int k = v[i];
        for (int x = k + 1; x <= 200; x++) {
            if (is_prime[x]==0 ) {
                int diff = x - k;
                if (mp.find(diff) != mp.end()) {
                    cout << mp[diff] + 1 << " " << i + 1 << endl;
                    return;
                }
            }
        }
        mp[k] = i;
    }
    cout << -1 << endl;
}

int main() {
    FAST;
    int t = 1;
    cin >> t;
    vector<bool> is_prime = sieve_of_eratosthenes();
    while (t--) {
        solve(is_prime);
    }
    return 0;
}