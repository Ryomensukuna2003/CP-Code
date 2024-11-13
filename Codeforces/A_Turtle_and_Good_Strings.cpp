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
    int n;cin>>n;
    string s;cin>>s;
    if(s[0]==s[n-1])cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    // bool ans=false;
    // for(int i=1;i<floor(n*1.0/2);i++){
    //     bool found=true;
    //     for(int j=1;j<n;j+=i){
    //         if(s[j]==s[0]){
    //             found=false;
    //             break;
    //         }
    //     }
    //     if(found){
    //         ans=true;
    //         // cout<<i<<endl;
    //         break;
    //     }
    // }
    // if(!ans){
    //     cout<<"NO"<<endl;
    // }
    // else{
    //     cout<<"YES"<<endl;
    // }
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