#include <bits/stdc++.h>
using namespace std;

//                                「本 物 の 柔 術 を 見 せ て や る」

using ll = long long;
using vll = vector<ll>;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl "\n"

constexpr ll M = 1e9 + 7;
constexpr ll N = 1e5 + 5;
constexpr ll inf = 2e18;

#define FAST ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i, l, r) for (ll i = (l); i < (r); i++)
#define rev(i, r, l) for (ll i = (r); i >= (l); i--)
#define forin(n, v) for (ll i = 0; i < (n); i++) { ll x; cin >> x; v.pb(x); }
#define forout(v) for (const auto& y : (v)) { cout << y << ' '; } cout << '\n';
#define value_sort(v) sort(all(v), [](const auto &l, const auto &r) { return l.second < r.second; });

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

struct Node {
    Node* bit[26] = {nullptr, nullptr};
    bool used = false;
    bool wordEnd = false;
};

void insertKey(Node* root, const string& key) {
    Node* curr = root;
    for (char c : key) {
        if (curr->bit[c - 'a'] == nullptr) {
            Node* newNode = new Node();
            curr->bit[c - 'a'] = newNode;
        }
        curr = curr->bit[c - 'a'];
    }
    curr->wordEnd = true;
}



void solve()
{
    Node* root = new Node();
    int n;string s;cin>>n>>s;
    if(n==1){
        insertKey(root,s);
    }
    else if(n==2){

    }
    else{

    }
}

int main() {
    FAST;
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}