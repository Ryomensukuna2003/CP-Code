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
    int d,x,y,count=0;cin>>d>>x>>y;
    if(x<=y){
        cout<<0<<endl;
        return;
    }
    double discount_amount=0;
    int dd=d;
    while(true){
        if(y<0  || count>y){
            cout<<-1<<endl;
            return;
        }
        count++;
        y--;
        
        double discount=dd*0.01;
        discount_amount=(x*discount);
        if(y>=(x-floor(discount_amount)) || (y==0 && (x-floor(discount_amount)==0))){
            cout<<count<<endl;
            return;
        }
        dd+=d;
    }
    cout<<count<<endl;
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