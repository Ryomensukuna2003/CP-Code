#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int m) {
    if (m < 2) return {2};  
    vector<bool> is_prime(m + 1, true);
    vector<int> primes;
    for (int i = 2; i <= m; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= m; j += i)
                is_prime[j] = false;
        }
    }
    return primes;
}

int solve(int n, vector<int>& primes, vector<int>& dp) {
    if (n == 0) return 0;
    if (n < 0) return INT_MAX;
    if (dp[n] != -1) return dp[n];

    int res = INT_MAX;
    for (int p : primes) {
        int sub = solve(n - p, primes, dp);
        if (sub != INT_MAX) res = min(res, sub + 1);
    }

    return dp[n] = res;
}

int minPrimes(int n, int m) {
    vector<int> primes = sieve(m);
    vector<int> dp(n + 1, -1);
    int ans = solve(n, primes, dp);
    return ans == INT_MAX ? -1 : ans;
}

int main() {
    int n = 10, m = 10;
    cout << minPrimes(n, m) << endl;
}
