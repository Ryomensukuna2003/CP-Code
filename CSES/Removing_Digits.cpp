#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, steps = 0;
    cin >> n;

    while (n > 0) {
        string s = to_string(n);
        char max_digit = '0';
        for (char c : s) {
            if (c > max_digit) {
                max_digit = c;
            }
        }
        n -= (max_digit - '0');
        steps++;
    }

    cout << steps << endl;
    return 0;
}
