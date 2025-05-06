#include <iostream>
#include <vector>
using namespace std;

void g1(vector<int> v) {
    v[0] = 100;
}

int g2(const vector<int>& v){
    return v[0];
}

void g3(vector<int>& v) {
    v[0] = 1000;
}

auto h(){
    vector<int> v{12, 13, 15, 17};
    return v;
}

int main() {
    vector<int> v1{2, 3, 5, 7};

    g1(v1); // Pass by value, v1[0] is not changed
    cout << v1[0] << endl; // Output: 2

    cout << g2(v1) << endl; // Output: 2

    g3(v1); 
    cout << v1[0] << endl;

    auto v2(h());
    for (auto x: v2) {
        cout << x << " ";
    }
    cout << endl; // Output: 2 3 5 7

}
