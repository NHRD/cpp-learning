#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v{2, 3, 4, 5};
    for (auto& x : v) ++x;
    for (auto x : v) cout << x << ", ";
    cout << endl;
}