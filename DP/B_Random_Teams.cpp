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
    ll n,k;cin>>n>>k;
    if(k==1){
        cout<<(n*(n-1))/2<<" ";
        cout<<(n*(n-1))/2<<endl;
    }
    else{
        ll teams_with_extra = n % k;
        ll teams_without_extra = k - teams_with_extra;
        ll members_per_team = n / k;
        ll min_pairs = (teams_without_extra * (members_per_team * (members_per_team - 1)) / 2) + 
                        (teams_with_extra * (members_per_team * (members_per_team + 1)) / 2);
        cout << min_pairs << " ";
        cout<<(((n-k+1)*(n-k))/2);
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