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
    int n,x;cin>>n>>x;
    vll vec1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec1.push_back(x);
    }
    sort(all(vec1));
    int ans;
	if (x == 0) ans = vec1[0] - 1;
    else ans = vec1[x - 1];
	int cnt = 0;
	for (int i = 0; i < n; ++i) if (vec1[i] <= ans) ++cnt;
	if (cnt != x || !(1 <= ans && ans <= 1000 * 1000 * 1000)) {
		cout<<-1<<endl;
		return;
	}
	cout<<ans<<endl;
}

int main(){
    FAST;
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}