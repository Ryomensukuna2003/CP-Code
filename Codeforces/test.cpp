#include <iostream>
#include <cmath>

bool is_perfect_square(int n) {
    int sqrt_n = sqrt(n);
    return (sqrt_n * sqrt_n == n);
}

int main() {
    int a, b, c;
    a = 1;

    for (b = 2; b <= 10000; b++) {
        for (c = b + 1; c <= 10000; c++) {
            int diff1 = abs(a - b);
            int diff2 = abs(b - c);
            int diff3 = abs(c - a);

            if (is_perfect_square(diff1) && is_perfect_square(diff2) && is_perfect_square(diff3)) {
                if(b%2==0 && c%2!=0) cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
            }
        }
    }

    std::cout << "No solution found." << std::endl;
    return 1;
}