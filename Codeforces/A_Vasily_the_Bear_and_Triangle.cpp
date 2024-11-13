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

int sgn(int x) {
	if (x > 0) return 1;
	if (x == 0) return 0;
	return -1;
}
void solve()
{
    int x,y;cin>>x>>y;
	int v = abs(x) + abs(y);
	pair<int,int> f = make_pair(v * sgn(x), 0);
	pair<int,int> s = make_pair(0, v * sgn(y));
	if (f.first > s.first)
		swap(f, s);
	printf("%d %d %d %d\n", f.first, f.second, s.first, s.second);

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