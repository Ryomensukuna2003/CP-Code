#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;
        vector<int> A(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        sort(A.rbegin(), A.rend());
        int total_water = 0;
        for (int i = 0; i < N; ++i) {
            total_water += A[i];
        }
        int bottles_needed = 0;
        for (int i = 0; i < N; ++i) {
            if (total_water <= 0) break;
            total_water -= X;
            bottles_needed++;
        }
        cout << bottles_needed << endl;
    }

    return 0;
}
