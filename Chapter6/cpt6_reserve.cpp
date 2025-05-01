#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    int n = 20;
    for (int i = 0; i < n; ++i) {
        cout << v1.capacity() << " ";
        v1.push_back(i);
    }
    cout << endl;
}