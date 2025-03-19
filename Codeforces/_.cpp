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
    Node* bit[2] = {nullptr, nullptr};
    bool used = false;
};

void insert(Node* root, ll num) {
    Node* cur = root;
    for (ll i = 31; i >= 0; i--) {
        ll b = (num >> i) & 1;
        if (!cur->bit[b]) cur->bit[b] = new Node();
        cur = cur->bit[b];
    }
}

// Find a number that if XORed with num gives targetXOR else return false
bool findPair(Node* root, ll num, ll targetXor, vector<Node*>& visited) {
    Node* cur = root;
    for (ll i = 31; i >= 0; i--) {
        ll curr_bit_num=(num>>i)&1; // Creates a mask and finds bit at pos i
        ll curr_bit_target=(targetXor>>i)&1; // Creates a mask and finds bit at pos i
        ll need_bit=curr_bit_num^curr_bit_target;
        if (!cur->bit[need_bit] || cur->bit[need_bit]->used) return false; // Check if exist and not used else return false
        cur = cur->bit[need_bit];
    }
    cur->used = true;
    visited.push_back(cur);
    return true;
}

bool checkSameXOR(vector<ll>& a, vector<ll>& b, ll n) {
    Node* root = new Node();
    // insert first vector in trie DS
    for(ll x:a)insert(root,x);

    for(ll x:a){
        // calculate targetXOR with first number of second array for every element of first array
        ll targetXor=x^b[0];
        vector<Node*>visited;
        bool possible=true;

        // If we got a pair then for every pair we will check if it gives same XOR
        for(ll i=0;i<n && possible;i++) {
            if(!findPair(root,b[i],targetXor,visited))possible=false;
            if(!possible) break;
        }

        for(Node* node:visited)node->used=false;  // Reset used flags
        if(possible)return true;
    }
    return false;
}

int main() {
    FAST;
    ll n;
    cin >> n;
    vll vec1, vec2;
    forin(n, vec1);
    forin(n, vec2);
    cout << (checkSameXOR(vec1, vec2, n) ? "Yes" : "No") << endl;
    return 0;
}
