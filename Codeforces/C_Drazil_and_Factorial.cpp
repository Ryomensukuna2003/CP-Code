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
    string ans="";
    string s;cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='2') ans+="2";
        if(s[i]=='3') ans+="3";
        if(s[i]=='4') ans+="322";
        if(s[i]=='5') ans+="5";
        if(s[i]=='6') ans+="53";
        if(s[i]=='7') ans+="7";
        if(s[i]=='8') ans+="7222";
        if(s[i]=='9') ans+="7332";
    }
    sort(all(ans));
    reverse(all(ans));
    cout<<ans<<endl;
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