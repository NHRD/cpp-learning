#include <iostream>
#include <string>
using namespace std;

template <typename T>
void mySwap(T& x, T& y) {
    T tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a = 1;
    int b = 2;
    mySwap(a, b);
    cout << a << endl;
    cout << b << endl;

    double x = 4.56;
    double y = 1.23;
    cout << x << endl;
    cout << y << endl;

    string s = "abc";
    string t = "xyz";
    mySwap(s, t);
    cout << s << endl;
    cout << t << endl;
}