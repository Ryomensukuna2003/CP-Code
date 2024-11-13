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

ll sumofnumber(ll x){
    ll sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}

ll sizeofnumber(ll x){
    ll count=0;
    while(x>0){
        count++;
        x/=10;
    }
    return count;
}

void solve()
{
    int a,b,c,count=0;cin>>a>>b>>c;
    vector<pair<ll,ll>>vec1;
    vll ans;
    rep(i,1,81){
        ll temp=(b*(pow(i,a)))+c;
        if(sizeofnumber(temp)<10) vec1.push_back({i,temp});
    }
    for(auto x:vec1){
        if(sumofnumber(x.second)==x.first){
            count++;
            ans.push_back(x.second);
        }
    }
    cout<<count<<endl;
    forout(ans);
}

int main(){
    FAST;
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}