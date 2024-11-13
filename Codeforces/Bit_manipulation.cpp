#include <bits/stdc++.h>
using namespace  std;

//                                「本 物 の 柔 術 を 見 せ て や る」
 
#define vll      vector<long long int>
#define ll       long long

#define all(x)   (x).begin(), (x).end()
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define forin(x,y) for(auto i=0;i<x;i++){int x;cin>>x;y.pb(x);}
#define forout(x)  for(auto y:x){cout<<y<<' ';}


void solve()
{
    int n,x;cin>>n>>x;

    // Check if ith bit is set or not
    cout<<((n&(1<<x)==0) ? "YES" : "NO");

    // Set the ith bit
    n=(n|(1<<x));

    // Unset the ith bit
    n=(n^(1<<x)); 
//      OR 
    n=n&(~(1<<x));

    // Toggle ith bit
    n=(n^(1<<x));


    // unset rightmost bit
    // 12     = 1100
    // 12 - 1 = 1011
    // take & = 1000
    n=n&(n-1);

    // Check if n is power of 2
    if(n&(n-1)==0);



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
