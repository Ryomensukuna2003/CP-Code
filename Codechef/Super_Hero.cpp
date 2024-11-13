#include <bits/stdc++.h>
using namespace std;

//                                「本 物 の 柔 術 を 見 せ て や る」

#define vll      vector<long long int>
#define ll       long long
#define pb       push_back
const ll M = 1e9 + 7;
const ll N = 1e6 + 5;
const ll inf = 2e18;
#define all(x)   (x).begin(), (x).end()
#define FAST     ios_base ::sync_with_stdio(false); cin.tie(NULL)
#define forin(x,y) for(auto i=0;i<x;i++){int x;cin>>x;y.pb(x);}
#define forout(x)  for(auto y:x){cout<<y<<' ';}
#define value_sort(v) sort(all(v),[](auto &l,auto &r){return l.second<r.second;});
#define rep(i, l, r) for (ll(i) = (l); (i) < (r); (i)++)


vector<bool> is_prime(N+1, true);

void initialize_primes() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= N; i++) {
        if (is_prime[i] && (long long)i * i <= N) {
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}
bool isPowerOfTwo(int n)
{
    if (n == 0) return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

void solve()
{
    int n,x;cin>>n>>x;
    ll largestpowerof2=0;
    int initial=0;
    for(int i=x;i>0;i--){
        if(isPowerOfTwo(i)){
            largestpowerof2=i;
            break;
        }
    }
    ll ans=0;
    ans = log2(largestpowerof2);
    while(n!=1){
        for (int i = 2; i <= n; i++) {
            if (is_prime[i] && n % i == 0) {
                n/=i;
                break;
            }
        }
        ans++;
    }
    cout<<ans<<endl;
}

int main(){
    initialize_primes();
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}