#include <iostream>
#include <vector>

using namespace std;

long long getElementAt(int n, long long k) {
    while (n > 1) {
        long long half = (1LL << (n - 1)) - 1;
        
        if (k > half + 1) {
            k -= half + 1;
        } else if (k == half + 1) {
            return n;
        }
        n--;  // Base case: n == 1
    }
    return 1;
}

int main() {
    int n;
    long long k;
    cin >> n >> k;
    cout << getElementAt(n, k) << endl;
    return 0;
}
