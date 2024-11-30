#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <climits>

using namespace std;

bool canFormMainString(const vector<string>& substrings, const string& mainString, int K, string& result) {
    int n = mainString.length();
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    unordered_map<int, string> formedString;
    formedString[0] = "";

    for (int i = 0; i < n; ++i) {
        if (dp[i] == INT_MAX) continue;
        for (const string& sub : substrings) {
            int m = sub.length();
            if (i + m <= n) {
                int deletions = 0;
                for (int j = 0; j < m; ++j) {
                    if (mainString[i + j] != sub[j]) ++deletions;
                }
                if (dp[i] + deletions <= K) {
                    if (dp[i + m] > dp[i] + deletions) {
                        dp[i + m] = dp[i] + deletions;
                        formedString[i + m] = formedString[i] + sub;
                    }
                }
            }
        }
    }

    if (dp[n] <= K) {
        result = formedString[n];
        return true;
    }

    for (int i = n - 1; i >= 0; --i) {
        if (dp[i] <= K) {
            result = formedString[i];
            return false;
        }
    }

    return false;
}

int main() {
    int N;
    cin >> N;
    vector<string> substrings(N);
    for (int i = 0; i < N; ++i) {
        cin >> substrings[i];
    }
    string mainString;
    cin >> mainString;
    int K;
    cin >> K;

    string result;
    if (canFormMainString(substrings, mainString, K, result)) {
        if (result == mainString) {
            cout << "Possible" << endl;
        } else {
            cout << result << endl;
        }
    } else {
        if (result.empty()) {
            cout << "Nothing" << endl;
        } else {
            cout << result << endl;
        }
    }
}
