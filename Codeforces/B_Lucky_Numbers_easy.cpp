#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> lucky;

void trY() {
    vector<pair<long long, pair<int, int>>> stack;
    stack.push_back({4, {1, 0}});
    stack.push_back({7, {0, 1}});
    
    while (!stack.empty()) {
        auto [number, counts] = stack.back();
        stack.pop_back();
        
        int fours = counts.first;
        int sevens = counts.second;
        
        if (number > 1e10) continue;
        
        if (fours == sevens)
            lucky.push_back(number);
        
        stack.push_back({number * 10 + 4, {fours + 1, sevens}});
        stack.push_back({number * 10 + 7, {fours, sevens + 1}});
    }
}

int main() {
  trY();
  
  long long n;
  cin >> n;
  
  sort(lucky.begin(), lucky.end());
  cout << lucky[lower_bound(lucky.begin(), lucky.end(), n) - lucky.begin()] << endl;
  
  return 0;
}