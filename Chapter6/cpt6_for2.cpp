#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v{2, 3, 5, 7};
    for (auto x:v) cout << x << ", ";
    cout << endl;

}