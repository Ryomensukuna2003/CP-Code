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
#define forout(x)  for(auto y:x){cout<<y;}
#define value_sort(v) sort(all(v),[](auto &l,auto &r){return l.second<r.second;});
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

// https://www.quora.com/How-can-I-determine-the-divisibility-of-an-integer-number-by-90

void solve()
{
    int n,zero=0;cin>>n;
    vll vec1,ans;
    forin(n,vec1);
    rep(i,0,n){
        if(vec1[i]==0)zero++;
        else ans.push_back(vec1[i]);
    }
    sort(all(ans));
    reverse(all(ans));
    ll sum=accumulate(all(ans),(ll)0);
    for(int i=ans.size()-1;i>=0;i--){
        if(sum%9==0 && zero){
            forout(ans);
            while(zero--)cout<<0;
            return;
        }
        else{
            sum-=ans[ans.size()-1];
            ans.pop_back();
        }
        
    }
    if(zero)cout<<0<<endl;
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