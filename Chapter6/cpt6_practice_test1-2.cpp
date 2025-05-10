#include <iostream>
#include <vector>
using namespace std;

auto total(const vector<vector<int>>& m) {
    auto sum = 0;
    for (const auto& i : m) {
        for (const auto& j : i) {
            sum += j;
        }
    }
    return sum;
}

int main() {
    vector<vector<int>> m{{1, 2, 3}, {4, 5, 6}};
    cout << total(m) << endl;
}