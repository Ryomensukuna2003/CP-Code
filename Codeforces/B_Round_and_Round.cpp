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

void solve()
{
    int n, x;cin >> n >> x;
    vll vec1;forin(n, vec1);
    vll vec2;forin(x, vec2);
    int sum = accumulate(all(vec2), (ll)0);
    if (sum >= 0) {
        int k = ((sum % n) + n) % n; // Adjusting k to be within the range [0, n-1]
        // cout << k << endl;
        for (int i = k; i < n; i++) {
            cout << vec1[i] << " ";
        }
        for (int i = 0; i < k; i++) {
            cout << vec1[i] << " ";
        }
    } else {
        int k = ((abs(sum) % n) + n) % n; // Adjusting k to be within the range [0, n-1]
        // cout << k << endl;
        for (int i = k; i < n; i++) {
            cout << vec1[i] << " ";
        }
        for (int i = 0; i < k; i++) {
            cout << vec1[i] << " ";
        }
    }
}

int main(){
    FAST;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}