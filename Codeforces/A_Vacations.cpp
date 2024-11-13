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
    // DP question (will do in 3 days)
    int n;cin>>n;
    vll vec1,vec2;forin(n,vec1);
    int rest=0;
    for(int i=0;i<n;i++){
        if(vec1[i]==0) vec2.pb(0);
        else if(vec1[i]==1) vec2.pb(1);
        else if(vec1[i]==2) vec2.pb(2);
        else{
            if(vec2.size()>0 && vec2[i-1]==1){
                vec2.pb(2);
            }
            else{
                vec2.pb(1);
            }
        }
    }
    forout(vec2);
    for(int i=0;i<n;i++){
        if(vec2[i]==vec2[i+1] || vec2[i]==0){
            rest++;
        } 
    }
    cout<<rest<<endl;
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