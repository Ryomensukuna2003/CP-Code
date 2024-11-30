#include <bits/stdc++.h>
using namespace std;

//                                「本 物 の 柔 術 を 見 せ て や る」

#ifndef ONLINE_JUDGE
#include "../template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
const ll M = 1e9 + 7;
const ll N = 1e5 + 5;
const ll inf = 2e18;
#define all(x)   (x).begin(), (x).end()
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define forin(x,y) for(auto i=0;i<x;i++){int x;cin>>x;y.pb(x);}
#define forout(x)  for(auto y:x){cout<<y<<' ';}
#define value_sort(v) sort(all(v),[](auto &l,auto &r){return l.second<r.second;});
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

int dp[5][5][2]; // 3D DP array

int lcs(int i, int j, string &s1, string &s2) {
    if (i == s1.size() || j == s2.size()) {
        return 0;
    }

    if (dp[i][j][0] != -1) {
        return dp[i][j][0];
    }

    if (s1[i] == s2[j]) {
        dp[i][j][1] = 0; // Diagonal move (match)
        return dp[i][j][0] = 1 + lcs(i + 1, j + 1, s1, s2);
    } else {
        int down = lcs(i + 1, j, s1, s2);
        int right = lcs(i, j + 1, s1, s2);

        if (down >= right) {
            dp[i][j][1] = 1; // Down move
            return dp[i][j][0] = down;
        } else {
            dp[i][j][1] = 2; // Right move
            return dp[i][j][0] = right;
        }
    }
}

void printLCS(string &s1, string &s2) {
    int i = 0, j = 0;
    cout << "LCS: ";
    while (i < s1.size() && j < s2.size()) {
        if (dp[i][j][1] == 0) { // Diagonal move
            cout << s1[i];
            i++;
            j++;
        } else if (dp[i][j][1] == 1) { // Down move
            i++;
        } else { // Right move
            j++;
        }
    }
    cout << endl;
}

int longestCommonSubsequence(string text1, string text2) {
    memset(dp, -1, sizeof(dp));
    int lcsLength = lcs(0, 0, text1, text2);
    printLCS(text1, text2);
    return lcsLength;
}

int main() {
    string text1 = "abcde", text2 = "ace";
    int lcsLength = longestCommonSubsequence(text1, text2);
    cout << "Length of LCS: " << lcsLength << endl;
    debug(dp);
    return 0;
}
