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
    int a,b;cin>>a>>b;
    vector<vector<char>> vec1(a+2, vector<char>(b+2, '*'));
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            char x;cin>>x;
            vec1[i][j]=x;
        }
    }
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(vec1[i][j]=='.'){
                if((i+j) % 2 == 0) vec1[i][j] = 'B';
                else vec1[i][j] = 'W';
            }
        }
    }
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<vec1[i][j];
        }
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