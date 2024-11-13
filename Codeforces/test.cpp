// #include <bits/stdc++.h>
// using namespace std;

// //                                「本 物 の 柔 術 を 見 せ て や る」

// #define vll      vector<long long int>
// #define ll       long long
// #define pb       push_back
// const ll M = 1e9 + 7;
// const ll N = 1e5 + 5;
// const ll inf = 2e18;
// #define all(x)   (x).begin(), (x).end()
// #define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
// #define forin(x,y) for(auto i=0;i<x;i++){int x;cin>>x;y.pb(x);}
// #define forout(x)  for(auto y:x){cout<<y<<' ';}
// #define value_sort(v) sort(all(v),[](auto &l,auto &r){return l.second<r.second;});
// #define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)

// void solve()
// {
//     int n;cin>>n;
//     vll vec1,vec2;
//     forin(n,vec1);
//     vec2=vec1;
//     int count1=0,count2=0;
//     rep(i,0,n-1){
//         rep(j,0,n-i-1){
//             if(vec1[j]>vec1[j+1]){
//                 swap(vec1[j],vec1[j+1]);
//                 count1++;
//             }
//         }
//     }
//     rep(i,0,n-1){
//         rep(j,0,n-i-1){
//             if(vec2[j]<vec2[j+1]){
//                 swap(vec2[j],vec2[j+1]);
//                 count2++;
//             }
//         }
//     }
//     cout<<min(count1,count2)<<endl;
// }

// int main(){
//     FAST;
//     ll t=1;
//     //cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

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
    string s;cin>>s;
    string name;cin>>name;
    // s+=name;
    vector<pair<char,int>>vec1;
    rep(i,0,s.size()){
        vec1.push_back({s[i],(int)s[i]});
    }
    sort(all(vec1));
    for(auto x:vec1){
        cout<<x.first<<" "<<x.second<<endl;
    }
    int previousGood=0;
    for(int i=0;i<name.size();i++){
        for(int j=0;j<s.size();j++){
            
        }
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