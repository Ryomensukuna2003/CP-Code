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
    ll n,k;cin>>n>>k;
    vll vec1;forin(n,vec1);
    ll mini=*min_element(all(vec1));
    if(n==1 || n==2){
        if(mini<=k){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else{
        ll seconds=(mini*(((n-1)*2)-1));
        // cout<<((n-1)*2)-1<<endl;
        // cout<<seconds<<endl;
        if(seconds<=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    FAST;
    ll test=1;
    cin>>test;
    for(int i=0;i<test;i++){
        cout<<"Case #"<<i+1<<": ";
        solve();
    }
    return 0;
}

// 5 100
// 16
// 15
// 20
// 28
// 17