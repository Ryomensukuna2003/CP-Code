#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findNotSoRainyDay(const vector<int>& rain, int n, int x, int y) {
    for (int d = 1; d <= n; ++d) {
        bool isNotSoRainy = true;
        for (int j = max(1, d - x); j < d; ++j) {
            if (rain[j-1] <= rain[d-1]) {
                isNotSoRainy = false;
                break;
            }
        }        
        if (!isNotSoRainy) continue;
        for (int j = d + 1; j <= min(n, d + y); ++j) {
            if (rain[j-1] <= rain[d-1]) {
                isNotSoRainy = false;
                break;
            }
        }        
        if (isNotSoRainy) {
            return d;
        }
    }
    
    return -1; // No not-so-rainy day found
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    
    vector<int> rain(n);
    for (int i = 0; i < n; ++i) {
        cin >> rain[i];
    }
    
    int result = findNotSoRainyDay(rain, n, x, y);
    
    if (result != -1) {
        cout << result << endl;
    } else {
        cout << "No not-so-rainy day found" << endl;
    }
    
    return 0;
}