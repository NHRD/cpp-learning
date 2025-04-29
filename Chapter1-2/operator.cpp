#include <iostream>
using namespace std;

int main(){
    cout << (10 / 4) << endl;
    cout << (1 / 3) << endl;
    cout << (10 % 4) << endl;
    cout << (1 + 2 * 3) << endl;
    cout << ((1 + 2) * 3) << endl;
    cout << (1 / 3.0) << endl;
    cout << (1 < 2 && 2 < 3) << endl;
    cout << (1 < 2 && 3 < 2) << endl;
    cout << (2 < 1 || 1 < 2) << endl;
    cout << (!(2 < 1)) << endl;
    cout << (1 < 2 && 0) << endl;
    cout << (0 || 1 < 2) << endl;
    
    int a = 5, b = 3;
    cout << (a & b) << endl; // Bitwise AND
    cout << (a | b) << endl; // Bitwise OR
    cout << (a ^ b) << endl; // Bitwise XOR
    cout << (~a) << endl; // Bitwise NOT

    int c = 5;
    cout << (c << 1) << endl; // Left shift
    cout << (c >> 1) << endl; // Right shift
    cout << (c << 2) << endl; // Left shift
    cout << (c >> 2) << endl; // Right shift

    int m = 0;
    cout << (m = 1, m + 2) << endl; // Comma operator

    int n = 1;
    int o = --n;
    int p = --n;
    n = o / p;
    cout << n << endl; // Output: 0
}