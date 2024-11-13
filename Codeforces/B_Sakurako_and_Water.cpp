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

void allMainDiagonals(vector<vector<ll>>& matrix) {
    ll n = matrix.size();    // rows
    ll m = matrix[0].size(); // columns
    ll ans=0;

    for(ll row = n-1; row >= 0; row--) {
        ll i = row,j = 0;
        vll temp;
        while(i < n && j < m) {
            temp.push_back(matrix[i][j]);
            i++;j++;
        }
        if(*min_element(all(temp))<0)ans+=abs(*min_element(all(temp)));
    }
    for(ll col = 1; col < m; col++) {
        ll i = 0, j = col;
        vll temp;
        while(i < n && j < m) {
            temp.push_back(matrix[i][j]);
            i++;j++;
        }
        if(*min_element(all(temp))<0)ans+=abs(*min_element(all(temp)));
    }
    cout<<ans<<endl;
}


void solve()
{
    int n;cin>>n;
    vector<vector<ll>>vec1;
    rep(i,0,n){
        vll temp;
        rep(j,0,n){
            int x;cin>>x;
            temp.push_back(x);
        }
        vec1.push_back(temp);
    }
    allMainDiagonals(vec1);
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