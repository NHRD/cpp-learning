#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
void myReverse(T a, T b){
    while(a < b) {
        swap(*(a++), *(--b));
    }
}

int main(){
    int a[] = { 2, 9, 4, 1, 5, 3 };
    myReverse(a, end(a));
    for (auto i : a) {
        cout << i << ", ";
    }
    cout << endl;

    double b[] = { 3.5 };
    myReverse(b, end(b));
    for (auto i : b) {
        cout << i << ", ";
    }
    cout << endl;

    vector<int> c;
    myReverse(c.begin(), c.end());
    for (auto i : c) {
        cout << i << ", ";
    }
    cout << endl;
}