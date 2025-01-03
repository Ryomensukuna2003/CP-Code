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
    deque<int>dq1;
    rep(i,0,x){
        int x;cin>>x;
        dq1.push_back(x);
    }
    vll ans;
    int cur_max=*max_element(all(dq1));
    ans.pb(cur_max);
    rep(i,x,n){
        int val; cin >> val;
        while(!dq1.empty() && dq1.front() <= i - x) dq1.pop_front();
        while(!dq1.empty() && dq1.back() < val) dq1.pop_back();
        dq1.push_back(val);
        ans.push_back(dq1.front());
    }
    forout(ans);
    cout << endl;
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