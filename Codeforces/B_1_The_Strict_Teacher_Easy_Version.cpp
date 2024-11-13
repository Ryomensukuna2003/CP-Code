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
    int length,t,s;cin>>length>>t>>s;
    vll teachers;
    int x=2;
    forin(x,teachers);
    sort(all(teachers));
    int t1=teachers[0],t2=teachers[1];
    cin>>s;
    if(s==t1 || s==t2){
        cout<<0<<endl;
        return;
    }
    if(s<t1 && s<t2){
        cout<<s+(t1-s)-1<<endl;
    }
    else if(s>t1 && s>t2){
        cout<<(length-s)+(s-t2)<<endl;
    }
    else{
        int mid=(t1+t2)/2;
        int inital=abs(s-mid);
        int ans=inital+(min(abs(s-t1),abs(s-t2)));
        cout<<ans<<endl;
    }
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