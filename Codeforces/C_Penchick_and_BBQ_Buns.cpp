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

void solve()
{
    
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    if (n % 2 == 0) {
      for (int i = 1; i <= n; i++) {
        cout << (i + 1) / 2 << " \n"[i == n];
      }
      continue;
    }
    if (n >= 27) {
      vector<int> a(n);
      a[0] = a[9] = a[25] = 1;
      a[26] = a[22] = 2;
      for (int i = 1; i <= 8; i++) {
        a[i] = 3 + (i - 1) / 2;
      }
      for (int i = 10; i <= 21; i++) {
        a[i] = 7 + (i - 10) / 2;
      }
      a[23] = a[24] = 13;
      for (int i = 27; i < n; i++) {
        a[i] = (i + 1) / 2;
      }
      for (int i = 0; i < n; i++) {
        cout << a[i] << " \n"[i == n - 1];
      }
      continue;
    }
    cout << -1 << '\n';
  }
  return 0;
}


// 1 3 3 4 4 5 5 6 6 1 7 7 8 8 9 9 10 10 11 11 12 12 2 13 13 1 2
