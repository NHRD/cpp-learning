#include <iostream>
#include <vector>
using namespace std;

auto myReverse(const vector<int>& m, const int pos){
    int newpos = 0;
    int reversed[] = {};
    for (int i = pos - 1; i <= 0; --i){
        reversed[newpos] = m[i];
    }
    return reversed;
}

int main(){
    int a[] = {2, 9, 4, 1, 5, 3};
    myReverse(a, end(a));
    for (auto i : a) cout << i << ", ";
    cout << endl;

    int b[] = { 3 };
    myReverse(b, end(b));
    for (auto i : b) cout << i << ", ";
    cout << endl;
}