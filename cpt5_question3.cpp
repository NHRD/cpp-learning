#include <iostream>
#include <utility>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;

    double x = 4.56;
    double y = 1.23;
    cout << x << endl;
    cout << y << endl;

    string s = "abc";
    string t = "xyz";
    swap(s, t);
    cout << s << endl;
    cout << t << endl;
}