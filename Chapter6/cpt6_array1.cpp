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
}