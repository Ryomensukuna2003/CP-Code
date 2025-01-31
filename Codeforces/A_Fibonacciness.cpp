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

ll countfib(vll vec1){
    ll count=0;
    for(int i=0;i<vec1.size()-2;i++){
        if(vec1[i]+vec1[i+1]==vec1[i+2])count++;
    }
    return count;
}

void solve()
{
    int a,b,d,e;cin>>a>>b>>d>>e;
    vll vec1(5, 0);
    vec1[0]=a;
    vec1[1]=b;
    vec1[3]=d;
    vec1[4]=e;

    vec1[2]=vec1[0]+vec1[1];
    ll count1=countfib(vec1);
    vec1[2]=vec1[3]-vec1[1];
    ll count2=countfib(vec1);
    vec1[2]=vec1[4]-vec1[3];
    ll count3=countfib(vec1);
    cout<<max({count1,count2,count3})<<endl;
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