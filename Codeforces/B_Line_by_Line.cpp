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
    long double n,p;cin>>n>>p;
    cout<<fixed<<setprecision(15);
    long double original_p=pow((p/100),(n-1));
    long double p_dash=(pow(original_p,(1/n)));
    cout<<(p_dash*100)-p<<endl;
}

int main(){
    FAST;
    ll test=1;
    cin>>test;
    for(int i=0;i<test;i++){
        cout<<"Case #"<<i+1<<": ";
        solve();
    }
    return 0;
}