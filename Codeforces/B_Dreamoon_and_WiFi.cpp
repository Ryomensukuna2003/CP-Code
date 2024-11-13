#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int final1 = 0, final2 = 0, idk = 0;

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == '+') final1++;
        else final1--;
    }

    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == '+') final2++;
        else if (s2[i] == '-') final2--;
        else idk++;
    }
    final1 -= final2;

    if ((final1 + idk) % 2 != 0 || idk < abs(final1)) {
        cout << "0.000000000000" << endl;
    } else {
        int plus_needed = (final1 + idk) / 2;
        double probability = nCr(idk, plus_needed) / pow(2, idk);
        printf("%.12f\n", probability);
    }
}

int main() {
    solve();
    return 0;
}
