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
    int n;cin>>n;
    vector<string>vec1;
    for(int i=0;i<n;i++){
        string a,b;cin>>a>>b;
        a+=b;
        vec1.push_back(a);
    }
    // sort(all(vec1));
    // forout(vec1);
    int count=1,max_count=0;
    for(int i=0;i<n;i++){
        if(vec1[i]==vec1[i+1])count++;
        else count=1;
        max_count=max(count,max_count);
    }
    // forout(vec1);cout<<endl;
    cout<<max_count<<endl;
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