#include <iostream>
#include <string>
#include <climits>
#include <vector>

using namespace std;

long long evaluate(const string& expr) {
    vector<long long> numbers;
    vector<char> operators;
    long long num = 0;
    for (char ch : expr) {
        if (isdigit(ch)) {
            num = num * 10 + (ch - '0');
        } else {
            numbers.push_back(num);
            operators.push_back(ch);
            num = 0;
        }
    }
    numbers.push_back(num);

    // First, perform all multiplications
    for (size_t i = 0; i < operators.size(); ) {
        if (operators[i] == '*') {
            numbers[i] = numbers[i] * numbers[i+1];
            numbers.erase(numbers.begin() + i + 1);
            operators.erase(operators.begin() + i);
        } else {
            i++;
        }
    }

    // Then, perform all additions
    long long result = numbers[0];
    for (size_t i = 0; i < operators.size(); i++) {
        result += numbers[i+1];
    }

    return result;
}

void backtrack(const string& s, int index, string current, int opsLeft, long long& minResult) {
    if (index == s.length()) {
        if (opsLeft == 0) {
            long long result = evaluate(current);
            if (result < minResult) {
                minResult = result;
            }
        }
        return;
    }

    current += s[index];
    if (index < s.length() - 1) {
        if (opsLeft > 0) {
            backtrack(s, index + 1, current + '+', opsLeft - 1, minResult);
            backtrack(s, index + 1, current + '*', opsLeft - 1, minResult);
        }
    } else {
        backtrack(s, index + 1, current, opsLeft, minResult);
    }
}

long long findMinResult(const string& s, int n) {
    long long minResult = LLONG_MAX;
    backtrack(s, 0, "", n - 2, minResult);
    return minResult;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << findMinResult(s, n) << endl;
    }
    return 0;
}