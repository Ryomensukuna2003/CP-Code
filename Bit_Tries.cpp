// Bit Tries are used in problems like Maximum XOR Subarray, Maximum XOR Pair, etc.
//  - The idea is to store the binary representation of numbers in a trie.
// Insertion and Detelion of a number in a trie takes O(32) time as 32 is maximum number of bits in a number.



// Given set of elements and a query, find the maximum XOR of query with any element in the set.
// N<=10e5, A[i]<=10e6
// Approach: Insert all elements in a trie. Lets say we have 8 (1000) as a query so we will have to find a number opposite to 1000 in the trie i.e., 0111 or atleast 0011, 0001, 0101 etc.


#include <bits/stdc++.h>
using namespace std;

#define int long long

class trieNode {
public:
    int freq;
    trieNode* left;
    trieNode* right;
    trieNode() {
        freq = 0;
        left = NULL;
        right = NULL;
    }
};

void insert(int n, trieNode* head) {
    trieNode* cur = head;
    for (int i = 31; i >= 0; --i) {
        int bit = (n >> i)&1;
        if(bit) {
            if(!cur->right) {
                cur->right = new trieNode();
            }
            cur = cur->right;
            cur->freq++;
        }
        else {
            if(!cur->left) {
                cur->left = new trieNode();
            }
            cur = cur->left;
            cur->freq++;
        }
    }
}

void erase(int n, trieNode* head) {
    trieNode* cur = head;
    for (int i = 31; i >= 0; --i) {
        int bit = (n >> i)&1;
        if(bit) {
            cur->right->freq--;
            cur = cur->right;
        }
        else {
            cur->left->freq--;
            cur = cur->left;
        }
    }
}

int findMaxXOR(int n, trieNode* head) {
    trieNode* cur = head;
    int ans = 0;
    for (int j = 31; j >= 0; --j) {
        int bit = (n >> j)&1;
        if(bit) {
            if(cur->left && cur->left->freq > 0) {
                ans += (1<<j);
                cur = cur->left;
            }
            else {
                cur = cur->right;
            }
        }
        else {
            if(cur->right && cur->right->freq > 0) {
                ans += (1<<j);
                cur = cur->right;
            }
            else {
                cur = cur->left;
            }
        }
    }
    return ans;
}

signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int q;
    cin >> q;
    trieNode* head = new trieNode();
    insert(0, head);
    while(q--) {
        char c;
        int x;
        cin >> c >> x;
        if(c == '+') {
            insert(x, head);
        }
        else if(c == '-') {
            erase(x, head);
        }
        else {
            cout << findMaxXOR(x, head) << "\n";
        }
    }
    return 0;
}


// For given Y and K Create a Data structure that supports following operations:
// 1. Insert(x): Insert a number x in the data structure.
// 2. Remove(x): Remove a number x from the data structure.
// 3. Find a number x in the data structure such that x^y<=k;

// Borad Level Idea
// Insertion - We can Insert bits of number and on every level we can keep track of count of childern of that perticular node.
// Deletion - Instead of deleting the node we can decrease the count of childern of that node. So while traversing we can just backtrack if count of childern of a node is 0.

