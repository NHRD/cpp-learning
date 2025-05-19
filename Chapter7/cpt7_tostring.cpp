#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x = 123456;
    string strx = to_string(x);
    cout << strx.size() << endl;

    double y = 2.718;
    string stry = to_string(y);
    cout << stry << endl;
}
