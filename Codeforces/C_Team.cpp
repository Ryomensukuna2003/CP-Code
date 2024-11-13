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
    int x,y;cin>>x>>y;
    string s="";
    while(x!=(y-1) && x!=y && x>0 && y>0){
        if(y>0)s+="11";
        if(x>0)s+="0";
        x--;
        y-=2;
    }
    while(x>0 || y>0){
        if(y>0) s+="1";
        if(x>0) s+="0";
        x--;
        y--;
    }
    bool istrue=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0' && s[i+1]=='0'){
            istrue=false;
        }
        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1'){
            istrue=false;
        }
    }
    if(istrue) cout<<s<<endl;
    else cout<<-1<<endl;

    
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