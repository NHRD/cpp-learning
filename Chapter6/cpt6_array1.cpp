#include <iostream>
#include <array>
using namespace std;

int main(){
    int a[5];

    a[0] = 2;
    a[1] = 3;
    a[2] = 5;
    a[3] = 7;
    a[4] = 11;

    for(int i = 0; i < 5; ++i) {
        cout << a[i] << ", ";
    }
    cout << endl;

    int b[] = {2, 3, 5, 7, 11};
    size_t size = end(b) - begin(b);
    cout << size << endl;

    for(int i = 0; i < 5; ++i) {
        cout << b[i] << ", ";
    }
    cout << endl;
    for(auto& i : a) i *= 2;
    for (size_t i = 0; i < 5; ++i) cout << a[i] << ", ";
    cout << endl;
    
    for(int i = 0; i < 5; ++i) {
        cout << a[i] << ", ";
    }
    cout << endl;
}