#include <iostream>
using namespace std;

int x;

void f() {
    x = 10;
    int y = 20;

    cout << "y in f(): " << y << endl;
}

int main() {
    x = 5;
    int y = 15;
    f();

    cout << "x in main(): " << x << endl;
    cout << "y in main(): " << y << endl;
}