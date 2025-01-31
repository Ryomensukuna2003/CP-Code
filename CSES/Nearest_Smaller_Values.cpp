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
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

void solve()
{
    int n;cin>>n;
    vll vec1;
    forin(n,vec1);
    stack<int>s1;
    vll ans(n);
    rep(i,0,n){
        while(!s1.empty() && vec1[s1.top()] >= vec1[i]){
            s1.pop();
        }
        if(s1.empty()) ans[i] = 0;
        else ans[i] = s1.top() + 1;
        s1.push(i);
    }
    forout(ans);
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
