#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v{2, 3, 4, 5};
    auto v2 = v;
    for (auto x : v2) cout << x << ", ";
    cout << endl;
}