#include <bits/stdc++.h>
using namespace std;

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

long long combinations(int n) {
    return static_cast<long long>(n) * (n - 1) / 2;
}

int cyclic_diff(char a, char b) {
    return (b - a + 26) % 26;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<string> vec1(n);
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }
    vector<vector<int>> mapp(n, vector<int>(k - 1));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k - 1; j++) {
            mapp[i][j] = cyclic_diff(vec1[i][j], vec1[i][j + 1]);
        }
    }
    
    sort(all(mapp));
    
    vll ans;
    int count = 1;
    for (int i = 0; i < n - 1; i++) {
        if (mapp[i] == mapp[i+1]) {
            count++;
        } else {
            ans.push_back(count);
            count = 1;
        }
    }
    ans.push_back(count);
    
    ll ansss = 0;
    for (int i = 0; i < ans.size(); i++) {
        ansss += combinations(ans[i]);
    }
    cout << ansss << endl;
}

int main() {
    FAST;
    ll t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}