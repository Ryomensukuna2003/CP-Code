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

bool check_prime(ll n){
    if(n==1)return false;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

void solve()
{
    ll n;cin>>n;
    if(n==1)cout<<"FastestFinger"<<endl;
    else if(n%2!=0) cout<<"Ashishgup"<<endl;
    else{
        bool lose=false;
        if(n > 2 && n % 2 == 0){
            // If pure Power of 2 ashish will -1 and then fastest will get 1
			if(((n & (n - 1)) == 0) || (n % 4 != 0 && check_prime(n / 2))){
                cout<<"FastestFinger"<<endl;
                return;
            }		
		}
        cout<<"Ashishgup"<<endl;
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