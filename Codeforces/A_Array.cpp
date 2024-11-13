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
    vll vec1;forin(n,vec1);
    sort(all(vec1));
    int neg=0,pos=0,zero=0;
    for(int i=0;i<n;i++){
        if(vec1[i]==0)zero++;
        else if(vec1[i]<0)neg++;
        else if(vec1[i]>0)pos++;
    }
    if(pos==0){
        cout<<1<<" "<<vec1[0]<<endl;
        cout<<2<<" "<<vec1[1]<<" "<<vec1[2]<<endl;
        cout<<n-3<<" ";
        rep(i,3,n) cout<<vec1[i]<<" ";
    }
    else{
        cout<<1<<" ";
        cout<<vec1[0]<<endl;
        
        cout<<pos<<" ";
        rep(i,0,n) if(vec1[i]>0) cout<<vec1[i]<<" ";
        cout<<endl;
        cout<<zero+(neg-1)<<" ";
        rep(i,1,n) if(vec1[i]<0)  cout<<vec1[i]<<" ";
        rep(i,0,n) if(vec1[i]==0) cout<<vec1[i]<<" ";
        cout<<endl;
    }
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