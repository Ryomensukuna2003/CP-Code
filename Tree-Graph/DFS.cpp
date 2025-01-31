#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>& adj, int s) 
{
    queue<int> q;  
    vector<bool> visited(adj.size(), false);
    visited[s] = true;
    q.push(s);
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for (int x : adj[curr]) {
            if (!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

void dfs(int v, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[v] = true;
    cout << v << "-> ";
    for(auto child:adj[v]){
        if(!visited[child]){
            dfs(child,adj,visited);
        }
    }
}

int main() {
    int vertices, edges;
    cin >> vertices >> edges;
    vector<vector<int>> adj(vertices + 1);
    vector<bool> visited(vertices + 1, false);

    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, adj, visited);
}


void merge(vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main()
{
    vector<int> arr = { 12, 11, 13, 5, 6, 7 };
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
}