#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{ 2, 3, 5, 1, 4};
    auto begin = v.cbegin();
    auto end = v.cend();

    int target = 3;
    auto pos = find(begin, end, target);
    if (pos == end) cout << "Element not found" << endl;
    else cout << "Element found at position: " << *pos << endl;

    target = 6;
    pos = find(begin, end, target);
    if (pos == end) cout << "Element not found" << endl;
    else cout << "Element found at position: " << *pos << endl;
}