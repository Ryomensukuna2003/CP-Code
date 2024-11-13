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


// So bitmasking is like we will genrate all binary deciamls upto 10e10 so we will have every combinations of 0 and 1 and hence we can replace 0 with 4 and 1 with 7 genrating all possible combinations upto 10e10

// Although we need lucky numbers upto 10e10 from this solution we did only 1024 operations to do so (Bitmasking Babyyyy)

vll genrateLuckysum(){
    vll temp;
    for(int i=1;i<=10;i++){
        for(int j=0;j<(1<<i);j++){
            string mask = bitset<10>(j).to_string();
            reverse(all(mask));
            string ans="";
            for(int k=i-1;k>=0;k--){
                (mask[k]=='0')?ans+='4':ans+='7';
            }
            temp.push_back(stoll(ans));
        }

    }
    return temp;
}

void solve()
{
    ll l,r;cin>>l>>r;
    vll luckyNumbers=genrateLuckysum();
    ll ans=0;
    int i=0;
    while (l <= r) {
        while (i < luckyNumbers.size() && luckyNumbers[i] < l) {
            i++;
        }
        if (i >= luckyNumbers.size()) break;
        ll nextLucky = luckyNumbers[i];
        ll right = min(r, nextLucky);
        ans += (right - l + 1) * nextLucky;
        l = right + 1;
    }
    cout<<ans<<endl;
    
}

int main(){
    FAST;
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}