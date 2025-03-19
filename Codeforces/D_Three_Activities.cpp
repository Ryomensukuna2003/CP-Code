#include <bits/stdc++.h>
using namespace std;
#define vll vector<long long int>
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

vector<ll> ski, movie, board;
int n;

// Memoization table: dp[mask][day] = max total friends
vector<vector<ll>> memo;

// Recursive function with memoization
ll solve(int mask, int day) {
    if (mask == 7) return 0;
    if (day == n) return -1e18;
    if (memo[mask][day] != -1) return memo[mask][day];
    
    // Skip this day
    ll best = solve(mask, day + 1);
    
    // Try each activity on current day if not done yet
    
    // Try skiing (activity 0) if not done yet
    if ((mask & 1) == 0) {
        ll with_ski = ski[day] + solve(mask | 1, day + 1);
        best = max(best, with_ski);
    }
    
    // Try movie (activity 1) if not done yet
    if ((mask & 2) == 0) {
        ll with_movie = movie[day] + solve(mask | 2, day + 1);
        best = max(best, with_movie);
    }
    
    // Try board games (activity 2) if not done yet
    if ((mask & 4) == 0) {
        ll with_board = board[day] + solve(mask | 4, day + 1);
        best = max(best, with_board);
    }
    return memo[mask][day] = best;
}

void solve_test() {
    cin >> n;
    ski.resize(n);
    movie.resize(n);
    board.resize(n);
    for (int i = 0; i < n; i++) cin >> ski[i];
    for (int i = 0; i < n; i++) cin >> movie[i];
    for (int i = 0; i < n; i++) cin >> board[i];
    memo.assign(8, vector<ll>(n, -1));
    cout << solve(0, 0) << endl;
}

int main() {
    FAST;
    int t = 1;
    cin >> t;
    while (t--) {
        solve_test();
    }
    return 0;
}