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


vll printDivisors(ll n)
{
    vll factors;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) factors.push_back(i);
            else {
                factors.push_back(i);
                factors.push_back(n/i);
            }
        }
    }
    return factors;
}

void solve()
{
    ll n;cin>>n;
    vll vec1;forin(n,vec1);
    sort(all(vec1));
    vll ans=printDivisors(vec1[n-1]);
    if(ans.size()==n){
        cout<<vec1[n-1]*2<<endl;
    }
    else{
        cout<<vec1[n-1]<<endl;
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