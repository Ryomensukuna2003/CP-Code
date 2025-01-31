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
    ll n;cin>>n;
    vll vec1,temp(n);
    forin(n,vec1);
    map<ll,ll>m1;
    for(int i = 0;i<n;i++){
        if(i==0)temp[i] = vec1[i];
        else if(i%2==1)temp[i] = temp[i-1] + (-1)*vec1[i];
        else temp[i] = temp[i-1] + vec1[i];
        if(temp[i]==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    for(auto x:temp){
        m1[x]++;
        if(m1[x]>1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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