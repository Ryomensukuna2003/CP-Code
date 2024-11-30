#include <bits/stdc++.h>
using namespace std;

//                                「本 物 の 柔 術 を 見 せ て や る」

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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    if (n < 5) {
      cout << -1 << '\n';
      continue;
    }
    vector<int> a;
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 1 && i != 5) {
        a.push_back(i);
      }
    }
    a.push_back(5);
    a.push_back(4);
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 0 && i != 4) {
        a.push_back(i);
      }
    }
    for (int i = 0; i < n; i++) {
      cout << a[i] << " \n"[i == n - 1];
    }
  }
  return 0;
}