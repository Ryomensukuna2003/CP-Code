#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

const ll MAXN = 1000000;
vector<bool> prime(MAXN + 1, true);
vector<ll> cumluative(MAXN + 1, 0);
vector<ll> prime_count_prime(MAXN + 1, 0);

void sieve() {
    prime[0] = prime[1] = false;
    for (ll p = 2; p * p <= MAXN; p++) {
        if (prime[p]) {
            for (ll i = p * p; i <= MAXN; i += p) {
                prime[i] = false;
            }
        }
    }
}

void preprocess() {
    sieve();
    ll count = 0;
    rep(i, 0, MAXN + 1) {
        if (prime[i]) count++;
        cumluative[i] = count;
    }
    rep(i, 0, MAXN + 1) {
        prime_count_prime[i] = prime[cumluative[i]];
    }
    rep(i, 1, MAXN + 1) {
        prime_count_prime[i] += prime_count_prime[i - 1];
    }
}

void solve() {
    ll l, r;
    cin >> l >> r;
    cout << prime_count_prime[r] - prime_count_prime[l - 1] << endl;
}

int main() {
    FAST;
    preprocess();
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
