#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    cout << min(3, 2) << endl; // Outputs: 2
    cout << max(3, 2) << endl; // Outputs: 3
    cout << min({3, 2, 1, 4}) << endl; // Outputs: 1
    cout << max({3, 2, 1, 4}) << endl; // Outputs: 4
    auto result1 = minmax({3, 2, 1, 4});
    cout << result1.first << endl;
    cout << result1.second << endl; // Outputs: 4
}