#include <iostream>
#include <vector>
using namespace std;

void g1(vector<int> v) {
    v[0] = 100;
}

int main() {
    vector<int> v1{2, 3, 5, 7};
    cout << "Before g1: " << v1[0] << endl; // Output: 2
}
