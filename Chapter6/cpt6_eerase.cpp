#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5};
    v.pop_back();
    for (auto x : v){
        cout << x << " ";
    }
        cout << endl;
    v.erase(v.begin() + 1);
    for (auto x : v){
        cout << x << " ";
    }
        cout << endl;
}