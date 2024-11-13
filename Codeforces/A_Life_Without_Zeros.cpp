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
    ll a,b,ans;cin>>a>>b;
    ans=a+b;
    string new_a="",new_b="",new_ans="";
    while(a>0){
        if(a%10!=0) new_a+=to_string(a%10);
        a/=10;
    }
    while(b>0){
        if(b%10!=0) new_b+=to_string(b%10);
        b/=10;
    }
    while(ans>0){
        if(ans%10!=0) new_ans+=to_string(ans%10);
        ans/=10;
    }
    reverse(all(new_a));
    reverse(all(new_b));
    reverse(all(new_ans));
    a=stoi(new_a);
    b=stoi(new_b);
    ans=stoi(new_ans);
    // cout<<a+b<<endl;
    if(a+b==ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    // cout<<new_a<<" "<<new_b <<endl;

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