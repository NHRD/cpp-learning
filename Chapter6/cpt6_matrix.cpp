#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << v.size() << endl; // Output: 3
    cout << v[0].size() << endl; // Output: 3
    cout << v[1][2] << endl; // Output: 6
}