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
    string s;cin>>s;
    ll one=0,zero=0;
    rep(i,0,s.size()){
        if(s[i]=='1')one++;
        else zero++;
    }
    if(one==zero){
        cout<<0<<endl;
        return;
    }
    string temp="";
    rep(i,0,s.size()){
        if(s[i]=='1' && zero--) temp+='0';
        else if(s[i]=='0' && one--) temp+='1';
        else temp+=s[i];
    }
    int index=0;
    rep(i,0,s.size()){
        if(s[i]==temp[i]){
            index=i;
            break;
        }
    }
    cout<<s.size()-index<<endl;
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