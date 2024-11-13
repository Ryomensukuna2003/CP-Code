#include <bits/stdc++.h>
using namespace std;

#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
const ll N = 1e5 + 5;
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

void solve()
{
    ll m,n,i,j,k;
    cin>>n;
    ll a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    ll l=0,w=0,h=0, h1=0;
    cin>>m;
    while(m--)
    {
        cin>>w>>h;
        l=max(l+h1, a[w]);
        cout<<l<<endl;
        h1=h;
    }

}

int main() {
    FAST;
    ll t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
