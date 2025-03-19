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
    string s;
	cin >> s;
	int suf0 = 0, suf1 = 0;
	for(auto &it:s)
	{
		suf0 += (it == '0');
		suf1 += (it == '1');
	}
	int ans = min(suf0, suf1);
	int pref0 = 0, pref1 = 0;
	for(auto &it:s)
	{
		pref0 += (it == '0');
		suf0 -= (it == '0');
		pref1 += (it == '1');
		suf1 -= (it == '1');
		ans = min(ans, pref1 + suf0);
		ans = min(ans, pref0 + suf1);
	}
	cout << ans << endl;
}

int main(){
    FAST;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}