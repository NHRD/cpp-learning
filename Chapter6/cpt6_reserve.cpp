#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2;
    v2.reserve(100);
    int n = 20;
    for (int i = 0; i < n; ++i) {
        cout << v1.capacity() << " ";
        v1.push_back(i);
    }
    cout << endl;
    for (int j = 0; j < n; ++j) {
        cout << v2.capacity() << " ";
        v2.push_back(j);
        }
    cout << endl;
}